/*******************************************************************************
 * Size: 28 px
 * Bpp: 1
 * Opts: --bpp 1 --size 28 --font /Users/mitchaiet/Documents/GitHub/restopod/ui/system-ui/assets/HelveticaNeueHeavy.otf -o /Users/mitchaiet/Documents/GitHub/restopod/ui/system-ui/assets/ui_font_Helvetica_Neue_Heavy_28.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_HELVETICA_NEUE_HEAVY_28
#define UI_FONT_HELVETICA_NEUE_HEAVY_28 1
#endif

#if UI_FONT_HELVETICA_NEUE_HEAVY_28

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0x73, 0x9c, 0xe7,
    0x0, 0x1f, 0xff, 0xff, 0xf0,

    /* U+0022 "\"" */
    0xf3, 0xfc, 0xff, 0x3f, 0xcf, 0x73, 0x9c, 0xe7,
    0x39, 0xce,

    /* U+0023 "#" */
    0x7, 0x8f, 0x3, 0xcf, 0x83, 0xe7, 0x81, 0xe3,
    0xc0, 0xf1, 0xe3, 0xff, 0xfd, 0xff, 0xfe, 0xff,
    0xff, 0x1e, 0x3c, 0xf, 0x1e, 0x7, 0x8f, 0x3,
    0xcf, 0x8f, 0xff, 0xf7, 0xff, 0xfb, 0xff, 0xfc,
    0x78, 0xf0, 0x3c, 0xf8, 0x3e, 0x7c, 0x1f, 0x3c,
    0xf, 0x1e, 0x0,

    /* U+0024 "$" */
    0x1, 0x80, 0x0, 0xc0, 0x0, 0x60, 0x1, 0xfe,
    0x3, 0xff, 0xc3, 0xff, 0xf3, 0xf6, 0xfd, 0xf3,
    0x3e, 0xf9, 0x9f, 0x7c, 0xc0, 0x3f, 0xe0, 0xf,
    0xfe, 0x7, 0xff, 0xe0, 0xff, 0xf8, 0xf, 0xfc,
    0x3, 0x7f, 0x1, 0x8f, 0xfc, 0xc7, 0xfe, 0x63,
    0xef, 0xb3, 0xe7, 0xff, 0xf1, 0xff, 0xf0, 0x3f,
    0xe0, 0x3, 0x0, 0x1, 0x80, 0x0,

    /* U+0025 "%" */
    0x3e, 0x0, 0xe0, 0x7f, 0x1, 0xc0, 0xf7, 0x81,
    0xc0, 0xe3, 0x83, 0x80, 0xe3, 0x83, 0x0, 0xe3,
    0x87, 0x0, 0xe3, 0x86, 0x0, 0xe7, 0x8e, 0x0,
    0x7f, 0xc, 0x0, 0x3e, 0x1c, 0x7c, 0x0, 0x38,
    0xfe, 0x0, 0x30, 0xee, 0x0, 0x71, 0xc7, 0x0,
    0x61, 0xc7, 0x0, 0xe1, 0xc7, 0x0, 0xc1, 0xc7,
    0x1, 0xc1, 0xc7, 0x3, 0x80, 0xee, 0x3, 0x80,
    0xfe, 0x7, 0x0, 0x7c, 0x6, 0x0, 0x0,

    /* U+0026 "&" */
    0x3, 0xe0, 0x1, 0xff, 0x0, 0x3f, 0xe0, 0xf,
    0x1e, 0x1, 0xe3, 0xc0, 0x3c, 0x78, 0x7, 0xdf,
    0x0, 0x7f, 0xc0, 0xf, 0xf0, 0x3, 0xfc, 0x1,
    0xff, 0x9e, 0x3f, 0xfb, 0xcf, 0xdf, 0xf9, 0xf1,
    0xff, 0x3e, 0x1f, 0xc7, 0xc1, 0xf0, 0xfc, 0x7f,
    0xf, 0xff, 0xf0, 0xff, 0xff, 0x7, 0xe3, 0xf0,

    /* U+0027 "'" */
    0xff, 0xff, 0x77, 0x76,

    /* U+0028 "(" */
    0x1f, 0x1e, 0x3e, 0x3c, 0x7c, 0x7c, 0x7c, 0x78,
    0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8,
    0xf8, 0xf8, 0x7c, 0x7c, 0x7c, 0x3c, 0x3e, 0x1e,
    0x1f,

    /* U+0029 ")" */
    0xf8, 0x78, 0x7c, 0x3c, 0x3c, 0x3e, 0x3e, 0x1e,
    0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f,
    0x1f, 0x1e, 0x3e, 0x3e, 0x3e, 0x3c, 0x7c, 0x78,
    0xf8,

    /* U+002A "*" */
    0xe, 0x1, 0xc0, 0x38, 0x7f, 0xff, 0xfe, 0xff,
    0x87, 0xc1, 0xfc, 0x7b, 0xc6, 0x30, 0x0, 0x0,

    /* U+002B "+" */
    0x3, 0xc0, 0x7, 0x80, 0xf, 0x0, 0x1e, 0x0,
    0x3c, 0x0, 0x78, 0x3f, 0xff, 0xff, 0xff, 0xff,
    0xfe, 0x7, 0x80, 0xf, 0x0, 0x1e, 0x0, 0x3c,
    0x0, 0x78, 0x0, 0xf0, 0x0,

    /* U+002C "," */
    0xff, 0xff, 0xff, 0x9c, 0xfe, 0xf6, 0x0,

    /* U+002D "-" */
    0xff, 0xff, 0xff, 0xe0,

    /* U+002E "." */
    0xff, 0xff, 0xff, 0x80,

    /* U+002F "/" */
    0x1, 0xe0, 0x1e, 0x3, 0xe0, 0x3c, 0x3, 0xc0,
    0x7c, 0x7, 0x80, 0xf8, 0xf, 0x0, 0xf0, 0x1f,
    0x1, 0xe0, 0x1e, 0x3, 0xe0, 0x3c, 0x7, 0xc0,
    0x78, 0x7, 0x80, 0xf8, 0xf, 0x0,

    /* U+0030 "0" */
    0x7, 0xe0, 0x1f, 0xf8, 0x3f, 0xfc, 0x3e, 0x7c,
    0x7c, 0x3e, 0x78, 0x1e, 0xf8, 0x1f, 0xf8, 0x1f,
    0xf8, 0x1f, 0xf8, 0x1f, 0xf8, 0x1f, 0xf8, 0x1f,
    0xf8, 0x1f, 0xf8, 0x1f, 0x78, 0x1e, 0x7c, 0x3e,
    0x7e, 0x7c, 0x3f, 0xfc, 0x1f, 0xf8, 0x7, 0xe0,

    /* U+0031 "1" */
    0x3, 0xc0, 0xf0, 0x7c, 0x1f, 0x1f, 0xff, 0xff,
    0xff, 0xff, 0x7, 0xc1, 0xf0, 0x7c, 0x1f, 0x7,
    0xc1, 0xf0, 0x7c, 0x1f, 0x7, 0xc1, 0xf0, 0x7c,
    0x1f,

    /* U+0032 "2" */
    0xf, 0xe0, 0x3f, 0xf0, 0xff, 0xf3, 0xe3, 0xef,
    0xc3, 0xff, 0x7, 0xfe, 0xf, 0xfc, 0x3f, 0x0,
    0xfe, 0x3, 0xf8, 0xf, 0xf0, 0x3f, 0xc1, 0xff,
    0x7, 0xfc, 0x1f, 0xe0, 0x3f, 0x80, 0xfe, 0x1,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf0,

    /* U+0033 "3" */
    0xf, 0xe0, 0x3f, 0xf8, 0x7f, 0xfc, 0x7c, 0x7e,
    0xf8, 0x3e, 0xf8, 0x3e, 0x0, 0x3e, 0x0, 0x7e,
    0x3, 0xfc, 0x3, 0xf8, 0x3, 0xfe, 0x0, 0x3f,
    0x0, 0x1f, 0xf8, 0x1f, 0xf8, 0x1f, 0xf8, 0x1f,
    0x7c, 0x3e, 0x7f, 0xfe, 0x3f, 0xf8, 0xf, 0xe0,

    /* U+0034 "4" */
    0x0, 0x7c, 0x0, 0x7e, 0x0, 0x7f, 0x0, 0x3f,
    0x80, 0x3f, 0xc0, 0x3f, 0xe0, 0x3d, 0xf0, 0x1c,
    0xf8, 0x1e, 0x7c, 0x1e, 0x3e, 0x1e, 0x1f, 0xe,
    0xf, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe,
    0x0, 0xf8, 0x0, 0x7c, 0x0, 0x3e, 0x0, 0x1f,
    0x0, 0xf, 0x80,

    /* U+0035 "5" */
    0x3f, 0xfe, 0x3f, 0xfe, 0x3f, 0xfe, 0x3c, 0x0,
    0x3c, 0x0, 0x7c, 0x0, 0x7d, 0xf0, 0x7f, 0xfc,
    0x7f, 0xfe, 0x7c, 0x3f, 0x78, 0x1f, 0x0, 0x1f,
    0x0, 0x1f, 0xf8, 0x1f, 0xf8, 0x1f, 0xfc, 0x3e,
    0x7f, 0xfc, 0x3f, 0xf8, 0xf, 0xe0,

    /* U+0036 "6" */
    0x7, 0xf0, 0xf, 0xfc, 0x3f, 0xfc, 0x3e, 0x3e,
    0x7c, 0x3e, 0x78, 0x0, 0xf8, 0x0, 0xfb, 0xf0,
    0xff, 0xfc, 0xff, 0xfe, 0xfc, 0x3e, 0xf8, 0x3f,
    0xf8, 0x1f, 0xf8, 0x1f, 0xf8, 0x1f, 0x78, 0x3f,
    0x7c, 0x3e, 0x3f, 0xfe, 0x1f, 0xf8, 0x7, 0xe0,

    /* U+0037 "7" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x1e, 0x0,
    0xf8, 0x7, 0xc0, 0x1e, 0x0, 0xf8, 0x7, 0xc0,
    0x1f, 0x0, 0xf8, 0x3, 0xe0, 0xf, 0x80, 0x3c,
    0x1, 0xf0, 0x7, 0xc0, 0x1f, 0x0, 0x7c, 0x0,

    /* U+0038 "8" */
    0x7, 0xe0, 0x1f, 0xf8, 0x3f, 0xfc, 0x7c, 0x3e,
    0x78, 0x1e, 0x78, 0x1e, 0x78, 0x1e, 0x3c, 0x3c,
    0x3f, 0xfc, 0xf, 0xf8, 0x3f, 0xfe, 0x7c, 0x3e,
    0xf8, 0x1f, 0xf8, 0x1f, 0xf8, 0x1f, 0xf8, 0x1f,
    0x7c, 0x3e, 0x7f, 0xfe, 0x3f, 0xfc, 0xf, 0xf0,

    /* U+0039 "9" */
    0x7, 0xe0, 0x1f, 0xf8, 0x3f, 0xfc, 0x7c, 0x3e,
    0xf8, 0x3e, 0xf8, 0x1e, 0xf8, 0x1f, 0xf8, 0x1f,
    0xf8, 0x1f, 0x7c, 0x3f, 0x7f, 0xff, 0x3f, 0xff,
    0xf, 0xdf, 0x0, 0x1f, 0xf8, 0x1e, 0xf8, 0x3e,
    0x7c, 0x7c, 0x7f, 0xfc, 0x3f, 0xf8, 0xf, 0xe0,

    /* U+003A ":" */
    0xff, 0xff, 0xff, 0x80, 0x0, 0x0, 0x3f, 0xff,
    0xff, 0xe0,

    /* U+003B ";" */
    0xff, 0xff, 0xff, 0x80, 0x0, 0x0, 0x3f, 0xff,
    0xff, 0xe7, 0x3f, 0xbd, 0x80,

    /* U+003C "<" */
    0x0, 0x2, 0x0, 0x1c, 0x1, 0xf8, 0xf, 0xf0,
    0xff, 0xe7, 0xff, 0x3f, 0xf0, 0x7f, 0x0, 0xf8,
    0x1, 0xfe, 0x3, 0xff, 0x81, 0xff, 0xc0, 0x7f,
    0xe0, 0x1f, 0xc0, 0xf, 0x80, 0x3,

    /* U+003D "=" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x7f, 0xff, 0xff,
    0xff, 0xff, 0xfc,

    /* U+003E ">" */
    0x80, 0x1, 0xc0, 0x3, 0xf0, 0x7, 0xf8, 0xf,
    0xfe, 0x7, 0xff, 0x1, 0xff, 0x80, 0x7f, 0x0,
    0x3e, 0x3, 0xfc, 0x3f, 0xf9, 0xff, 0xcf, 0xfc,
    0x1f, 0xe0, 0x3e, 0x0, 0x60, 0x0,

    /* U+003F "?" */
    0xf, 0xc0, 0xff, 0xc7, 0xff, 0xbf, 0x3f, 0xf8,
    0x7f, 0xe1, 0xf0, 0xf, 0xc0, 0x7f, 0x3, 0xf8,
    0x1f, 0xc0, 0x7c, 0x1, 0xe0, 0x7, 0x80, 0x0,
    0x0, 0x0, 0x3, 0xe0, 0xf, 0x80, 0x3e, 0x0,
    0xf8, 0x3, 0xe0,

    /* U+0040 "@" */
    0x0, 0xfe, 0x0, 0x3f, 0xfc, 0x3, 0xc0, 0x78,
    0x38, 0x0, 0xe3, 0x87, 0xbb, 0x38, 0xff, 0xdd,
    0x8f, 0x9c, 0x78, 0x78, 0xe3, 0xc7, 0xc7, 0x1e,
    0x3c, 0x78, 0xf1, 0xe3, 0x87, 0x8f, 0x1c, 0x6c,
    0x79, 0xe7, 0x31, 0xfb, 0xf1, 0x87, 0x8e, 0x6,
    0x0, 0x4, 0x38, 0x0, 0x60, 0xf8, 0xf, 0x1,
    0xff, 0xe0, 0x3, 0xfc, 0x0,

    /* U+0041 "A" */
    0x1, 0xf8, 0x0, 0x1f, 0x80, 0x3, 0xf8, 0x0,
    0x3f, 0xc0, 0x3, 0xfc, 0x0, 0x7f, 0xe0, 0x7,
    0xfe, 0x0, 0xfb, 0xe0, 0xf, 0x9f, 0x0, 0xf9,
    0xf0, 0x1f, 0x1f, 0x1, 0xf0, 0xf8, 0x1f, 0xf,
    0x83, 0xff, 0xfc, 0x3f, 0xff, 0xc7, 0xff, 0xfc,
    0x7c, 0x7, 0xe7, 0xc0, 0x3e, 0xfc, 0x3, 0xef,
    0x80, 0x3f,

    /* U+0042 "B" */
    0xff, 0xf8, 0x7f, 0xff, 0x3f, 0xff, 0x9f, 0x7,
    0xef, 0x81, 0xf7, 0xc0, 0xfb, 0xe0, 0x7d, 0xf0,
    0x7c, 0xff, 0xfc, 0x7f, 0xff, 0x3f, 0xff, 0xdf,
    0x3, 0xff, 0x80, 0xff, 0xc0, 0x7f, 0xe0, 0x3f,
    0xf0, 0x1f, 0xf8, 0x1f, 0xff, 0xff, 0xbf, 0xff,
    0x9f, 0xff, 0x0,

    /* U+0043 "C" */
    0x3, 0xf8, 0x1, 0xff, 0xc0, 0x7f, 0xfe, 0x1f,
    0x87, 0xe7, 0xe0, 0x7c, 0xf8, 0xf, 0xff, 0x0,
    0xff, 0xc0, 0x0, 0xf8, 0x0, 0x1f, 0x0, 0x3,
    0xe0, 0x0, 0x7c, 0x0, 0xf, 0x80, 0x1, 0xf0,
    0x7, 0xdf, 0x1, 0xfb, 0xf0, 0x3e, 0x3f, 0xf,
    0x83, 0xff, 0xf0, 0x3f, 0xfc, 0x1, 0xfe, 0x0,

    /* U+0044 "D" */
    0xff, 0xf0, 0x3f, 0xff, 0xf, 0xff, 0xe3, 0xe0,
    0xfc, 0xf8, 0x1f, 0xbe, 0x3, 0xef, 0x80, 0xff,
    0xe0, 0x1f, 0xf8, 0x7, 0xfe, 0x1, 0xff, 0x80,
    0x7f, 0xe0, 0x1f, 0xf8, 0x7, 0xfe, 0x1, 0xff,
    0x80, 0xfb, 0xe0, 0x7e, 0xf8, 0x3f, 0x3f, 0xff,
    0x8f, 0xff, 0xc3, 0xff, 0xc0,

    /* U+0045 "E" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x0,
    0xf8, 0x0, 0xf8, 0x0, 0xf8, 0x0, 0xf8, 0x0,
    0xff, 0xfe, 0xff, 0xfe, 0xff, 0xfe, 0xf8, 0x0,
    0xf8, 0x0, 0xf8, 0x0, 0xf8, 0x0, 0xf8, 0x0,
    0xf8, 0x0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,

    /* U+0046 "F" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0xf,
    0x80, 0x1f, 0x0, 0x3e, 0x0, 0x7c, 0x0, 0xf8,
    0x1, 0xff, 0xfb, 0xff, 0xf7, 0xff, 0xef, 0x80,
    0x1f, 0x0, 0x3e, 0x0, 0x7c, 0x0, 0xf8, 0x1,
    0xf0, 0x3, 0xe0, 0x7, 0xc0, 0x0,

    /* U+0047 "G" */
    0x1, 0xfc, 0x1, 0xff, 0xe0, 0x7f, 0xfe, 0x1f,
    0x87, 0xe7, 0xe0, 0x7c, 0xf8, 0x7, 0xde, 0x0,
    0x7, 0xc0, 0x0, 0xf8, 0x0, 0x1f, 0x3, 0xff,
    0xe0, 0x7f, 0xfc, 0xf, 0xff, 0x80, 0x3f, 0xf0,
    0x7, 0xdf, 0x0, 0xfb, 0xf0, 0x3f, 0x3f, 0xf,
    0xe3, 0xff, 0xfc, 0x3f, 0xfb, 0x81, 0xfc, 0x70,

    /* U+0048 "H" */
    0xf8, 0xf, 0xfc, 0x7, 0xfe, 0x3, 0xff, 0x1,
    0xff, 0x80, 0xff, 0xc0, 0x7f, 0xe0, 0x3f, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x3, 0xff,
    0x1, 0xff, 0x80, 0xff, 0xc0, 0x7f, 0xe0, 0x3f,
    0xf0, 0x1f, 0xf8, 0xf, 0xfc, 0x7, 0xfe, 0x3,
    0xff, 0x1, 0xf0,

    /* U+0049 "I" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xf0,

    /* U+004A "J" */
    0x0, 0x7c, 0x1, 0xf0, 0x7, 0xc0, 0x1f, 0x0,
    0x7c, 0x1, 0xf0, 0x7, 0xc0, 0x1f, 0x0, 0x7c,
    0x1, 0xf0, 0x7, 0xc0, 0x1f, 0x0, 0x7f, 0xe1,
    0xff, 0x87, 0xfe, 0x1f, 0xfc, 0xf9, 0xff, 0xe3,
    0xff, 0x3, 0xf0,

    /* U+004B "K" */
    0xf8, 0x1f, 0xdf, 0x7, 0xf3, 0xe1, 0xfc, 0x7c,
    0x3f, 0xf, 0x8f, 0xc1, 0xf3, 0xf0, 0x3e, 0xfc,
    0x7, 0xff, 0x0, 0xff, 0xe0, 0x1f, 0xfe, 0x3,
    0xff, 0xe0, 0x7f, 0xfc, 0xf, 0xcf, 0xc1, 0xf1,
    0xfc, 0x3e, 0x1f, 0x87, 0xc1, 0xf8, 0xf8, 0x3f,
    0x9f, 0x3, 0xf3, 0xe0, 0x3f, 0x7c, 0x7, 0xf0,

    /* U+004C "L" */
    0xf8, 0x1, 0xf0, 0x3, 0xe0, 0x7, 0xc0, 0xf,
    0x80, 0x1f, 0x0, 0x3e, 0x0, 0x7c, 0x0, 0xf8,
    0x1, 0xf0, 0x3, 0xe0, 0x7, 0xc0, 0xf, 0x80,
    0x1f, 0x0, 0x3e, 0x0, 0x7c, 0x0, 0xf8, 0x1,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf0,

    /* U+004D "M" */
    0xff, 0x3, 0xff, 0xfc, 0xf, 0xff, 0xf0, 0x3f,
    0xff, 0xc0, 0xff, 0xff, 0x87, 0xff, 0xfe, 0x1f,
    0xff, 0xf8, 0x7f, 0xfe, 0xe1, 0xdf, 0xfb, 0xcf,
    0x7f, 0xef, 0x3d, 0xff, 0x9c, 0xe7, 0xfe, 0x73,
    0x9f, 0xf9, 0xfe, 0x7f, 0xe7, 0xf9, 0xff, 0x8f,
    0xc7, 0xfe, 0x3f, 0x1f, 0xf8, 0xfc, 0x7f, 0xe3,
    0xf1, 0xff, 0x87, 0x87, 0xfe, 0x1e, 0x1f,

    /* U+004E "N" */
    0xfc, 0xf, 0xfe, 0x7, 0xff, 0x83, 0xff, 0xc1,
    0xff, 0xf0, 0xff, 0xf8, 0x7f, 0xfe, 0x3f, 0xff,
    0x1f, 0xfb, 0xcf, 0xfd, 0xe7, 0xfe, 0x7b, 0xff,
    0x3d, 0xff, 0x8f, 0xff, 0xc7, 0xff, 0xe1, 0xff,
    0xf0, 0xff, 0xf8, 0x3f, 0xfc, 0xf, 0xfe, 0x7,
    0xff, 0x1, 0xf0,

    /* U+004F "O" */
    0x1, 0xfc, 0x0, 0xff, 0xf0, 0x1f, 0xff, 0x83,
    0xf0, 0xfc, 0x7e, 0x7, 0xe7, 0xc0, 0x3e, 0x7c,
    0x3, 0xef, 0x80, 0x1f, 0xf8, 0x1, 0xff, 0x80,
    0x1f, 0xf8, 0x1, 0xff, 0x80, 0x1f, 0xf8, 0x1,
    0xff, 0xc0, 0x3e, 0x7c, 0x3, 0xe7, 0xe0, 0x7e,
    0x3f, 0xf, 0xc1, 0xff, 0xf8, 0xf, 0xff, 0x0,
    0x3f, 0xc0,

    /* U+0050 "P" */
    0xff, 0xf8, 0x7f, 0xff, 0x3f, 0xff, 0xdf, 0x3,
    0xef, 0x80, 0xff, 0xc0, 0x7f, 0xe0, 0x3f, 0xf0,
    0x1f, 0xf8, 0xf, 0xfc, 0xf, 0xbf, 0xff, 0xdf,
    0xff, 0xcf, 0xff, 0x87, 0xc0, 0x3, 0xe0, 0x1,
    0xf0, 0x0, 0xf8, 0x0, 0x7c, 0x0, 0x3e, 0x0,
    0x1f, 0x0, 0x0,

    /* U+0051 "Q" */
    0x1, 0xf8, 0x0, 0x7f, 0xf0, 0x1f, 0xff, 0x83,
    0xf0, 0xfc, 0x7e, 0x7, 0xc7, 0xc0, 0x3e, 0x78,
    0x3, 0xef, 0x80, 0x1f, 0xf8, 0x1, 0xff, 0x80,
    0x1f, 0xf8, 0x1, 0xff, 0x80, 0x1f, 0xf8, 0x1,
    0xff, 0xc1, 0xff, 0x7c, 0x3f, 0xe7, 0xe3, 0xfe,
    0x3f, 0x1f, 0xc1, 0xff, 0xfc, 0xf, 0xff, 0xe0,
    0x1f, 0xdf, 0x0, 0x0, 0xe0, 0x0, 0x0,

    /* U+0052 "R" */
    0xff, 0xf8, 0x3f, 0xff, 0x8f, 0xff, 0xf3, 0xe0,
    0x7e, 0xf8, 0xf, 0xbe, 0x3, 0xef, 0x80, 0xfb,
    0xe0, 0x3e, 0xf8, 0x1f, 0x3f, 0xff, 0xcf, 0xff,
    0xc3, 0xff, 0xfc, 0xf8, 0x1f, 0x3e, 0x7, 0xef,
    0x80, 0xfb, 0xe0, 0x3e, 0xf8, 0xf, 0xbe, 0x3,
    0xef, 0x80, 0xfb, 0xe0, 0x3e,

    /* U+0053 "S" */
    0x3, 0xf8, 0xf, 0xff, 0xf, 0xff, 0xc7, 0xc3,
    0xf7, 0xc0, 0xfb, 0xe0, 0x7d, 0xfc, 0x0, 0xff,
    0xe0, 0x7f, 0xfc, 0x1f, 0xff, 0x87, 0xff, 0xc0,
    0xff, 0xf0, 0xf, 0xf8, 0x0, 0xff, 0xe0, 0x3f,
    0xf0, 0x1f, 0x7e, 0x1f, 0x3f, 0xff, 0x7, 0xff,
    0x0, 0xfe, 0x0,

    /* U+0054 "T" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x7c,
    0x0, 0x3e, 0x0, 0x1f, 0x0, 0xf, 0x80, 0x7,
    0xc0, 0x3, 0xe0, 0x1, 0xf0, 0x0, 0xf8, 0x0,
    0x7c, 0x0, 0x3e, 0x0, 0x1f, 0x0, 0xf, 0x80,
    0x7, 0xc0, 0x3, 0xe0, 0x1, 0xf0, 0x0, 0xf8,
    0x0, 0x7c, 0x0,

    /* U+0055 "U" */
    0xf8, 0xf, 0xfc, 0x7, 0xfe, 0x3, 0xff, 0x1,
    0xff, 0x80, 0xff, 0xc0, 0x7f, 0xe0, 0x3f, 0xf0,
    0x1f, 0xf8, 0xf, 0xfc, 0x7, 0xfe, 0x3, 0xff,
    0x1, 0xff, 0x80, 0xff, 0xc0, 0x7f, 0xe0, 0x3e,
    0xf8, 0x3e, 0x7c, 0x3f, 0x1f, 0xff, 0x7, 0xff,
    0x0, 0xfe, 0x0,

    /* U+0056 "V" */
    0xf8, 0x7, 0xff, 0x1, 0xff, 0xc0, 0xfd, 0xf0,
    0x3e, 0x7c, 0xf, 0x9f, 0x83, 0xe3, 0xe1, 0xf0,
    0xf8, 0x7c, 0x3e, 0x1f, 0x7, 0xcf, 0x81, 0xf3,
    0xe0, 0x7c, 0xf8, 0xf, 0x3c, 0x3, 0xff, 0x0,
    0xff, 0xc0, 0x1f, 0xe0, 0x7, 0xf8, 0x1, 0xfe,
    0x0, 0x7f, 0x0, 0xf, 0xc0,

    /* U+0057 "W" */
    0xf8, 0x1f, 0x3, 0xff, 0x83, 0xe0, 0xfd, 0xf0,
    0x7c, 0x1f, 0x3e, 0x1f, 0xc3, 0xe7, 0xc3, 0xf8,
    0x7c, 0xf8, 0x7f, 0xf, 0xf, 0xf, 0xe3, 0xe1,
    0xf3, 0xdc, 0x7c, 0x3e, 0x7b, 0xcf, 0x83, 0xcf,
    0x79, 0xe0, 0x79, 0xef, 0x3c, 0xf, 0x39, 0xef,
    0x81, 0xff, 0x1d, 0xf0, 0x1f, 0xe3, 0xfc, 0x3,
    0xfc, 0x7f, 0x80, 0x7f, 0x8f, 0xf0, 0xf, 0xe0,
    0xfc, 0x0, 0xfc, 0x1f, 0x80, 0x1f, 0x83, 0xf0,
    0x3, 0xf0, 0x7e, 0x0,

    /* U+0058 "X" */
    0x7e, 0x7, 0xe7, 0xe0, 0x7c, 0x3f, 0xf, 0xc1,
    0xf8, 0xf8, 0x1f, 0x9f, 0x0, 0xff, 0xf0, 0x7,
    0xfe, 0x0, 0x3f, 0xc0, 0x3, 0xfc, 0x0, 0x1f,
    0x80, 0x3, 0xfc, 0x0, 0x3f, 0xc0, 0x7, 0xfe,
    0x0, 0xff, 0xf0, 0xf, 0xbf, 0x1, 0xf1, 0xf8,
    0x3f, 0xf, 0xc7, 0xe0, 0xfc, 0x7e, 0x7, 0xef,
    0xc0, 0x7f,

    /* U+0059 "Y" */
    0xfc, 0x7, 0xef, 0x80, 0xf9, 0xf8, 0x3f, 0x1f,
    0x7, 0xc3, 0xf1, 0xf8, 0x3e, 0x3e, 0x7, 0xef,
    0xc0, 0x7f, 0xf0, 0x7, 0xfc, 0x0, 0xff, 0x80,
    0xf, 0xe0, 0x1, 0xfc, 0x0, 0x1f, 0x0, 0x3,
    0xe0, 0x0, 0x7c, 0x0, 0xf, 0x80, 0x1, 0xf0,
    0x0, 0x3e, 0x0, 0x7, 0xc0, 0x0, 0xf8, 0x0,

    /* U+005A "Z" */
    0x7f, 0xff, 0xbf, 0xff, 0xdf, 0xff, 0xe0, 0x7,
    0xe0, 0x7, 0xf0, 0x7, 0xf0, 0x3, 0xf0, 0x3,
    0xf8, 0x3, 0xf8, 0x1, 0xf8, 0x1, 0xf8, 0x1,
    0xfc, 0x1, 0xfc, 0x0, 0xfc, 0x0, 0xfe, 0x0,
    0xfe, 0x0, 0x7e, 0x0, 0x7f, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xf0,

    /* U+005B "[" */
    0xff, 0xff, 0xff, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8,
    0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8,
    0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xff, 0xff,
    0xff,

    /* U+005C "\\" */
    0xf0, 0xf, 0x80, 0x78, 0x7, 0x80, 0x7c, 0x3,
    0xc0, 0x3e, 0x1, 0xe0, 0x1e, 0x1, 0xf0, 0xf,
    0x0, 0xf0, 0xf, 0x80, 0x78, 0x7, 0xc0, 0x3c,
    0x3, 0xc0, 0x3e, 0x1, 0xe0, 0x1e,

    /* U+005D "]" */
    0xff, 0xff, 0xff, 0xe1, 0xf0, 0xf8, 0x7c, 0x3e,
    0x1f, 0xf, 0x87, 0xc3, 0xe1, 0xf0, 0xf8, 0x7c,
    0x3e, 0x1f, 0xf, 0x87, 0xc3, 0xe1, 0xf0, 0xf8,
    0x7f, 0xff, 0xff, 0xff, 0x80,

    /* U+005E "^" */
    0x3, 0x80, 0x1f, 0x0, 0x7c, 0x3, 0xf0, 0xf,
    0xe0, 0x7f, 0x81, 0xef, 0x7, 0xbc, 0x3c, 0xf8,
    0xf1, 0xe7, 0xc7, 0x9e, 0x1f, 0x78, 0x3c,

    /* U+005F "_" */
    0xff, 0xfc,

    /* U+0060 "`" */
    0xf8, 0x78, 0x78,

    /* U+0061 "a" */
    0xf, 0xf0, 0x3f, 0xfc, 0x7f, 0xfe, 0x7c, 0x3e,
    0x78, 0x3e, 0x0, 0x7e, 0xf, 0xfe, 0x7f, 0xfe,
    0x7f, 0x3e, 0xf8, 0x3e, 0xf8, 0x3e, 0xf8, 0x7e,
    0xff, 0xfe, 0x7f, 0xfe, 0x3f, 0x3e,

    /* U+0062 "b" */
    0xf8, 0x1, 0xf0, 0x3, 0xe0, 0x7, 0xc0, 0xf,
    0x80, 0x1f, 0x3c, 0x3f, 0xfe, 0x7f, 0xfe, 0xfc,
    0x7d, 0xf8, 0xff, 0xe0, 0xff, 0xc1, 0xff, 0x83,
    0xff, 0x7, 0xfe, 0xf, 0xfe, 0x3f, 0xfc, 0x7d,
    0xff, 0xfb, 0xff, 0xe7, 0xdf, 0x0,

    /* U+0063 "c" */
    0x7, 0xe0, 0x3f, 0xf0, 0xff, 0xf3, 0xe3, 0xe7,
    0xc3, 0xdf, 0x0, 0x3e, 0x0, 0x7c, 0x0, 0xf8,
    0x1, 0xf0, 0x7f, 0xf0, 0xf3, 0xe3, 0xe3, 0xff,
    0x83, 0xfe, 0x3, 0xf8, 0x0,

    /* U+0064 "d" */
    0x0, 0x3e, 0x0, 0x7c, 0x0, 0xf8, 0x1, 0xf0,
    0x3, 0xe1, 0xe7, 0xcf, 0xff, 0xbf, 0xff, 0x7c,
    0x7f, 0xf0, 0xff, 0xe0, 0xff, 0xc1, 0xff, 0x83,
    0xff, 0x7, 0xfe, 0xf, 0xfc, 0x3f, 0x7c, 0x7e,
    0xff, 0xfc, 0xff, 0xf8, 0x7d, 0xf0,

    /* U+0065 "e" */
    0x7, 0xe0, 0x1f, 0xf8, 0x3f, 0xfc, 0x7c, 0x3c,
    0x78, 0x1e, 0xf8, 0x1e, 0xff, 0xfe, 0xff, 0xff,
    0xf8, 0x0, 0xf8, 0x0, 0xfc, 0x1e, 0x7c, 0x3e,
    0x3f, 0xfc, 0x1f, 0xf8, 0x7, 0xe0,

    /* U+0066 "f" */
    0xf, 0xc7, 0xf3, 0xfc, 0xf8, 0x3e, 0x3f, 0xff,
    0xff, 0xff, 0x3e, 0xf, 0x83, 0xe0, 0xf8, 0x3e,
    0xf, 0x83, 0xe0, 0xf8, 0x3e, 0xf, 0x83, 0xe0,
    0xf8,

    /* U+0067 "g" */
    0xf, 0x3e, 0x7f, 0xfd, 0xff, 0xfb, 0xe3, 0xff,
    0x83, 0xff, 0x7, 0xfe, 0xf, 0xfc, 0x1f, 0xf8,
    0x3f, 0xf0, 0x7d, 0xf1, 0xfb, 0xff, 0xf3, 0xff,
    0xe3, 0xe7, 0xc0, 0xf, 0xbe, 0x1f, 0x7c, 0x7c,
    0xff, 0xf8, 0xff, 0xe0, 0x7f, 0x0,

    /* U+0068 "h" */
    0xf8, 0x1, 0xf0, 0x3, 0xe0, 0x7, 0xc0, 0xf,
    0x80, 0x1f, 0x3e, 0x3f, 0xff, 0x7f, 0xfe, 0xfc,
    0x7f, 0xf0, 0x7f, 0xe0, 0xff, 0xc1, 0xff, 0x83,
    0xff, 0x7, 0xfe, 0xf, 0xfc, 0x1f, 0xf8, 0x3f,
    0xf0, 0x7f, 0xe0, 0xff, 0xc1, 0xf0,

    /* U+0069 "i" */
    0xff, 0xfe, 0x0, 0x7f, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xf0,

    /* U+006A "j" */
    0x1f, 0x1f, 0x1f, 0x0, 0x0, 0x1f, 0x1f, 0x1f,
    0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f,
    0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0x1f, 0xff, 0xfe,
    0xfc,

    /* U+006B "k" */
    0xf8, 0x0, 0xf8, 0x0, 0xf8, 0x0, 0xf8, 0x0,
    0xf8, 0x0, 0xf8, 0x7c, 0xf8, 0xf8, 0xf9, 0xf8,
    0xfb, 0xf0, 0xff, 0xe0, 0xff, 0xc0, 0xff, 0xc0,
    0xff, 0xe0, 0xff, 0xe0, 0xfd, 0xf0, 0xf9, 0xf8,
    0xf8, 0xf8, 0xf8, 0xfc, 0xf8, 0x7e, 0xf8, 0x3e,

    /* U+006C "l" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xf0,

    /* U+006D "m" */
    0xf9, 0xf1, 0xf1, 0xff, 0xf7, 0xfb, 0xff, 0xff,
    0xf7, 0xe7, 0xf3, 0xff, 0x87, 0xc3, 0xff, 0xf,
    0x87, 0xfe, 0x1f, 0xf, 0xfc, 0x3e, 0x1f, 0xf8,
    0x7c, 0x3f, 0xf0, 0xf8, 0x7f, 0xe1, 0xf0, 0xff,
    0xc3, 0xe1, 0xff, 0x87, 0xc3, 0xff, 0xf, 0x87,
    0xfe, 0x1f, 0xf, 0x80,

    /* U+006E "n" */
    0xf9, 0xf1, 0xff, 0xfb, 0xff, 0xf7, 0xe3, 0xff,
    0x83, 0xff, 0x7, 0xfe, 0xf, 0xfc, 0x1f, 0xf8,
    0x3f, 0xf0, 0x7f, 0xe0, 0xff, 0xc1, 0xff, 0x83,
    0xff, 0x7, 0xfe, 0xf, 0x80,

    /* U+006F "o" */
    0x7, 0xc0, 0x3f, 0xe0, 0xff, 0xe3, 0xe3, 0xe7,
    0x87, 0xff, 0x7, 0xfe, 0xf, 0xfc, 0x1f, 0xf8,
    0x3f, 0xf0, 0x7d, 0xe1, 0xf3, 0xe3, 0xe3, 0xff,
    0x83, 0xfe, 0x1, 0xf0, 0x0,

    /* U+0070 "p" */
    0xfb, 0xe1, 0xff, 0xf3, 0xff, 0xf7, 0xe3, 0xef,
    0xc7, 0xff, 0x7, 0xfe, 0xf, 0xfc, 0x1f, 0xf8,
    0x3f, 0xf0, 0x7f, 0xf0, 0xff, 0xe3, 0xef, 0xff,
    0xdf, 0xff, 0x3e, 0x7c, 0x7c, 0x0, 0xf8, 0x1,
    0xf0, 0x3, 0xe0, 0x7, 0xc0, 0x0,

    /* U+0071 "q" */
    0xf, 0xbe, 0x7f, 0xfd, 0xff, 0xfb, 0xe3, 0xff,
    0x87, 0xff, 0x7, 0xfe, 0xf, 0xfc, 0x1f, 0xf8,
    0x3f, 0xf0, 0x7f, 0xe1, 0xfb, 0xe3, 0xf7, 0xff,
    0xe7, 0xff, 0xc7, 0xcf, 0x80, 0x1f, 0x0, 0x3e,
    0x0, 0x7c, 0x0, 0xf8, 0x1, 0xf0,

    /* U+0072 "r" */
    0xf9, 0xff, 0xff, 0xff, 0xf8, 0xfc, 0x3e, 0xf,
    0x83, 0xe0, 0xf8, 0x3e, 0xf, 0x83, 0xe0, 0xf8,
    0x3e, 0xf, 0x80,

    /* U+0073 "s" */
    0x1f, 0xc1, 0xff, 0xcf, 0xff, 0xbe, 0x3e, 0xf8,
    0x7f, 0xf8, 0x7, 0xfe, 0xf, 0xfe, 0xf, 0xfc,
    0x3, 0xff, 0x87, 0xff, 0x1f, 0x7f, 0xf9, 0xff,
    0xc0, 0xfc, 0x0,

    /* U+0074 "t" */
    0x3e, 0xf, 0x83, 0xe0, 0xf8, 0xff, 0xff, 0xff,
    0xfc, 0xf8, 0x3e, 0xf, 0x83, 0xe0, 0xf8, 0x3e,
    0xf, 0x83, 0xe0, 0xf8, 0x3f, 0xc7, 0xf0, 0xfc,

    /* U+0075 "u" */
    0xf8, 0x7f, 0xe1, 0xff, 0x87, 0xfe, 0x1f, 0xf8,
    0x7f, 0xe1, 0xff, 0x87, 0xfe, 0x1f, 0xf8, 0x7f,
    0xe1, 0xff, 0x87, 0xfe, 0x3f, 0x7f, 0xfd, 0xff,
    0xf3, 0xe7, 0xc0,

    /* U+0076 "v" */
    0xf8, 0x3f, 0xf0, 0x7d, 0xf0, 0xf3, 0xe3, 0xe7,
    0xc7, 0xc7, 0x8f, 0xf, 0x9e, 0x1f, 0x7c, 0x1e,
    0xf0, 0x3f, 0xe0, 0x7f, 0xc0, 0x7f, 0x0, 0xfe,
    0x1, 0xfc, 0x1, 0xf0, 0x0,

    /* U+0077 "w" */
    0xf8, 0x7c, 0x3f, 0xf0, 0xf8, 0x7d, 0xf1, 0xf0,
    0xfb, 0xe3, 0xf1, 0xe7, 0xcf, 0xe7, 0xc7, 0x9d,
    0xcf, 0x8f, 0xbb, 0x9e, 0x1f, 0x77, 0xbc, 0x1e,
    0xef, 0xf8, 0x3f, 0xcf, 0xe0, 0x7f, 0x1f, 0xc0,
    0xfe, 0x3f, 0x80, 0xfc, 0x7f, 0x1, 0xf8, 0x7c,
    0x3, 0xe0, 0xf8, 0x0,

    /* U+0078 "x" */
    0x7c, 0x7c, 0xf8, 0xf8, 0xfb, 0xe0, 0xff, 0x81,
    0xff, 0x1, 0xfc, 0x3, 0xf0, 0x3, 0xe0, 0xf,
    0xe0, 0x3f, 0xe0, 0x7f, 0xc1, 0xf7, 0xc7, 0xc7,
    0xcf, 0x8f, 0xbe, 0xf, 0x80,

    /* U+0079 "y" */
    0x7c, 0x1f, 0x7c, 0x1e, 0x7c, 0x3e, 0x3c, 0x3e,
    0x3e, 0x3c, 0x3e, 0x3c, 0x1e, 0x7c, 0x1f, 0x78,
    0x1f, 0x78, 0xf, 0x78, 0xf, 0xf0, 0xf, 0xf0,
    0x7, 0xf0, 0x7, 0xe0, 0x7, 0xe0, 0x7, 0xe0,
    0x7, 0xc0, 0x3f, 0xc0, 0x3f, 0x80, 0x3f, 0x0,

    /* U+007A "z" */
    0xff, 0xfb, 0xff, 0xef, 0xff, 0x80, 0xfe, 0x3,
    0xf0, 0x1f, 0x80, 0xfc, 0x7, 0xe0, 0x1f, 0x0,
    0xfc, 0x7, 0xe0, 0x3f, 0x0, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xc0,

    /* U+007B "{" */
    0x1, 0xe0, 0xfc, 0x3f, 0xf, 0x81, 0xe0, 0x3c,
    0x7, 0x80, 0xf0, 0x1e, 0x7, 0xc1, 0xf0, 0x7c,
    0xf, 0x1, 0xf8, 0xf, 0x0, 0xf0, 0x1e, 0x3,
    0xc0, 0x78, 0xf, 0x1, 0xe0, 0x3c, 0x3, 0xc0,
    0x3f, 0x1, 0xe0,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff,

    /* U+007D "}" */
    0xf0, 0x1f, 0x3, 0xf0, 0x1f, 0x1, 0xe0, 0x3c,
    0x7, 0x80, 0xf0, 0x1e, 0x3, 0xe0, 0x3f, 0x3,
    0xf0, 0x3e, 0x1f, 0xc7, 0xc0, 0xf0, 0x1e, 0x3,
    0xc0, 0x78, 0xf, 0x1, 0xe0, 0x3c, 0xf, 0x7,
    0xc0, 0xe0, 0x0,

    /* U+007E "~" */
    0x3e, 0x7, 0x7f, 0x8e, 0x7f, 0xfe, 0xe3, 0xfc,
    0xe0, 0x78
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 141, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 133, .box_w = 5, .box_h = 20, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 14, .adv_w = 224, .box_w = 10, .box_h = 8, .ofs_x = 2, .ofs_y = 11},
    {.bitmap_index = 24, .adv_w = 282, .box_w = 17, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 67, .adv_w = 282, .box_w = 17, .box_h = 25, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 121, .adv_w = 457, .box_w = 24, .box_h = 21, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 184, .adv_w = 323, .box_w = 19, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 232, .adv_w = 133, .box_w = 4, .box_h = 8, .ofs_x = 2, .ofs_y = 11},
    {.bitmap_index = 236, .adv_w = 133, .box_w = 8, .box_h = 25, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 261, .adv_w = 133, .box_w = 8, .box_h = 25, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 286, .adv_w = 199, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 302, .adv_w = 269, .box_w = 15, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 331, .adv_w = 142, .box_w = 5, .box_h = 10, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 338, .adv_w = 182, .box_w = 9, .box_h = 3, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 342, .adv_w = 142, .box_w = 5, .box_h = 5, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 346, .adv_w = 182, .box_w = 12, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 376, .adv_w = 282, .box_w = 16, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 416, .adv_w = 282, .box_w = 10, .box_h = 20, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 441, .adv_w = 282, .box_w = 15, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 479, .adv_w = 282, .box_w = 16, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 519, .adv_w = 282, .box_w = 17, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 562, .adv_w = 282, .box_w = 16, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 600, .adv_w = 282, .box_w = 16, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 640, .adv_w = 282, .box_w = 14, .box_h = 18, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 672, .adv_w = 282, .box_w = 16, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 712, .adv_w = 282, .box_w = 16, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 752, .adv_w = 142, .box_w = 5, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 762, .adv_w = 142, .box_w = 5, .box_h = 20, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 775, .adv_w = 269, .box_w = 15, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 805, .adv_w = 269, .box_w = 15, .box_h = 10, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 824, .adv_w = 269, .box_w = 15, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 854, .adv_w = 257, .box_w = 14, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 889, .adv_w = 358, .box_w = 21, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 942, .adv_w = 315, .box_w = 20, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 992, .adv_w = 323, .box_w = 17, .box_h = 20, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1035, .adv_w = 340, .box_w = 19, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1083, .adv_w = 340, .box_w = 18, .box_h = 20, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1128, .adv_w = 307, .box_w = 16, .box_h = 20, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1168, .adv_w = 274, .box_w = 15, .box_h = 20, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1206, .adv_w = 349, .box_w = 19, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1254, .adv_w = 332, .box_w = 17, .box_h = 20, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1297, .adv_w = 141, .box_w = 5, .box_h = 20, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1310, .adv_w = 266, .box_w = 14, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1345, .adv_w = 332, .box_w = 19, .box_h = 20, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1393, .adv_w = 274, .box_w = 15, .box_h = 20, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1431, .adv_w = 415, .box_w = 22, .box_h = 20, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1486, .adv_w = 332, .box_w = 17, .box_h = 20, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1529, .adv_w = 349, .box_w = 20, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1579, .adv_w = 307, .box_w = 17, .box_h = 20, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1622, .adv_w = 349, .box_w = 20, .box_h = 22, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1677, .adv_w = 323, .box_w = 18, .box_h = 20, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1722, .adv_w = 299, .box_w = 17, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1765, .adv_w = 290, .box_w = 17, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1808, .adv_w = 332, .box_w = 17, .box_h = 20, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1851, .adv_w = 290, .box_w = 18, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1896, .adv_w = 431, .box_w = 27, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1964, .adv_w = 315, .box_w = 20, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2014, .adv_w = 299, .box_w = 19, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2062, .adv_w = 299, .box_w = 17, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2105, .adv_w = 166, .box_w = 8, .box_h = 25, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 2130, .adv_w = 182, .box_w = 12, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2160, .adv_w = 166, .box_w = 9, .box_h = 25, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 2189, .adv_w = 269, .box_w = 14, .box_h = 13, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 2212, .adv_w = 224, .box_w = 14, .box_h = 1, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 2214, .adv_w = 133, .box_w = 7, .box_h = 3, .ofs_x = -1, .ofs_y = 16},
    {.bitmap_index = 2217, .adv_w = 266, .box_w = 16, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2247, .adv_w = 282, .box_w = 15, .box_h = 20, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2285, .adv_w = 266, .box_w = 15, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2314, .adv_w = 282, .box_w = 15, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2352, .adv_w = 274, .box_w = 16, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2382, .adv_w = 166, .box_w = 10, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2407, .adv_w = 274, .box_w = 15, .box_h = 20, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 2445, .adv_w = 282, .box_w = 15, .box_h = 20, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2483, .adv_w = 133, .box_w = 5, .box_h = 20, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2496, .adv_w = 133, .box_w = 8, .box_h = 25, .ofs_x = -1, .ofs_y = -5},
    {.bitmap_index = 2521, .adv_w = 266, .box_w = 16, .box_h = 20, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2561, .adv_w = 133, .box_w = 5, .box_h = 20, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2574, .adv_w = 415, .box_w = 23, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2618, .adv_w = 282, .box_w = 15, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2647, .adv_w = 274, .box_w = 15, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2676, .adv_w = 282, .box_w = 15, .box_h = 20, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 2714, .adv_w = 282, .box_w = 15, .box_h = 20, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 2752, .adv_w = 191, .box_w = 10, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2771, .adv_w = 249, .box_w = 14, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2798, .adv_w = 174, .box_w = 10, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2822, .adv_w = 282, .box_w = 14, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2849, .adv_w = 241, .box_w = 15, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2878, .adv_w = 373, .box_w = 23, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2922, .adv_w = 241, .box_w = 15, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2951, .adv_w = 241, .box_w = 16, .box_h = 20, .ofs_x = -1, .ofs_y = -5},
    {.bitmap_index = 2991, .adv_w = 241, .box_w = 14, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3018, .adv_w = 166, .box_w = 11, .box_h = 25, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 3053, .adv_w = 99, .box_w = 4, .box_h = 28, .ofs_x = 1, .ofs_y = -6},
    {.bitmap_index = 3067, .adv_w = 166, .box_w = 11, .box_h = 25, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 3102, .adv_w = 269, .box_w = 16, .box_h = 5, .ofs_x = 1, .ofs_y = 5}
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
    56, 14,
    56, 15,
    56, 27,
    56, 28,
    56, 34,
    56, 66,
    56, 70,
    56, 74,
    56, 80,
    56, 83,
    56, 86,
    56, 90,
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
    83, 72,
    83, 80,
    83, 82,
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
    -41, -22, -11, -33, -8, -8, -8, -58,
    -58, -25, -58, -50, -33, -58, -25, -58,
    -58, -33, -8, 3, -8, -17, -50, -58,
    -50, -39, -39, -41, -50, -50, -50, -50,
    -41, -50, -41, -50, -50, -58, -25, -58,
    -22, -22, -22, -25, -25, -8, -25, -17,
    -17, -8, -41, -8, -41, -17, -6, -17,
    -25, -17, -8, -17, -17, -17, -8, -50,
    -50, -50, -30, -30, -33, -41, -41, -6,
    -41, -33, -41, -33, -25, -8, -41, -25,
    -41, -8, -8, -8, -8, -8, -8, -33,
    -33, -25, -25, -41, -32
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
const lv_font_t ui_font_Helvetica_Neue_Heavy_28 = {
#else
lv_font_t ui_font_Helvetica_Neue_Heavy_28 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 29,          /*The maximum line height required by the font*/
    .base_line = 6,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -8,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if UI_FONT_HELVETICA_NEUE_HEAVY_28*/

