from machine import Pin, I2C, SPI, PWM, Timer, ADC
import framebuf
import time
import math

Vbat_Pin = 29

# Pin definition
I2C_SDA = 6
I2C_SDL = 7
I2C_INT = 17
I2C_RST = 16

DC = 8
CS = 9
SCK = 10
MOSI = 11
MISO = 12
RST = 13

BL = 25

DEBOUNCE_TIME = 300  # milliseconds
SCROLL_THRESHOLD = 20  # pixels

# LCD Driver
class LCD_1inch28(framebuf.FrameBuffer):
    def __init__(self):
        self.width = 240
        self.height = 240
        
        self.cs = Pin(CS, Pin.OUT)
        self.rst = Pin(RST, Pin.OUT)
        
        self.cs(1)
        self.spi = SPI(1, 100_000_000, polarity=0, phase=0, bits=8, sck=Pin(SCK), mosi=Pin(MOSI), miso=None)
        self.dc = Pin(DC, Pin.OUT)
        self.dc(1)
        self.buffer = bytearray(self.height * self.width * 2)
        super().__init__(self.buffer, self.width, self.height, framebuf.RGB565)
        self.init_display()
        
        # Define color, Micropython fixed to BRG format
        self.red = 0x07E0
        self.green = 0x001f
        self.blue = 0xf800
        self.white = 0xffff
        self.black = 0x0000
        self.brown = 0x8430
        self.gray = 0xC618
        self.light_gray = 0xDEFB
        self.dark_gray = 0x6B4D
        
        self.fill(self.white)  # Clear screen
        self.show()  # Show

        self.pwm = PWM(Pin(BL))
        self.pwm.freq(5000)  # Turn on the backlight
        
    def write_cmd(self, cmd):  # Write command
        self.cs(1)
        self.dc(0)
        self.cs(0)
        self.spi.write(bytearray([cmd]))
        self.cs(1)

    def write_data(self, buf):  # Write data
        self.cs(1)
        self.dc(1)
        self.cs(0)
        self.spi.write(bytearray([buf]))
        self.cs(1)
        
    def set_bl_pwm(self, duty):  # Set screen brightness
        self.pwm.duty_u16(duty)  # max 65535
        
    def init_display(self):  # LCD initialization
        self.rst(1)
        time.sleep(0.01)
        self.rst(0)
        time.sleep(0.01)
        self.rst(1)
        time.sleep(0.05)
        
        self.write_cmd(0xEF)
        self.write_cmd(0xEB)
        self.write_data(0x14) 
        
        self.write_cmd(0xFE) 
        self.write_cmd(0xEF) 

        self.write_cmd(0xEB)
        self.write_data(0x14) 

        self.write_cmd(0x84)
        self.write_data(0x40) 

        self.write_cmd(0x85)
        self.write_data(0xFF) 

        self.write_cmd(0x86)
        self.write_data(0xFF) 

        self.write_cmd(0x87)
        self.write_data(0xFF)

        self.write_cmd(0x88)
        self.write_data(0x0A)

        self.write_cmd(0x89)
        self.write_data(0x21) 

        self.write_cmd(0x8A)
        self.write_data(0x00) 

        self.write_cmd(0x8B)
        self.write_data(0x80) 

        self.write_cmd(0x8C)
        self.write_data(0x01) 

        self.write_cmd(0x8D)
        self.write_data(0x01) 

        self.write_cmd(0x8E)
        self.write_data(0xFF) 

        self.write_cmd(0x8F)
        self.write_data(0xFF) 


        self.write_cmd(0xB6)
        self.write_data(0x00)
        self.write_data(0x20)

        self.write_cmd(0x36)
        self.write_data(0x98)

        self.write_cmd(0x3A)
        self.write_data(0x05) 


        self.write_cmd(0x90)
        self.write_data(0x08)
        self.write_data(0x08)
        self.write_data(0x08)
        self.write_data(0x08) 

        self.write_cmd(0xBD)
        self.write_data(0x06)
        
        self.write_cmd(0xBC)
        self.write_data(0x00)

        self.write_cmd(0xFF)
        self.write_data(0x60)
        self.write_data(0x01)
        self.write_data(0x04)

        self.write_cmd(0xC3)
        self.write_data(0x13)
        self.write_cmd(0xC4)
        self.write_data(0x13)

        self.write_cmd(0xC9)
        self.write_data(0x22)

        self.write_cmd(0xBE)
        self.write_data(0x11) 

        self.write_cmd(0xE1)
        self.write_data(0x10)
        self.write_data(0x0E)

        self.write_cmd(0xDF)
        self.write_data(0x21)
        self.write_data(0x0c)
        self.write_data(0x02)

        self.write_cmd(0xF0)   
        self.write_data(0x45)
        self.write_data(0x09)
        self.write_data(0x08)
        self.write_data(0x08)
        self.write_data(0x26)
        self.write_data(0x2A)

        self.write_cmd(0xF1)    
        self.write_data(0x43)
        self.write_data(0x70)
        self.write_data(0x72)
        self.write_data(0x36)
        self.write_data(0x37)  
        self.write_data(0x6F)


        self.write_cmd(0xF2)   
        self.write_data(0x45)
        self.write_data(0x09)
        self.write_data(0x08)
        self.write_data(0x08)
        self.write_data(0x26)
        self.write_data(0x2A)

        self.write_cmd(0xF3)   
        self.write_data(0x43)
        self.write_data(0x70)
        self.write_data(0x72)
        self.write_data(0x36)
        self.write_data(0x37) 
        self.write_data(0x6F)

        self.write_cmd(0xED)
        self.write_data(0x1B) 
        self.write_data(0x0B) 

        self.write_cmd(0xAE)
        self.write_data(0x77)
        
        self.write_cmd(0xCD)
        self.write_data(0x63)


        self.write_cmd(0x70)
        self.write_data(0x07)
        self.write_data(0x07)
        self.write_data(0x04)
        self.write_data(0x0E) 
        self.write_data(0x0F) 
        self.write_data(0x09)
        self.write_data(0x07)
        self.write_data(0x08)
        self.write_data(0x03)

        self.write_cmd(0xE8)
        self.write_data(0x34)

        self.write_cmd(0x62)
        self.write_data(0x18)
        self.write_data(0x0D)
        self.write_data(0x71)
        self.write_data(0xED)
        self.write_data(0x70) 
        self.write_data(0x70)
        self.write_data(0x18)
        self.write_data(0x0F)
        self.write_data(0x71)
        self.write_data(0xEF)
        self.write_data(0x70) 
        self.write_data(0x70)

        self.write_cmd(0x63)
        self.write_data(0x18)
        self.write_data(0x11)
        self.write_data(0x71)
        self.write_data(0xF1)
        self.write_data(0x70) 
        self.write_data(0x70)
        self.write_data(0x18)
        self.write_data(0x13)
        self.write_data(0x71)
        self.write_data(0xF3)
        self.write_data(0x70) 
        self.write_data(0x70)

        self.write_cmd(0x64)
        self.write_data(0x28)
        self.write_data(0x29)
        self.write_data(0xF1)
        self.write_data(0x01)
        self.write_data(0xF1)
        self.write_data(0x00)
        self.write_data(0x07)

        self.write_cmd(0x66)
        self.write_data(0x3C)
        self.write_data(0x00)
        self.write_data(0xCD)
        self.write_data(0x67)
        self.write_data(0x45)
        self.write_data(0x45)
        self.write_data(0x10)
        self.write_data(0x00)
        self.write_data(0x00)
        self.write_data(0x00)

        self.write_cmd(0x67)
        self.write_data(0x00)
        self.write_data(0x3C)
        self.write_data(0x00)
        self.write_data(0x00)
        self.write_data(0x00)
        self.write_data(0x01)
        self.write_data(0x54)
        self.write_data(0x10)
        self.write_data(0x32)
        self.write_data(0x98)

        self.write_cmd(0x74)
        self.write_data(0x10)
        self.write_data(0x85)
        self.write_data(0x80)
        self.write_data(0x00) 
        self.write_data(0x00) 
        self.write_data(0x4E)
        self.write_data(0x00)
        
        self.write_cmd(0x98)
        self.write_data(0x3e)
        self.write_data(0x07)

        self.write_cmd(0x35)
        self.write_cmd(0x21)

        self.write_cmd(0x11)

        self.write_cmd(0x29)
    
    # 设置窗口
    def setWindows(self, Xstart, Ystart, Xend, Yend): 
        self.write_cmd(0x2A)
        self.write_data(0x00)
        self.write_data(Xstart)
        self.write_data(0x00)
        self.write_data(Xend - 1)
        
        self.write_cmd(0x2B)
        self.write_data(0x00)
        self.write_data(Ystart)
        self.write_data(0x00)
        self.write_data(Yend - 1)
        
        self.write_cmd(0x2C)
     
    # Show
    def show(self): 
        self.setWindows(0, 0, self.width, self.height)
        
        self.cs(1)
        self.dc(1)
        self.cs(0)
        self.spi.write(self.buffer)
        self.cs(1)
        
    # Write characters, size is the font size, the minimum is 1
    def write_text(self, text, x, y, size, color):
        ''' Method to write Text on OLED/LCD Displays
            with a variable font size

            Args:
                text: the string of chars to be displayed
                x: x co-ordinate of starting position
                y: y co-ordinate of starting position
                size: font size of text
                color: color of text to be displayed
        '''
        background = self.pixel(x, y)
        info = []
        # Creating reference charaters to read their values
        self.text(text, x, y, color)
        for i in range(x, x + (8 * len(text))):
            for j in range(y, y + 8):
                # Fetching amd saving details of pixels, such as
                # x co-ordinate, y co-ordinate, and color of the pixel
                px_color = self.pixel(i, j)
                info.append((i, j, px_color)) if px_color == color else None
        # Clearing the reference characters from the screen
        self.text(text, x, y, background)
        # Writing the custom-sized font characters on screen
        for px_info in info:
            self.fill_rect(size * px_info[0] - (size - 1) * x, size * px_info[1] - (size - 1) * y, size, size, px_info[2]) 

    def circle(self, x0, y0, radius, color, fill=False):
        ''' Draws a circle on the screen.
            Args:
                x0, y0: Center of the circle
                radius: Radius of the circle
                color: Color of the circle
                fill: Whether to fill the circle
        '''
        f = 1 - radius
        ddF_x = 1
        ddF_y = -2 * radius
        x = 0
        y = radius

        self.pixel(x0, y0 + radius, color)
        self.pixel(x0, y0 - radius, color)
        self.pixel(x0 + radius, y0, color)
        self.pixel(x0 - radius, y0, color)

        while x < y:
            if f >= 0:
                y -= 1
                ddF_y += 2
                f += ddF_y
            x += 1
            ddF_x += 2
            f += ddF_x

            self.pixel(x0 + x, y0 + y, color)
            self.pixel(x0 - x, y0 + y, color)
            self.pixel(x0 + x, y0 - y, color)
            self.pixel(x0 - x, y0 - y, color)
            self.pixel(x0 + y, y0 + x, color)
            self.pixel(x0 - y, y0 + x, color)
            self.pixel(x0 + y, y0 - x, color)
            self.pixel(x0 - y, y0 - x, color)

            if fill:
                for i in range(x0 - x, x0 + x):
                    self.pixel(i, y0 + y, color)
                    self.pixel(i, y0 - y, color)
                for i in range(x0 - y, x0 + y):
                    self.pixel(i, y0 + x, color)
                    self.pixel(i, y0 - x, color)

