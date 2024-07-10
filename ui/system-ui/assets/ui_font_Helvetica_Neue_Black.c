/*******************************************************************************
 * Size: 16 px
 * Bpp: 1
 * Opts: --bpp 1 --size 16 --font /Users/mitchaiet/Documents/GitHub/restopod/ui/system-ui/assets/HelveticaNeueBlack.otf -o /Users/mitchaiet/Documents/GitHub/restopod/ui/system-ui/assets/ui_font_Helvetica_Neue_Black.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_HELVETICA_NEUE_BLACK
#define UI_FONT_HELVETICA_NEUE_BLACK 1
#endif

#if UI_FONT_HELVETICA_NEUE_BLACK

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xfe, 0x90, 0x1f, 0xf0,

    /* U+0022 "\"" */
    0xef, 0xb6, 0xd3, 0x4c,

    /* U+0023 "#" */
    0x1b, 0x86, 0xe1, 0xb9, 0xff, 0x7f, 0xce, 0xc3,
    0x73, 0xfe, 0xff, 0x9d, 0x87, 0x61, 0xd8,

    /* U+0024 "$" */
    0x4, 0x1, 0x3, 0xf1, 0xfe, 0xe5, 0xb9, 0x7f,
    0xe1, 0xfe, 0x3f, 0xc1, 0xfe, 0x5f, 0x97, 0x7f,
    0x8f, 0xc0, 0x40,

    /* U+0025 "%" */
    0x78, 0x63, 0xf1, 0x8c, 0xcc, 0x33, 0x20, 0xfd,
    0x81, 0xe4, 0xe0, 0x37, 0xc0, 0x9b, 0x6, 0x6c,
    0x11, 0xb0, 0xc7, 0xc2, 0xe,

    /* U+0026 "&" */
    0x1e, 0x3, 0xf0, 0x37, 0x3, 0x70, 0x3f, 0x3,
    0xe0, 0x7e, 0xef, 0xfc, 0xe7, 0xce, 0x78, 0x7f,
    0xc3, 0xfe,

    /* U+0027 "'" */
    0xfb, 0x64,

    /* U+0028 "(" */
    0x73, 0x9d, 0xce, 0x73, 0x9c, 0xe7, 0x39, 0xc7,
    0x39, 0xc0,

    /* U+0029 ")" */
    0x73, 0x9c, 0x73, 0x9c, 0xe7, 0x39, 0xce, 0x77,
    0x39, 0xc0,

    /* U+002A "*" */
    0x18, 0x18, 0x7e, 0x7e, 0x3c, 0x7e, 0x24,

    /* U+002B "+" */
    0x1c, 0x1c, 0x1c, 0x1c, 0xff, 0xff, 0x1c, 0x1c,
    0x1c,

    /* U+002C "," */
    0xff, 0xbf, 0x80,

    /* U+002D "-" */
    0xff, 0xfe,

    /* U+002E "." */
    0xff, 0x80,

    /* U+002F "/" */
    0xe, 0x38, 0x70, 0xe3, 0x87, 0xe, 0x38, 0x70,
    0xe3, 0x87, 0x0,

    /* U+0030 "0" */
    0x3c, 0x3f, 0x9d, 0xdc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xc7, 0xe3, 0xbb, 0x9f, 0xc7, 0xc0,

    /* U+0031 "1" */
    0xc, 0x73, 0xff, 0xfc, 0x71, 0xc7, 0x1c, 0x71,
    0xc7,

    /* U+0032 "2" */
    0x3e, 0x3f, 0xbf, 0xfc, 0x7e, 0x38, 0x3c, 0x3c,
    0x7c, 0x78, 0x7f, 0xff, 0xff, 0xf0,

    /* U+0033 "3" */
    0x3e, 0x3f, 0xb8, 0xfc, 0x70, 0x38, 0x78, 0x3c,
    0x7, 0xe3, 0xff, 0xdf, 0xc7, 0xc0,

    /* U+0034 "4" */
    0x7, 0x3, 0xc1, 0xf0, 0xfc, 0x37, 0x1d, 0xce,
    0x73, 0xff, 0xff, 0xff, 0xf0, 0x70, 0x1c,

    /* U+0035 "5" */
    0x3f, 0x8f, 0xe3, 0xf9, 0xc0, 0x7f, 0x1f, 0xe7,
    0x1c, 0x7, 0xf1, 0xdc, 0x77, 0xf8, 0xfc,

    /* U+0036 "6" */
    0x1e, 0x3f, 0x9c, 0xfc, 0xf, 0xe7, 0xfb, 0xdf,
    0xc7, 0xe3, 0xbb, 0xdf, 0xc7, 0xc0,

    /* U+0037 "7" */
    0xff, 0xff, 0xff, 0xe0, 0xe0, 0xe0, 0x70, 0x70,
    0x38, 0x38, 0x1c, 0xe, 0x7, 0x0,

    /* U+0038 "8" */
    0x3e, 0x3f, 0xb8, 0xfc, 0x7e, 0x3b, 0xfb, 0xfd,
    0xc7, 0xe3, 0xf1, 0xdf, 0xc7, 0xc0,

    /* U+0039 "9" */
    0x3c, 0x3f, 0xbd, 0xdc, 0x7e, 0x3f, 0xbd, 0xfe,
    0x7f, 0x3, 0xf1, 0x9f, 0xc7, 0x80,

    /* U+003A ":" */
    0xff, 0x80, 0x3f, 0xe0,

    /* U+003B ";" */
    0xff, 0x80, 0x3f, 0xef, 0xe0,

    /* U+003C "<" */
    0x1, 0xc1, 0xf3, 0xff, 0xf8, 0xf0, 0x3f, 0x3,
    0xf8, 0x3f, 0x1, 0xc0,

    /* U+003D "=" */
    0xff, 0xff, 0xc0, 0x0, 0xf, 0xff, 0xfc,

    /* U+003E ">" */
    0xc0, 0x3e, 0xf, 0xe0, 0x7f, 0x3, 0xc7, 0xff,
    0xf3, 0xe0, 0xe0, 0x0,

    /* U+003F "?" */
    0x3e, 0x3f, 0xbf, 0xdc, 0xf0, 0x70, 0x78, 0x78,
    0x38, 0x0, 0xe, 0x7, 0x3, 0x80,

    /* U+0040 "@" */
    0xf, 0x83, 0xfe, 0x77, 0xe4, 0xfd, 0x9d, 0x99,
    0x99, 0x9b, 0xb9, 0xfe, 0xce, 0xc7, 0x2, 0x3f,
    0xc0, 0xf8,

    /* U+0041 "A" */
    0xf, 0x0, 0xf0, 0x1f, 0x1, 0xf8, 0x3f, 0x83,
    0xb8, 0x3b, 0xc7, 0x9c, 0x7f, 0xc7, 0xfe, 0xf0,
    0xef, 0xf,

    /* U+0042 "B" */
    0xff, 0x3f, 0xff, 0xff, 0x87, 0xe1, 0xff, 0xef,
    0xfb, 0x87, 0xe1, 0xff, 0xff, 0xfb, 0xfc,

    /* U+0043 "C" */
    0x1f, 0x7, 0xf9, 0xff, 0x78, 0xfe, 0x1f, 0xc0,
    0x38, 0x7, 0xf, 0xf1, 0xef, 0xf8, 0xff, 0xf,
    0x80,

    /* U+0044 "D" */
    0xff, 0x1f, 0xf3, 0xff, 0x70, 0xfe, 0xf, 0xc1,
    0xf8, 0x3f, 0x7, 0xe1, 0xff, 0xfb, 0xfe, 0x7f,
    0x80,

    /* U+0045 "E" */
    0xff, 0xff, 0xff, 0xff, 0x80, 0xff, 0xbf, 0xef,
    0xfb, 0x80, 0xe0, 0x3f, 0xff, 0xff, 0xff,

    /* U+0046 "F" */
    0xff, 0xff, 0xff, 0xfc, 0xe, 0x7, 0xfb, 0xfd,
    0xfe, 0xe0, 0x70, 0x38, 0x1c, 0x0,

    /* U+0047 "G" */
    0x1f, 0x7, 0xf9, 0xff, 0x78, 0xfe, 0x1, 0xc7,
    0xf8, 0xff, 0xf, 0xf1, 0xef, 0xfc, 0xff, 0x8f,
    0x30,

    /* U+0048 "H" */
    0xe1, 0xf8, 0x7e, 0x1f, 0x87, 0xff, 0xff, 0xff,
    0xff, 0x87, 0xe1, 0xf8, 0x7e, 0x1f, 0x87,

    /* U+0049 "I" */
    0xff, 0xff, 0xff, 0xff, 0xf0,

    /* U+004A "J" */
    0x7, 0x7, 0x7, 0x7, 0x7, 0x7, 0x7, 0xe7,
    0xe7, 0xff, 0x7e, 0x3c,

    /* U+004B "K" */
    0xe3, 0xdc, 0xf3, 0xbc, 0x77, 0xf, 0xe1, 0xfc,
    0x3f, 0xc7, 0xf8, 0xe7, 0x9c, 0xfb, 0x8f, 0x70,
    0xf0,

    /* U+004C "L" */
    0xe0, 0x70, 0x38, 0x1c, 0xe, 0x7, 0x3, 0x81,
    0xc0, 0xe0, 0x7f, 0xff, 0xff, 0xf0,

    /* U+004D "M" */
    0xf8, 0xff, 0xc7, 0xfe, 0x3f, 0xfb, 0xff, 0xdf,
    0xf6, 0xdf, 0xb6, 0xfd, 0xf7, 0xef, 0xbf, 0x39,
    0xf9, 0xcf, 0xce, 0x70,

    /* U+004E "N" */
    0xe1, 0xfc, 0x7f, 0x9f, 0xe7, 0xfd, 0xff, 0x7e,
    0xff, 0xbf, 0xe7, 0xf9, 0xfe, 0x3f, 0x87,

    /* U+004F "O" */
    0x1f, 0x7, 0xf1, 0xff, 0x78, 0xfe, 0xf, 0xc1,
    0xf8, 0x3f, 0x7, 0xf1, 0xef, 0xf8, 0xfe, 0xf,
    0x80,

    /* U+0050 "P" */
    0xff, 0x3f, 0xef, 0xff, 0x87, 0xe1, 0xff, 0xff,
    0xfb, 0xfc, 0xe0, 0x38, 0xe, 0x3, 0x80,

    /* U+0051 "Q" */
    0x1f, 0x7, 0xf1, 0xff, 0x78, 0xfe, 0xf, 0xc1,
    0xf8, 0x3f, 0x3f, 0xf3, 0xef, 0xf8, 0xff, 0x8f,
    0xb0, 0x4,

    /* U+0052 "R" */
    0xff, 0x3f, 0xff, 0xff, 0x87, 0xe1, 0xff, 0xef,
    0xfb, 0x8f, 0xe1, 0xf8, 0x7e, 0x1f, 0x87,

    /* U+0053 "S" */
    0x3e, 0x1f, 0xe7, 0xfb, 0x8e, 0xf8, 0x1f, 0xc1,
    0xf8, 0xf, 0xe3, 0xff, 0xf7, 0xf8, 0xfc,

    /* U+0054 "T" */
    0xff, 0xff, 0xff, 0xfc, 0x70, 0x1c, 0x7, 0x1,
    0xc0, 0x70, 0x1c, 0x7, 0x1, 0xc0, 0x70,

    /* U+0055 "U" */
    0xe1, 0xf8, 0x7e, 0x1f, 0x87, 0xe1, 0xf8, 0x7e,
    0x1f, 0x87, 0xe1, 0xff, 0xf7, 0xf8, 0xfc,

    /* U+0056 "V" */
    0xe1, 0xde, 0x3b, 0xcf, 0x39, 0xe7, 0x38, 0xf7,
    0xf, 0xe1, 0xf8, 0x3f, 0x7, 0xe0, 0x7c, 0xf,
    0x0,

    /* U+0057 "W" */
    0xe3, 0x8f, 0xe7, 0x9d, 0xcf, 0x7b, 0xbe, 0xf7,
    0x7d, 0xce, 0xfb, 0x8f, 0xb7, 0x1f, 0x7e, 0x3e,
    0xf8, 0x7d, 0xf0, 0x79, 0xe0, 0xf3, 0x80,

    /* U+0058 "X" */
    0x79, 0xe7, 0x9e, 0x3f, 0xc1, 0xf8, 0x1f, 0x80,
    0xf0, 0x1f, 0x81, 0xf8, 0x3f, 0xc7, 0xbc, 0x79,
    0xef, 0xf,

    /* U+0059 "Y" */
    0xf1, 0xee, 0x39, 0xef, 0x1d, 0xc3, 0xb8, 0x3e,
    0x7, 0xc0, 0x70, 0xe, 0x1, 0xc0, 0x38, 0x7,
    0x0,

    /* U+005A "Z" */
    0xff, 0xff, 0xff, 0xfc, 0x1e, 0xf, 0x7, 0x83,
    0xe1, 0xf0, 0x78, 0x3f, 0xff, 0xff, 0xff,

    /* U+005B "[" */
    0xff, 0xfe, 0x38, 0xe3, 0x8e, 0x38, 0xe3, 0x8e,
    0x38, 0xe3, 0xff, 0xc0,

    /* U+005C "\\" */
    0xe1, 0xc1, 0xc3, 0x87, 0x7, 0xe, 0x1c, 0x1c,
    0x38, 0x70, 0x70,

    /* U+005D "]" */
    0xff, 0xf1, 0xc7, 0x1c, 0x71, 0xc7, 0x1c, 0x71,
    0xc7, 0x1f, 0xff, 0xc0,

    /* U+005E "^" */
    0x18, 0x38, 0x3c, 0x7c, 0x7e, 0x6e, 0xe6, 0xc7,

    /* U+005F "_" */
    0xff,

    /* U+0060 "`" */
    0xe1, 0x80,

    /* U+0061 "a" */
    0x3f, 0x3f, 0xf9, 0xe1, 0xf7, 0xff, 0x9f, 0x8f,
    0xff, 0x7b, 0x80,

    /* U+0062 "b" */
    0xe0, 0x70, 0x38, 0x1d, 0xcf, 0xf7, 0xff, 0x8f,
    0xc7, 0xe3, 0xf1, 0xff, 0xdf, 0xc0,

    /* U+0063 "c" */
    0x3e, 0x3f, 0xbd, 0xdc, 0xe, 0x7, 0x3, 0x9c,
    0xfe, 0x3e, 0x0,

    /* U+0064 "d" */
    0x3, 0x81, 0xc0, 0xe7, 0x77, 0xff, 0xbf, 0x8f,
    0xc7, 0xe3, 0xf3, 0xdf, 0xe7, 0xf0,

    /* U+0065 "e" */
    0x3e, 0x3f, 0xb8, 0xff, 0xff, 0xff, 0x3, 0xce,
    0xfe, 0x3e, 0x0,

    /* U+0066 "f" */
    0x3d, 0xf7, 0x3f, 0xfd, 0xc7, 0x1c, 0x71, 0xc7,
    0x1c,

    /* U+0067 "g" */
    0x3f, 0xbf, 0xf8, 0xfc, 0x7e, 0x3f, 0x1d, 0xfe,
    0x7f, 0x3, 0xf9, 0xdf, 0xc7, 0xc0,

    /* U+0068 "h" */
    0xe0, 0x70, 0x38, 0x1d, 0xef, 0xff, 0x1f, 0x8f,
    0xc7, 0xe3, 0xf1, 0xf8, 0xfc, 0x70,

    /* U+0069 "i" */
    0xfc, 0x7f, 0xff, 0xff, 0xf0,

    /* U+006A "j" */
    0x39, 0xc0, 0x73, 0x9c, 0xe7, 0x39, 0xce, 0x73,
    0xff, 0xc0,

    /* U+006B "k" */
    0xe0, 0x70, 0x38, 0x1c, 0xee, 0xe7, 0xe3, 0xf1,
    0xf8, 0xfe, 0x77, 0xbb, 0xdc, 0xf0,

    /* U+006C "l" */
    0xff, 0xff, 0xff, 0xff, 0xf0,

    /* U+006D "m" */
    0xfe, 0xf7, 0xff, 0xf9, 0xcf, 0xce, 0x7e, 0x73,
    0xf3, 0x9f, 0x9c, 0xfc, 0xe7, 0xe7, 0x38,

    /* U+006E "n" */
    0xff, 0x7f, 0xf8, 0xfc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xc7, 0xe3, 0x80,

    /* U+006F "o" */
    0x3e, 0x3f, 0xbd, 0xfc, 0x7e, 0x3f, 0x1f, 0xde,
    0xfe, 0x3e, 0x0,

    /* U+0070 "p" */
    0xfe, 0x7f, 0xbd, 0xfc, 0x7e, 0x3f, 0x1f, 0xdf,
    0xfe, 0xee, 0x70, 0x38, 0x1c, 0x0,

    /* U+0071 "q" */
    0x3f, 0xbf, 0xfd, 0xfc, 0x7e, 0x3f, 0x1f, 0xde,
    0xff, 0x3f, 0x81, 0xc0, 0xe0, 0x70,

    /* U+0072 "r" */
    0xef, 0xff, 0xff, 0x8e, 0x1c, 0x38, 0x70, 0xe0,

    /* U+0073 "s" */
    0x7c, 0xfe, 0xe7, 0xfc, 0x7e, 0x1f, 0xe7, 0xff,
    0x7c,

    /* U+0074 "t" */
    0x71, 0xc7, 0x3f, 0xfd, 0xc7, 0x1c, 0x71, 0xc7,
    0xcf,

    /* U+0075 "u" */
    0xe3, 0xf1, 0xf8, 0xfc, 0x7e, 0x3f, 0x1f, 0xff,
    0xff, 0x7b, 0x80,

    /* U+0076 "v" */
    0xe3, 0xfb, 0xdd, 0xce, 0xe7, 0x71, 0xb0, 0xf8,
    0x7c, 0x3c, 0x0,

    /* U+0077 "w" */
    0xe7, 0x9f, 0xde, 0xf7, 0x7b, 0x9d, 0xee, 0x77,
    0xb9, 0xfe, 0xc3, 0xcf, 0xf, 0x3c, 0x3c, 0xf0,

    /* U+0078 "x" */
    0xf7, 0x3b, 0x8f, 0x87, 0xc1, 0xc1, 0xf1, 0xfc,
    0xee, 0xf7, 0x80,

    /* U+0079 "y" */
    0xf3, 0xb9, 0xdc, 0xee, 0xe3, 0xf1, 0xf8, 0xf8,
    0x7c, 0x1e, 0xe, 0x1f, 0xf, 0x0,

    /* U+007A "z" */
    0xff, 0xff, 0x1f, 0x1e, 0x3c, 0x78, 0xf0, 0xff,
    0xff,

    /* U+007B "{" */
    0x1c, 0xf3, 0x8e, 0x38, 0xe7, 0x30, 0x70, 0xe3,
    0x8e, 0x38, 0xf1, 0xc0,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0,

    /* U+007D "}" */
    0xe1, 0xf0, 0xe1, 0xc3, 0x87, 0x7, 0x3, 0x1c,
    0x70, 0xe1, 0xc3, 0x9f, 0x38, 0x0,

    /* U+007E "~" */
    0x70, 0xdf, 0x2f, 0xfb, 0x1c
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 86, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 81, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 6, .adv_w = 133, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 10, .adv_w = 171, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 25, .adv_w = 171, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 44, .adv_w = 261, .box_w = 14, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 65, .adv_w = 190, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 83, .adv_w = 76, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 85, .adv_w = 81, .box_w = 5, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 95, .adv_w = 81, .box_w = 5, .box_h = 15, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 105, .adv_w = 119, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 112, .adv_w = 154, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 121, .adv_w = 86, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 124, .adv_w = 104, .box_w = 5, .box_h = 3, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 126, .adv_w = 86, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 128, .adv_w = 109, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 139, .adv_w = 171, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 153, .adv_w = 171, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 162, .adv_w = 171, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 176, .adv_w = 171, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 190, .adv_w = 171, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 205, .adv_w = 171, .box_w = 10, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 220, .adv_w = 171, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 234, .adv_w = 171, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 248, .adv_w = 171, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 262, .adv_w = 171, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 276, .adv_w = 86, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 280, .adv_w = 86, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 285, .adv_w = 154, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 297, .adv_w = 154, .box_w = 9, .box_h = 6, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 304, .adv_w = 154, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 316, .adv_w = 147, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 330, .adv_w = 205, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 348, .adv_w = 185, .box_w = 12, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 366, .adv_w = 190, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 381, .adv_w = 194, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 398, .adv_w = 199, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 415, .adv_w = 180, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 430, .adv_w = 161, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 444, .adv_w = 199, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 461, .adv_w = 194, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 476, .adv_w = 85, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 481, .adv_w = 156, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 493, .adv_w = 199, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 510, .adv_w = 161, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 524, .adv_w = 242, .box_w = 13, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 544, .adv_w = 194, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 559, .adv_w = 204, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 576, .adv_w = 180, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 591, .adv_w = 204, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 609, .adv_w = 190, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 624, .adv_w = 171, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 639, .adv_w = 171, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 654, .adv_w = 194, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 669, .adv_w = 166, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 686, .adv_w = 247, .box_w = 15, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 709, .adv_w = 190, .box_w = 12, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 727, .adv_w = 171, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 744, .adv_w = 175, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 759, .adv_w = 104, .box_w = 6, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 771, .adv_w = 109, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 782, .adv_w = 104, .box_w = 6, .box_h = 15, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 794, .adv_w = 154, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 802, .adv_w = 128, .box_w = 8, .box_h = 1, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 803, .adv_w = 71, .box_w = 5, .box_h = 2, .ofs_x = -1, .ofs_y = 10},
    {.bitmap_index = 805, .adv_w = 156, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 816, .adv_w = 166, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 830, .adv_w = 156, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 841, .adv_w = 166, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 855, .adv_w = 161, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 866, .adv_w = 100, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 875, .adv_w = 161, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 889, .adv_w = 166, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 903, .adv_w = 81, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 908, .adv_w = 81, .box_w = 5, .box_h = 15, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 918, .adv_w = 156, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 932, .adv_w = 81, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 937, .adv_w = 247, .box_w = 13, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 952, .adv_w = 166, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 963, .adv_w = 161, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 974, .adv_w = 166, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 988, .adv_w = 166, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1002, .adv_w = 114, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1010, .adv_w = 147, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1019, .adv_w = 104, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1028, .adv_w = 166, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1039, .adv_w = 142, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1050, .adv_w = 223, .box_w = 14, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1066, .adv_w = 142, .box_w = 9, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1077, .adv_w = 142, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1091, .adv_w = 142, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1100, .adv_w = 104, .box_w = 6, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1112, .adv_w = 57, .box_w = 3, .box_h = 17, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1119, .adv_w = 104, .box_w = 7, .box_h = 15, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1133, .adv_w = 154, .box_w = 10, .box_h = 4, .ofs_x = 0, .ofs_y = 3}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Pair left and right glyphs for kerning*/
