/*******************************************************************************
 * Size: 16 px
 * Bpp: 1
 * Opts: --bpp 1 --size 16 --font D:/Nexcook/ESP_UI_test/assets/Fonts/roboto/Roboto-Condensed.ttf -o D:/Nexcook/ESP_UI_test/assets/Fonts/roboto\ui_font_Roboto_condensed_16.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_ROBOTO_CONDENSED_16
#define UI_FONT_ROBOTO_CONDENSED_16 1
#endif

#if UI_FONT_ROBOTO_CONDENSED_16

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xff, 0x3,

    /* U+0022 "\"" */
    0xff, 0xfa,

    /* U+0023 "#" */
    0x12, 0x14, 0x14, 0x7f, 0x34, 0x24, 0x24, 0x24,
    0xfe, 0x28, 0x28, 0x28,

    /* U+0024 "$" */
    0x10, 0x21, 0xf6, 0x7c, 0x78, 0x18, 0x1c, 0xc,
    0xf, 0x1e, 0x37, 0xc2, 0x4, 0x0,

    /* U+0025 "%" */
    0x60, 0x49, 0x24, 0x92, 0x86, 0x40, 0x40, 0x2c,
    0x29, 0x14, 0x92, 0x49, 0x20, 0x60,

    /* U+0026 "&" */
    0x38, 0x6c, 0x6c, 0x6c, 0x78, 0x30, 0x30, 0xfb,
    0xcf, 0xce, 0xc6, 0x7b,

    /* U+0027 "'" */
    0xfe,

    /* U+0028 "(" */
    0x12, 0x66, 0xcc, 0xcc, 0xcc, 0xcc, 0x46, 0x23,
    0x10,

    /* U+0029 ")" */
    0x8c, 0x66, 0x23, 0x33, 0x33, 0x33, 0x66, 0x4c,
    0x0,

    /* U+002A "*" */
    0x21, 0x3e, 0xc5, 0x28,

    /* U+002B "+" */
    0x30, 0x60, 0xc7, 0xf3, 0x6, 0xc, 0x18,

    /* U+002C "," */
    0xfe,

    /* U+002D "-" */
    0xf0,

    /* U+002E "." */
    0xc0,

    /* U+002F "/" */
    0x8, 0xc6, 0x21, 0x18, 0x84, 0x63, 0x11, 0x8c,
    0x0,

    /* U+0030 "0" */
    0x38, 0xdb, 0x1e, 0x3c, 0x78, 0xf1, 0xe3, 0xc7,
    0x8d, 0xb1, 0xc0,

    /* U+0031 "1" */
    0xff, 0x33, 0x33, 0x33, 0x33, 0x33,

    /* U+0032 "2" */
    0x79, 0x9b, 0x30, 0x60, 0xc3, 0x6, 0x18, 0x30,
    0xc3, 0x87, 0xf0,

    /* U+0033 "3" */
    0x7d, 0xcf, 0x18, 0x30, 0x47, 0x3, 0x3, 0x7,
    0x8f, 0xb1, 0xc0,

    /* U+0034 "4" */
    0xc, 0x38, 0x71, 0x62, 0xcd, 0x93, 0x66, 0xfe,
    0x18, 0x30, 0x60,

    /* U+0035 "5" */
    0x7e, 0x81, 0x2, 0x7, 0xd9, 0x81, 0x83, 0x7,
    0x8f, 0xb3, 0xc0,

    /* U+0036 "6" */
    0x3c, 0xc3, 0x6, 0xf, 0xd9, 0xf1, 0xe3, 0xc7,
    0x8d, 0xb1, 0xc0,

    /* U+0037 "7" */
    0xfe, 0xc, 0x30, 0x61, 0x83, 0x4, 0x18, 0x30,
    0x60, 0xc1, 0x80,

    /* U+0038 "8" */
    0x7d, 0x8f, 0x1e, 0x34, 0x47, 0x1b, 0x63, 0xc7,
    0x8d, 0xb9, 0xc0,

    /* U+0039 "9" */
    0x38, 0xdb, 0x1e, 0x3c, 0x78, 0xdb, 0xbf, 0x6,
    0xc, 0x33, 0xc0,

    /* U+003A ":" */
    0xc0, 0x0, 0xc0,

    /* U+003B ";" */
    0xc0, 0xf, 0xe0,

    /* U+003C "<" */
    0xc, 0xe6, 0x20, 0x60, 0x60, 0xc0,

    /* U+003D "=" */
    0xfc, 0x0, 0x0, 0xfc,

    /* U+003E ">" */
    0x83, 0x83, 0x83, 0x1b, 0x8c, 0x0,

    /* U+003F "?" */
    0x7b, 0x3c, 0xc3, 0xc, 0x71, 0x8c, 0x30, 0x0,
    0xc,

    /* U+0040 "@" */
    0xf, 0x83, 0xc, 0x60, 0x24, 0x72, 0x8d, 0x98,
    0x91, 0x99, 0x19, 0x91, 0x99, 0x19, 0x91, 0x9b,
    0x24, 0xcc, 0x40, 0x3, 0x0, 0x1f, 0x0,

    /* U+0041 "A" */
    0x8, 0xe, 0x7, 0x2, 0x83, 0x41, 0xb0, 0x98,
    0x44, 0x7f, 0x31, 0x90, 0x58, 0x20,

    /* U+0042 "B" */
    0xfd, 0x8f, 0x1e, 0x3c, 0x5f, 0x33, 0xe3, 0xc7,
    0x8f, 0x1f, 0xe0,

    /* U+0043 "C" */
    0x3c, 0x66, 0xc3, 0xc3, 0xc0, 0xc0, 0xc0, 0xc0,
    0xc3, 0xc3, 0x66, 0x3c,

    /* U+0044 "D" */
    0xfc, 0xc6, 0xc6, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0xc6, 0xc6, 0xfc,

    /* U+0045 "E" */
    0xff, 0x83, 0x6, 0xc, 0x1f, 0xb0, 0x60, 0xc1,
    0x83, 0x7, 0xf0,

    /* U+0046 "F" */
    0xff, 0x83, 0x6, 0xc, 0x18, 0x3f, 0x60, 0xc1,
    0x83, 0x6, 0x0,

    /* U+0047 "G" */
    0x3c, 0x67, 0xc3, 0xc0, 0xc0, 0xc0, 0xcf, 0xc3,
    0xc3, 0xc3, 0x63, 0x3e,

    /* U+0048 "H" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xff, 0xc3,
    0xc3, 0xc3, 0xc3, 0xc3,

    /* U+0049 "I" */
    0xff, 0xff, 0xff,

    /* U+004A "J" */
    0xc, 0x30, 0xc3, 0xc, 0x30, 0xc3, 0xf, 0x3c,
    0xde,

    /* U+004B "K" */
    0xc2, 0xc6, 0xcc, 0xc8, 0xd8, 0xf0, 0xd8, 0xc8,
    0xcc, 0xc6, 0xc6, 0xc3,

    /* U+004C "L" */
    0xc1, 0x83, 0x6, 0xc, 0x18, 0x30, 0x60, 0xc1,
    0x83, 0x7, 0xf0,

    /* U+004D "M" */
    0xe1, 0xf8, 0x7e, 0x1f, 0x87, 0xf3, 0xf4, 0xbd,
    0x2f, 0x4b, 0xde, 0xf3, 0x3c, 0xcf, 0x33,

    /* U+004E "N" */
    0xc3, 0xe3, 0xe3, 0xf3, 0xd3, 0xd3, 0xcb, 0xcb,
    0xcf, 0xc7, 0xc7, 0xc3,

    /* U+004F "O" */
    0x3c, 0x66, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0xc3, 0x66, 0x3c,

    /* U+0050 "P" */
    0xfd, 0x9f, 0x1e, 0x3c, 0x79, 0xff, 0x60, 0xc1,
    0x83, 0x6, 0x0,

    /* U+0051 "Q" */
    0x3c, 0x33, 0x30, 0xd8, 0x6c, 0x36, 0x1b, 0xd,
    0x86, 0xc3, 0x61, 0x99, 0x87, 0xe0, 0x10,

    /* U+0052 "R" */
    0xfc, 0xce, 0xc6, 0xc6, 0xc6, 0xcc, 0xf8, 0xc6,
    0xc6, 0xc6, 0xc6, 0xc6,

    /* U+0053 "S" */
    0x39, 0x9b, 0x1e, 0xe, 0xf, 0xf, 0x7, 0x7,
    0x8f, 0x99, 0xe0,

    /* U+0054 "T" */
    0xff, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
    0x18, 0x18, 0x18, 0x18,

    /* U+0055 "U" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0xc3, 0x66, 0x3c,

    /* U+0056 "V" */
    0xc1, 0xa0, 0x90, 0xcc, 0x66, 0x21, 0x10, 0xd8,
    0x68, 0x14, 0xa, 0x7, 0x3, 0x0,

    /* U+0057 "W" */
    0xc6, 0x34, 0x63, 0x46, 0x26, 0x72, 0x6f, 0x66,
    0xd6, 0x29, 0x62, 0x94, 0x39, 0xc3, 0x8c, 0x30,
    0xc3, 0xc,

    /* U+0058 "X" */
    0x63, 0x31, 0x89, 0x86, 0xc1, 0xc0, 0xe0, 0x70,
    0x28, 0x36, 0x13, 0x18, 0xc8, 0x60,

    /* U+0059 "Y" */
    0xc3, 0xc3, 0x62, 0x66, 0x24, 0x3c, 0x1c, 0x18,
    0x18, 0x18, 0x18, 0x18,

    /* U+005A "Z" */
    0xfe, 0xc, 0x30, 0x61, 0x83, 0xc, 0x18, 0x60,
    0xc3, 0x7, 0xf0,

    /* U+005B "[" */
    0xfb, 0x6d, 0xb6, 0xdb, 0x6d, 0xb7,

    /* U+005C "\\" */
    0xc1, 0x6, 0x18, 0x20, 0x83, 0x4, 0x10, 0x61,
    0x82, 0xc,

    /* U+005D "]" */
    0xed, 0xb6, 0xdb, 0x6d, 0xb6, 0xdf,

    /* U+005E "^" */
    0x30, 0xc3, 0x1e, 0x49, 0x20,

    /* U+005F "_" */
    0xfc,

    /* U+0060 "`" */
    0xc8,

    /* U+0061 "a" */
    0x7b, 0x3c, 0xc3, 0x7f, 0x3c, 0xf3, 0x7c,

    /* U+0062 "b" */
    0xc1, 0x83, 0x6, 0xf, 0xd9, 0xb1, 0xe3, 0xc7,
    0x8f, 0x1e, 0x6f, 0xc0,

    /* U+0063 "c" */
    0x39, 0x3c, 0xf0, 0xc3, 0xc, 0xd3, 0x38,

    /* U+0064 "d" */
    0x6, 0xc, 0x18, 0x37, 0xec, 0xf1, 0xe3, 0xc7,
    0x8f, 0x1b, 0x37, 0xe0,

    /* U+0065 "e" */
    0x39, 0x2c, 0xf3, 0xff, 0xc, 0x18, 0x38,

    /* U+0066 "f" */
    0x33, 0x18, 0xcf, 0x31, 0x8c, 0x63, 0x18, 0xc6,
    0x0,

    /* U+0067 "g" */
    0x7e, 0xcf, 0x1e, 0x3c, 0x78, 0xf1, 0xb3, 0x7e,
    0xc, 0x1b, 0xc0,

    /* U+0068 "h" */
    0xc3, 0xc, 0x30, 0xfb, 0x3c, 0xf3, 0xcf, 0x3c,
    0xf3, 0xcc,

    /* U+0069 "i" */
    0xc0, 0xff, 0xff, 0xc0,

    /* U+006A "j" */
    0x30, 0x0, 0x33, 0x33, 0x33, 0x33, 0x33, 0x3e,

    /* U+006B "k" */
    0xc1, 0x83, 0x6, 0xc, 0xd9, 0xb6, 0x68, 0xf1,
    0xb3, 0x66, 0x6c, 0x40,

    /* U+006C "l" */
    0xff, 0xff, 0xff, 0xc0,

    /* U+006D "m" */
    0xfb, 0xb3, 0x3c, 0xcf, 0x33, 0xcc, 0xf3, 0x3c,
    0xcf, 0x33, 0xcc, 0xc0,

    /* U+006E "n" */
    0xdb, 0xbc, 0xf3, 0xcf, 0x3c, 0xf3, 0xcc,

    /* U+006F "o" */
    0x38, 0xdb, 0x1e, 0x3c, 0x78, 0xf1, 0xb6, 0x38,

    /* U+0070 "p" */
    0xf9, 0x9b, 0x1e, 0x3c, 0x78, 0xf1, 0xe6, 0xfd,
    0x83, 0x6, 0x0,

    /* U+0071 "q" */
    0x7d, 0x3c, 0xf3, 0xcf, 0x3c, 0xf3, 0x7c, 0x30,
    0xc3,

    /* U+0072 "r" */
    0xfc, 0xcc, 0xcc, 0xcc, 0xc0,

    /* U+0073 "s" */
    0x7b, 0x3c, 0xf8, 0x78, 0x7c, 0xf3, 0x78,

    /* U+0074 "t" */
    0x66, 0xf6, 0x66, 0x66, 0x66, 0x30,

    /* U+0075 "u" */
    0xcf, 0x3c, 0xf3, 0xcf, 0x3c, 0xf3, 0x7c,

    /* U+0076 "v" */
    0xc6, 0x89, 0x93, 0x62, 0xc5, 0xa, 0x1c, 0x10,

    /* U+0077 "w" */
    0xcc, 0xd3, 0x34, 0xc9, 0xba, 0x7a, 0x8e, 0xe3,
    0x38, 0xcc, 0x31, 0x0,

    /* U+0078 "x" */
    0x44, 0xd8, 0xa1, 0xc1, 0x7, 0xb, 0x36, 0x46,

    /* U+0079 "y" */
    0xc6, 0x89, 0xb3, 0x62, 0xc5, 0xe, 0x1c, 0x10,
    0x20, 0xc3, 0x0,

    /* U+007A "z" */
    0xfc, 0x31, 0x84, 0x31, 0x86, 0x30, 0xfc,

    /* U+007B "{" */
    0x19, 0x8c, 0x63, 0x18, 0xd8, 0x31, 0x8c, 0x63,
    0x18, 0x60,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xf0,

    /* U+007D "}" */
    0xc6, 0x66, 0x66, 0x61, 0x66, 0x66, 0x66, 0xc0,

    /* U+007E "~" */
    0x63, 0x26, 0x30
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 56, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 60, .box_w = 2, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 88, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 6, .adv_w = 136, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 18, .adv_w = 131, .box_w = 7, .box_h = 15, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 32, .adv_w = 171, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 46, .adv_w = 149, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 58, .adv_w = 51, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 59, .adv_w = 76, .box_w = 4, .box_h = 17, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 68, .adv_w = 77, .box_w = 4, .box_h = 17, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 77, .adv_w = 99, .box_w = 5, .box_h = 6, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 81, .adv_w = 130, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 88, .adv_w = 52, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 89, .adv_w = 98, .box_w = 4, .box_h = 1, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 90, .adv_w = 63, .box_w = 2, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 91, .adv_w = 91, .box_w = 5, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 100, .adv_w = 132, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 111, .adv_w = 132, .box_w = 4, .box_h = 12, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 117, .adv_w = 132, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 128, .adv_w = 132, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 139, .adv_w = 132, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 150, .adv_w = 132, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 161, .adv_w = 132, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 172, .adv_w = 132, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 183, .adv_w = 132, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 194, .adv_w = 132, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 205, .adv_w = 60, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 208, .adv_w = 59, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 211, .adv_w = 114, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 217, .adv_w = 127, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 221, .adv_w = 116, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 227, .adv_w = 108, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 236, .adv_w = 208, .box_w = 12, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 259, .adv_w = 141, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 273, .adv_w = 141, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 284, .adv_w = 142, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 296, .adv_w = 149, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 308, .adv_w = 124, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 319, .adv_w = 124, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 330, .adv_w = 150, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 342, .adv_w = 157, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 354, .adv_w = 65, .box_w = 2, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 357, .adv_w = 123, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 366, .adv_w = 141, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 378, .adv_w = 123, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 389, .adv_w = 187, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 404, .adv_w = 157, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 416, .adv_w = 152, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 428, .adv_w = 141, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 439, .adv_w = 156, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 454, .adv_w = 142, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 466, .adv_w = 137, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 477, .adv_w = 131, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 489, .adv_w = 152, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 501, .adv_w = 141, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 515, .adv_w = 194, .box_w = 12, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 533, .adv_w = 141, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 547, .adv_w = 141, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 559, .adv_w = 126, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 570, .adv_w = 63, .box_w = 3, .box_h = 16, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 576, .adv_w = 93, .box_w = 6, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 586, .adv_w = 63, .box_w = 3, .box_h = 16, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 592, .adv_w = 96, .box_w = 6, .box_h = 6, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 597, .adv_w = 100, .box_w = 6, .box_h = 1, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 598, .adv_w = 75, .box_w = 3, .box_h = 2, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 599, .adv_w = 121, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 606, .adv_w = 126, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 618, .adv_w = 116, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 625, .adv_w = 126, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 637, .adv_w = 117, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 644, .adv_w = 76, .box_w = 5, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 653, .adv_w = 126, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 664, .adv_w = 126, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 674, .adv_w = 58, .box_w = 2, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 678, .adv_w = 59, .box_w = 4, .box_h = 16, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 686, .adv_w = 117, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 698, .adv_w = 58, .box_w = 2, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 702, .adv_w = 193, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 714, .adv_w = 126, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 721, .adv_w = 126, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 729, .adv_w = 126, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 740, .adv_w = 126, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 749, .adv_w = 79, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 754, .adv_w = 113, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 761, .adv_w = 77, .box_w = 4, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 767, .adv_w = 126, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 774, .adv_w = 113, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 782, .adv_w = 166, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 794, .adv_w = 113, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 802, .adv_w = 113, .box_w = 7, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 813, .adv_w = 113, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 820, .adv_w = 75, .box_w = 5, .box_h = 15, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 830, .adv_w = 56, .box_w = 2, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 834, .adv_w = 75, .box_w = 4, .box_h = 15, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 842, .adv_w = 148, .box_w = 7, .box_h = 3, .ofs_x = 1, .ofs_y = 3}
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
    3, 3,
    3, 8,
    3, 34,
    3, 66,
    3, 68,
    3, 69,
    3, 70,
    3, 72,
    3, 78,
    3, 79,
    3, 80,
    3, 81,
    3, 82,
    3, 84,
    3, 88,
    8, 3,
    8, 8,
    8, 34,
    8, 66,
    8, 68,
    8, 69,
    8, 70,
    8, 72,
    8, 78,
    8, 79,
    8, 80,
    8, 81,
    8, 82,
    8, 84,
    8, 88,
    9, 55,
    9, 56,
    9, 58,
    34, 3,
    34, 8,
    34, 32,
    34, 36,
    34, 40,
    34, 48,
    34, 50,
    34, 53,
    34, 54,
    34, 55,
    34, 56,
    34, 58,
    34, 80,
    34, 85,
    34, 86,
    34, 87,
    34, 88,
    34, 90,
    34, 91,
    35, 53,
    35, 55,
    35, 58,
    36, 10,
    36, 53,
    36, 62,
    36, 94,
    37, 13,
    37, 15,
    37, 27,
    37, 34,
    37, 53,
    37, 55,
    37, 57,
    37, 58,
    37, 59,
    38, 68,
    38, 69,
    38, 70,
    38, 71,
    38, 72,
    38, 80,
    38, 82,
    38, 86,
    38, 87,
    38, 88,
    38, 90,
    39, 13,
    39, 15,
    39, 27,
    39, 34,
    39, 66,
    39, 68,
    39, 69,
    39, 70,
    39, 72,
    39, 80,
    39, 82,
    39, 83,
    39, 86,
    39, 87,
    39, 90,
    41, 34,
    41, 53,
    41, 57,
    41, 58,
    42, 34,
    42, 53,
    42, 57,
    42, 58,
    43, 34,
    44, 14,
    44, 36,
    44, 40,
    44, 48,
    44, 50,
    44, 68,
    44, 69,
    44, 70,
    44, 72,
    44, 78,
    44, 79,
    44, 80,
    44, 81,
    44, 82,
    44, 86,
    44, 87,
    44, 88,
    44, 90,
    45, 3,
    45, 8,
    45, 34,
    45, 36,
    45, 40,
    45, 48,
    45, 50,
    45, 53,
    45, 54,
    45, 55,
    45, 56,
    45, 58,
    45, 86,
    45, 87,
    45, 88,
    45, 90,
    46, 34,
    46, 53,
    46, 57,
    46, 58,
    47, 34,
    47, 53,
    47, 57,
    47, 58,
    48, 13,
    48, 15,
    48, 27,
    48, 34,
    48, 53,
    48, 55,
    48, 57,
    48, 58,
    48, 59,
    49, 13,
    49, 15,
    49, 27,
    49, 34,
    49, 57,
    49, 59,
    49, 66,
    49, 68,
    49, 69,
    49, 70,
    49, 72,
    49, 80,
    49, 82,
    49, 85,
    49, 87,
    49, 90,
    50, 53,
    50, 55,
    50, 56,
    50, 58,
    51, 53,
    51, 55,
    51, 58,
    53, 13,
    53, 14,
    53, 15,
    53, 27,
    53, 34,
    53, 36,
    53, 40,
    53, 48,
    53, 50,
    53, 52,
    53, 53,
    53, 55,
    53, 56,
    53, 58,
    53, 66,
    53, 68,
    53, 69,
    53, 70,
    53, 72,
    53, 78,
    53, 79,
    53, 80,
    53, 81,
    53, 82,
    53, 83,
    53, 84,
    53, 86,
    53, 87,
    53, 88,
    53, 89,
    53, 90,
    53, 91,
    54, 34,
    55, 10,
    55, 13,
    55, 14,
    55, 15,
    55, 27,
    55, 34,
    55, 36,
    55, 40,
    55, 48,
    55, 50,
    55, 62,
    55, 66,
    55, 68,
    55, 69,
    55, 70,
    55, 72,
    55, 80,
    55, 82,
    55, 83,
    55, 86,
    55, 87,
    55, 90,
    55, 94,
    56, 10,
    56, 13,
    56, 14,
    56, 15,
    56, 27,
    56, 34,
    56, 53,
    56, 62,
    56, 66,
    56, 68,
    56, 69,
    56, 70,
    56, 72,
    56, 80,
    56, 82,
    56, 83,
    56, 86,
    56, 94,
    57, 14,
    57, 36,
    57, 40,
    57, 48,
    57, 50,
    57, 55,
    57, 68,
    57, 69,
    57, 70,
    57, 72,
    57, 80,
    57, 82,
    57, 86,
    57, 87,
    57, 90,
    58, 7,
    58, 10,
    58, 11,
    58, 13,
    58, 14,
    58, 15,
    58, 27,
    58, 34,
    58, 36,
    58, 40,
    58, 43,
    58, 48,
    58, 50,
    58, 52,
    58, 53,
    58, 54,
    58, 55,
    58, 56,
    58, 57,
    58, 58,
    58, 62,
    58, 66,
    58, 68,
    58, 69,
    58, 70,
    58, 71,
    58, 72,
    58, 78,
    58, 79,
    58, 80,
    58, 81,
    58, 82,
    58, 83,
    58, 84,
    58, 85,
    58, 86,
    58, 87,
    58, 89,
    58, 90,
    58, 91,
    58, 94,
    59, 34,
    59, 36,
    59, 40,
    59, 48,
    59, 50,
    59, 68,
    59, 69,
    59, 70,
    59, 72,
    59, 80,
    59, 82,
    59, 86,
    59, 87,
    59, 88,
    59, 90,
    60, 43,
    60, 54,
    66, 3,
    66, 8,
    66, 87,
    66, 90,
    67, 3,
    67, 8,
    67, 87,
    67, 89,
    67, 90,
    67, 91,
    68, 3,
    68, 8,
    70, 3,
    70, 8,
    70, 87,
    70, 90,
    71, 3,
    71, 8,
    71, 10,
    71, 62,
    71, 68,
    71, 69,
    71, 70,
    71, 72,
    71, 82,
    71, 94,
    73, 3,
    73, 8,
    76, 68,
    76, 69,
    76, 70,
    76, 72,
    76, 82,
    78, 3,
    78, 8,
    79, 3,
    79, 8,
    80, 3,
    80, 8,
    80, 87,
    80, 89,
    80, 90,
    80, 91,
    81, 3,
    81, 8,
    81, 87,
    81, 89,
    81, 90,
    81, 91,
    83, 3,
    83, 8,
    83, 13,
    83, 15,
    83, 27,
    83, 68,
    83, 69,
    83, 70,
    83, 71,
    83, 72,
    83, 80,
    83, 82,
    83, 85,
    83, 87,
    83, 88,
    83, 90,
    87, 3,
    87, 8,
    87, 13,
    87, 15,
    87, 27,
    87, 66,
    87, 68,
    87, 69,
    87, 70,
    87, 71,
    87, 72,
    87, 80,
    87, 82,
    88, 13,
    88, 15,
    88, 27,
    89, 68,
    89, 69,
    89, 70,
    89, 72,
    89, 80,
    89, 82,
    90, 3,
    90, 8,
    90, 13,
    90, 15,
    90, 27,
    90, 66,
    90, 68,
    90, 69,
    90, 70,
    90, 71,
    90, 72,
    90, 80,
    90, 82,
    91, 68,
    91, 69,
    91, 70,
    91, 72,
    91, 80,
    91, 82,
    92, 43,
    92, 54
};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] =
{
    -13, -13, -13, -6, -7, -7, -7, -7,
    -2, -2, -8, -2, -7, -5, 1, -13,
    -13, -13, -6, -7, -7, -7, -7, -2,
    -2, -8, -2, -7, -5, 1, 3, 2,
    3, -10, -10, -8, -1, -1, -1, -1,
    -16, -2, -11, -9, -12, -1, -2, -1,
    -6, -4, -6, 2, -3, -3, -7, -3,
    -4, -1, -2, -13, -13, -13, -3, -3,
    -3, -3, -5, -3, -2, -2, -2, -2,
    -2, -2, -2, -2, -3, -3, -3, -29,
    -29, -29, -7, -4, -3, -3, -3, -3,
    -3, -3, -3, -3, -3, -3, 2, -4,
    2, -3, 2, -4, 2, -3, -3, -8,
    -4, -4, -4, -4, -3, -3, -3, -3,
    -3, -3, -3, -3, -3, -3, -5, -8,
    -5, -17, -17, 2, -8, -8, -8, -8,
    -34, -7, -22, -18, -30, -5, -17, -11,
    -17, 2, -4, 2, -3, 2, -4, 2,
    -3, -13, -13, -13, -3, -3, -3, -3,
    -5, -3, -40, -40, -40, -17, -4, -3,
    -1, -2, -2, -2, -2, -2, -2, 2,
    2, 2, -5, -3, -2, -4, -10, -2,
    -6, -27, -29, -27, -27, -10, -3, -3,
    -3, -3, -2, 2, 2, 2, 2, -14,
    -12, -12, -12, -12, -14, -14, -12, -14,
    -12, -9, -14, -12, -9, -7, -10, -9,
    -7, -3, 3, -28, -5, -28, -28, -9,
    -2, -2, -2, -2, 2, -6, -5, -5,
    -5, -5, -6, -5, -4, -3, -1, -1,
    2, 2, -15, -7, -15, -15, -5, 2,
    2, -4, -4, -4, -4, -4, -4, -4,
    -3, -2, 2, -6, -3, -3, -3, -3,
    2, -3, -3, -3, -3, -3, -3, -3,
    -4, -4, -4, 3, -6, -26, -6, -26,
    -26, -10, -4, -4, -12, -4, -4, -2,
    2, -12, 2, 2, 2, 2, 2, -9,
    -8, -8, -8, -3, -8, -5, -5, -8,
    -5, -8, -5, -7, -3, -5, -2, -3,
    -2, -4, 2, 2, -3, -3, -3, -3,
    -3, -3, -3, -3, -3, -3, -2, -3,
    -3, -3, -2, -2, -8, -8, -2, -2,
    -4, -4, -1, -2, -1, -2, -1, -1,
    -2, -2, -2, -2, 2, 2, 3, 2,
    -3, -3, -3, -3, -3, 2, -2, -2,
    -2, -2, -2, -2, -2, -2, -2, -2,
    -2, -2, -2, -2, -3, -2, -2, -4,
    -4, -1, -2, -1, -2, 2, 2, -15,
    -15, -15, -2, -2, -2, 2, -2, -2,
    -2, 2, 2, 2, 2, 2, 2, -13,
    -13, -13, -2, -2, -2, -2, 2, -2,
    -2, -2, -15, -15, -15, -2, -2, -2,
    -2, -2, -2, 2, 2, -13, -13, -13,
    -2, -2, -2, -2, 2, -2, -2, -2,
    -2, -2, -2, -2, -2, -2, -2, -2
};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs =
{
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 432,
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
const lv_font_t ui_font_Roboto_condensed_16 = {
#else
lv_font_t ui_font_Roboto_condensed_16 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 18,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if UI_FONT_ROBOTO_CONDENSED_16*/