# Touch driver
class Touch_CST816T(object):
    # Initialize the touch chip
    def __init__(self, address=0x15, mode=0, i2c_num=1, i2c_sda=6, i2c_scl=7, int_pin=21, rst_pin=22, LCD=None):
        self._bus = I2C(id=i2c_num, scl=Pin(i2c_scl), sda=Pin(i2c_sda), freq=400_000)  # Initialize I2C
        self._address = address  # Set slave address
        self.int = Pin(int_pin, Pin.IN, Pin.PULL_UP)     
        self.tim = Timer()     
        self.rst = Pin(rst_pin, Pin.OUT)
        self.Reset()
        bRet = self.WhoAmI()
        if bRet:
            print("Success: Detected CST816T.")
            Rev = self.Read_Revision()
            print("CST816T Revision = {}".format(Rev))
            self.Stop_Sleep()
        else:
            print("Error: Not Detected CST816T.")
            return None
        self.Mode = mode
        self.Gestures = "None"
        self.Flag = self.Flgh = self.l = 0
        self.X_point = self.Y_point = 0
        self.int.irq(handler=self.Int_Callback, trigger=Pin.IRQ_FALLING)
        self.last_x = 0
        self.last_y = 0
        self.last_time = 0
      
    def _read_byte(self, cmd):
        rec = self._bus.readfrom_mem(int(self._address), int(cmd), 1)
        return rec[0]
    
    def _read_block(self, reg, length=1):
        rec = self._bus.readfrom_mem(int(self._address), int(reg), length)
        return rec
    
    def _write_byte(self, cmd, val):
        self._bus.writeto_mem(int(self._address), int(cmd), bytes([int(val)]))

    def WhoAmI(self):
        if (0xB5) != self._read_byte(0xA7):
            return False
        return True
    
    def Read_Revision(self):
        return self._read_byte(0xA9)
      
    # Stop sleeping
    def Stop_Sleep(self):
        self._write_byte(0xFE, 0x01)
    
    # Reset    
    def Reset(self):
        self.rst(0)
        time.sleep_ms(1)
        self.rst(1)
        time.sleep_ms(50)
    
    # Set mode   
    def Set_Mode(self, mode, callback_time=10, rest_time=5): 
        # mode = 0 gestures mode 
        # mode = 1 point mode 
        # mode = 2 mixed mode 
        if (mode == 1):      
            self._write_byte(0xFA, 0X41)
            
        elif (mode == 2):
            self._write_byte(0xFA, 0X71)
            
        else:
            self._write_byte(0xFA, 0X11)
            self._write_byte(0xEC, 0X01)
     
    # Get the coordinates of the touch
    def get_point(self):
        xy_point = self._read_block(0x03, 4)
        
        x_point = ((xy_point[0] & 0x0f) << 8) + xy_point[1]
        y_point = ((xy_point[2] & 0x0f) << 8) + xy_point[3]
        
        self.X_point = x_point
        self.Y_point = y_point
        
    def Int_Callback(self, pin):
        current_time = time.ticks_ms()
        if current_time - self.last_time < DEBOUNCE_TIME:
            return
        
        self.last_time = current_time
        if self.Mode == 0:
            self.Gestures = self._read_byte(0x01)

        elif self.Mode == 1:           
            self.Flag = 1
            self.get_point()

    def Timer_callback(self, t):
        self.l += 1
        if self.l > 100:
            self.l = 50