static const uint8_t kern_pair_glyph_ids[] =
{
    34, 53,
    34, 55,
    34, 56,
    34, 58,
    34, 87,
    34, 88,
    34, 90,
    39, 13,
    39, 15,
    39, 34,
    45, 53,
    45, 55,
    45, 56,
    45, 58,
    45, 90,
    49, 13,
    49, 15,
    49, 34,
    51, 53,
    51, 55,
    51, 56,
    51, 58,
    53, 13,
    53, 14,
    53, 15,
    53, 27,
    53, 28,
    53, 34,
    53, 66,
    53, 68,
    53, 70,
    53, 80,
    53, 83,
    53, 84,
    53, 86,
    53, 88,
    53, 90,
    55, 13,
    55, 14,
    55, 15,
    55, 27,
    55, 28,
    55, 34,
    55, 66,
    55, 70,
    55, 74,
    55, 80,
    55, 83,
    55, 86,
    55, 90,
    56, 13,
    56, 15,
    56, 27,
    56, 28,
    56, 34,
    56, 66,
    56, 70,
    56, 80,
    56, 83,
    56, 86,
    58, 13,
    58, 14,
    58, 15,
    58, 27,
    58, 28,
    58, 34,
    58, 66,
    58, 70,
    58, 74,
    58, 80,
    58, 81,
    58, 82,
    58, 86,
    58, 87,
    71, 71,
    83, 13,
    83, 14,
    83, 15,
    83, 68,
    83, 69,
    83, 70,
    83, 79,
    83, 80,
    83, 82,
    83, 87,
    83, 88,
    83, 90,
    87, 13,
    87, 15,
    88, 13,
    88, 15,
    90, 13,
    90, 15
};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] =
{
    -17, -8, -9, -19, -5, -5, -5, -33,
    -33, -14, -33, -24, -14, -28, -9, -33,
    -33, -19, -5, -1, -5, -9, -28, -33,
    -28, -22, -22, -19, -28, -28, -28, -28,
    -24, -28, -24, -28, -28, -33, -14, -27,
    -13, -13, -14, -14, -14, -5, -14, -9,
    -9, -5, -19, -19, -5, -5, -14, -9,
    -9, -9, -5, -5, -28, -28, -28, -24,
    -20, -19, -24, -24, -3, -24, -19, -24,
    -19, -14, -5, -24, -14, -24, -5, -5,
    -5, 5, -5, -5, 3, 3, 3, -15,
    -15, -14, -14, -24, -15
};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs =
{
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 93,
    .glyph_ids_size = 0
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_pairs,
    .kern_scale = 16,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t ui_font_Helvetica_Neue_Black = {
#else
lv_font_t ui_font_Helvetica_Neue_Black = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 18,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -4,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if UI_FONT_HELVETICA_NEUE_BLACK*/

