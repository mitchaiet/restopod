from machine import Pin, I2C, SPI, PWM, Timer, ADC
import framebuf
import time
import math

# Pin definition
I2C_SDA, I2C_SCL, I2C_INT, I2C_RST = 6, 7, 17, 16
DC, CS, SCK, MOSI, MISO, RST = 8, 9, 10, 11, 12, 13
BL = 25

DEBOUNCE_TIME = 300  # milliseconds
SCROLL_THRESHOLD = 20  # pixels

# LCD Driver
class LCD_1inch28(framebuf.FrameBuffer):
    def __init__(self):
        self.width, self.height = 240, 240
        self.cs, self.rst = Pin(CS, Pin.OUT), Pin(RST, Pin.OUT)
        self.cs(1)
        self.spi = SPI(1, 100_000_000, polarity=0, phase=0, bits=8, sck=Pin(SCK), mosi=Pin(MOSI), miso=None)
        self.dc = Pin(DC, Pin.OUT)
        self.dc(1)
        self.buffer = bytearray(self.height * self.width * 2)
        super().__init__(self.buffer, self.width, self.height, framebuf.RGB565)
        self.init_display()
        
        # Define color, Micropython fixed to BRG format
        self.red, self.green, self.blue = 0x07E0, 0x001f, 0xf800
        self.white, self.black = 0xffff, 0x0000
        self.brown, self.gray = 0x8430, 0xC618
        self.light_gray, self.dark_gray = 0xDEFB, 0x6B4D
        
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
        
        cmds = [
            (0xEF, None), (0xEB, 0x14), (0xFE, None), (0xEF, None), (0xEB, 0x14),
            (0x84, 0x40), (0x85, 0xFF), (0x86, 0xFF), (0x87, 0xFF), (0x88, 0x0A),
            (0x89, 0x21), (0x8A, 0x00), (0x8B, 0x80), (0x8C, 0x01), (0x8D, 0x01),
            (0x8E, 0xFF), (0x8F, 0xFF), (0xB6, [0x00, 0x20]), (0x36, 0x98), (0x3A, 0x05),
            (0x90, [0x08, 0x08, 0x08, 0x08]), (0xBD, 0x06), (0xBC, 0x00), (0xFF, [0x60, 0x01, 0x04]),
            (0xC3, 0x13), (0xC4, 0x13), (0xC9, 0x22), (0xBE, 0x11), (0xE1, [0x10, 0x0E]),
            (0xDF, [0x21, 0x0c, 0x02]), (0xF0, [0x45, 0x09, 0x08, 0x08, 0x26, 0x2A]),
            (0xF1, [0x43, 0x70, 0x72, 0x36, 0x37, 0x6F]), (0xF2, [0x45, 0x09, 0x08, 0x08, 0x26, 0x2A]),
            (0xF3, [0x43, 0x70, 0x72, 0x36, 0x37, 0x6F]), (0xED, [0x1B, 0x0B]), (0xAE, 0x77),
            (0xCD, 0x63), (0x70, [0x07, 0x07, 0x04, 0x0E, 0x0F, 0x09, 0x07, 0x08, 0x03]),
            (0xE8, 0x34), (0x62, [0x18, 0x0D, 0x71, 0xED, 0x70, 0x70, 0x18, 0x0F, 0x71, 0xEF, 0x70, 0x70]),
            (0x63, [0x18, 0x11, 0x71, 0xF1, 0x70, 0x70, 0x18, 0x13, 0x71, 0xF3, 0x70, 0x70]),
            (0x64, [0x28, 0x29, 0xF1, 0x01, 0xF1, 0x00, 0x07]), (0x66, [0x3C, 0x00, 0xCD, 0x67, 0x45, 0x45, 0x10, 0x00, 0x00, 0x00]),
            (0x67, [0x00, 0x3C, 0x00, 0x00, 0x00, 0x01, 0x54, 0x10, 0x32, 0x98]), (0x74, [0x10, 0x85, 0x80, 0x00, 0x00, 0x4E, 0x00]),
            (0x98, [0x3e, 0x07]), (0x35, None), (0x21, None), (0x11, None), (0x29, None)
        ]
        
        for cmd, data in cmds:
            self.write_cmd(cmd)
            if data:
                if isinstance(data, list):
                    for d in data:
                        self.write_data(d)
                else:
                    self.write_data(data)
    
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
     
    def show(self): 
        self.setWindows(0, 0, self.width, self.height)
        self.cs(1)
        self.dc(1)
        self.cs(0)
        self.spi.write(self.buffer)
        self.cs(1)
        
    def write_text(self, text, x, y, size, color):
        background = self.pixel(x, y)
        info = []
        self.text(text, x, y, color)
        for i in range(x, x + (8 * len(text))):
            for j in range(y, y + 8):
                px_color = self.pixel(i, j)
                if px_color == color:
                    info.append((i, j, px_color))
        self.text(text, x, y, background)
        for px_info in info:
            self.fill_rect(size * px_info[0] - (size - 1) * x, size * px_info[1] - (size - 1) * y, size, size, px_info[2]) 

    def circle(self, x0, y0, radius, color, fill=False):
        f, ddF_x, ddF_y = 1 - radius, 1, -2 * radius
        x, y = 0, radius

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
class Touch_CST816T:
    def __init__(self, address=0x15, mode=0, i2c_num=1, i2c_sda=6, i2c_scl=7, int_pin=21, rst_pin=22, LCD=None):
        self._bus = I2C(id=i2c_num, scl=Pin(i2c_scl), sda=Pin(i2c_sda), freq=400_000)
        self._address = address
        self.int = Pin(int_pin, Pin.IN, Pin.PULL_UP)
        self.tim = Timer()
        self.rst = Pin(rst_pin, Pin.OUT)
        self.Reset()
        if self.WhoAmI():
            print("Success: Detected CST816T.")
            print(f"CST816T Revision = {self.Read_Revision()}")
            self.Stop_Sleep()
        else:
            print("Error: Not Detected CST816T.")
            return None
        self.Mode = mode
        self.Gestures = "None"
        self.Flag = self.Flgh = self.l = 0
        self.X_point = self.Y_point = 0
        self.int.irq(handler=self.Int_Callback, trigger=Pin.IRQ_FALLING)
        self.last_x = self.last_y = self.last_time = 0
      
    def _read_byte(self, cmd):
        return self._bus.readfrom_mem(int(self._address), int(cmd), 1)[0]
    
    def _read_block(self, reg, length=1):
        return self._bus.readfrom_mem(int(self._address), int(reg), length)
    
    def _write_byte(self, cmd, val):
        self._bus.writeto_mem(int(self._address), int(cmd), bytes([int(val)]))

    def WhoAmI(self):
        return self._read_byte(0xA7) == 0xB5
    
    def Read_Revision(self):
        return self._read_byte(0xA9)
      
    def Stop_Sleep(self):
        self._write_byte(0xFE, 0x01)
    
    def Reset(self):
        self.rst(0)
        time.sleep_ms(1)
        self.rst(1)
        time.sleep_ms(50)
    
    def Set_Mode(self, mode, callback_time=10, rest_time=5): 
        modes = {0: [0xFA, 0X11, 0xEC, 0X01], 1: [0xFA, 0X41], 2: [0xFA, 0X71]}
        for cmd in modes.get(mode, []):
            self._write_byte(cmd, modes[mode][1])
     
    def get_point(self):
        xy_point = self._read_block(0x03, 4)
        self.X_point = ((xy_point[0] & 0x0f) << 8) + xy_point[1]
        self.Y_point = ((xy_point[2] & 0x0f) << 8) + xy_point[3]
        
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
    dx, dy = x - 120, y - 120
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