class QMI8658(object):
    def __init__(self, address=0X6B):
        self._address = address
        self._bus = I2C(id=1, scl=Pin(I2C_SDL), sda=Pin(I2C_SDA), freq=100_000)
        bRet = self.WhoAmI()
        if bRet:
            self.Read_Revision()
        else:
            return None
        self.Config_apply()

    def _read_byte(self, cmd):
        rec = self._bus.readfrom_mem(int(self._address), int(cmd), 1)
        return rec[0]
    
    def _read_block(self, reg, length=1):
        rec = self._bus.readfrom_mem(int(self._address), int(reg), length)
        return rec
    
    def _read_u16(self, cmd):
        LSB = self._bus.readfrom_mem(int(self._address), int(cmd), 1)
        MSB = self._bus.readfrom_mem(int(self._address), int(cmd) + 1, 1)
        return (MSB[0] << 8) + LSB[0]
    
    def _write_byte(self, cmd, val):
        self._bus.writeto_mem(int(self._address), int(cmd), bytes([int(val)]))
        
    def WhoAmI(self):
        bRet = False
        if (0x05) == self._read_byte(0x00):
            bRet = True
        return bRet
    
    def Read_Revision(self):
        return self._read_byte(0x01)
    
    def Config_apply(self):
        # REG CTRL1
        self._write_byte(0x02, 0x60)
        # REG CTRL2 : QMI8658AccRange_8g  and QMI8658AccOdr_1000Hz
        self._write_byte(0x03, 0x23)
        # REG CTRL3 : QMI8658GyrRange_512dps and QMI8658GyrOdr_1000Hz
        self._write_byte(0x04, 0x53)
        # REG CTRL4 : No
        self._write_byte(0x05, 0x00)
        # REG CTRL5 : Enable Gyroscope And Accelerometer Low-Pass Filter 
        self._write_byte(0x06, 0x11)
        # REG CTRL6 : Disables Motion on Demand.
        self._write_byte(0x07, 0x00)
        # REG CTRL7 : Enable Gyroscope And Accelerometer
        self._write_byte(0x08, 0x03)

    def Read_Raw_XYZ(self):
        xyz = [0, 0, 0, 0, 0, 0]
        raw_timestamp = self._read_block(0x30, 3)
        raw_acc_xyz = self._read_block(0x35, 6)
        raw_gyro_xyz = self._read_block(0x3b, 6)
        raw_xyz = self._read_block(0x35, 12)
        timestamp = (raw_timestamp[2] << 16) | (raw_timestamp[1] << 8) | (raw_timestamp[0])
        for i in range(6):
            xyz[i] = (raw_xyz[(i * 2) + 1] << 8) | (raw_xyz[i * 2])
            if xyz[i] >= 32767:
                xyz[i] = xyz[i] - 65535
        return xyz
    
    def Read_XYZ(self):
        xyz = [0, 0, 0, 0, 0, 0]
        raw_xyz = self.Read_Raw_XYZ()  
        # QMI8658AccRange_8g
        acc_lsb_div = (1 << 12)
        # QMI8658GyrRange_512dps
        gyro_lsb_div = 64
        for i in range(3):
            xyz[i] = raw_xyz[i] / acc_lsb_div
            xyz[i + 3] = raw_xyz[i + 3] * 1.0 / gyro_lsb_div
        return xyz

# Draw the click wheel interface
def draw_click_wheel():
    LCD.fill(LCD.white)
    # Draw the outer circle
    LCD.circle(120, 120, 90, LCD.gray)
    LCD.circle(120, 120, 90, LCD.white, True)
    
    # Draw the inner circle
    LCD.circle(120, 120, 50, LCD.gray)
    LCD.circle(120, 120, 50, LCD.white, True)
    
    # Draw the center button
    LCD.circle(120, 120, 20, LCD.gray)
    LCD.circle(120, 120, 20, LCD.gray, True)
    
    # Draw the text on the click wheel
    LCD.write_text('MENU', 90, 30, 2, LCD.black)
    LCD.write_text('<<', 30, 110, 2, LCD.black)
    LCD.write_text('>>', 180, 110, 2, LCD.black)
    LCD.write_text('>/||', 90, 200, 2, LCD.black)
    
    LCD.show()

# Detect scrolling direction
def detect_scrolling(x, y):
    global last_angle
    dx = x - 120
    dy = y - 120
    if dx == 0 and dy == 0:
        return
    
    angle = math.atan2(dy, dx) * 180 / math.pi
    if angle < 0:
        angle += 360
    
    if last_angle is not None:
        delta_angle = angle - last_angle
        if delta_angle > 180:
            delta_angle -= 360
        elif delta_angle < -180:
            delta_angle += 360
        
        if abs(delta_angle) > SCROLL_THRESHOLD:
            if delta_angle > 0:
                print("Scrolling Clockwise >>>>>")
                LCD.circle(120, 120, 20, LCD.red, True)
            else:
                print("Scrolling Counter-Clockwise <<<<<")
                LCD.circle(120, 120, 20, LCD.blue, True)
            LCD.show()
    
    last_angle = angle

# Touch handling for click wheel
def handle_click_wheel():
    Touch.Mode = 1
    Touch.Set_Mode(Touch.Mode)
    draw_click_wheel()
    
    try:
        while True:
            if Touch.Flag == 1:
                x, y = Touch.X_point, Touch.Y_point
                if 20 < x < 60 and 110 < y < 140:
                    print("<< Previous")
                elif 180 < x < 220 and 110 < y < 140:
                    print("Next >>")
                elif 100 < x < 140 and 210 < y < 240:
                    print("PLAY/PAUSE")
                elif 100 < x < 140 and 30 < y < 60:
                    print("MENU")
                elif 100 < x < 140 and 100 < y < 140:
                    print("CENTER BUTTON")
                else:
                    detect_scrolling(x, y)
                Touch.Flag = 0
    except KeyboardInterrupt:
        pass

if __name__ == '__main__':
    LCD = LCD_1inch28()
    LCD.set_bl_pwm(65535)

    Touch = Touch_CST816T(mode=1, LCD=LCD)
    last_angle = None

    handle_click_wheel()
