/*
 * ili9341_gfx.h
 *
 *  Created on: Jan 17, 2020
 *      Author: andrew
 */

#ifndef __ILI9341_GFX_H
#define __ILI9341_GFX_H

#ifdef __cplusplus
extern "C" {
#endif

// ----------------------------------------------------------------- includes --

#include <stdint.h>

#include "ili9341.h"
#include "ili9341_font.h"

// ------------------------------------------------------------------ defines --

#define ILI_ALICEBLUE 0xF7DF
#define ILI_ANTIQUEWHITE 0xFF5A
#define ILI_AQUA 0x07FF
#define ILI_AQUAMARINE 0x7FFA
#define ILI_AZURE 0xF7FF
#define ILI_BEIGE 0xF7BB
#define ILI_BISQUE 0xFF38
#define ILI_BLACK 0x0000 /*   0, 0, 0 */
#define ILI_BLANCHEDALMOND 0xFF59
#define ILI_BLUE 0x001F /*   0, 0, 255 */
#define ILI_BLUEVIOLET 0x895C
#define ILI_BROWN 0xA145
#define ILI_BURLYWOOD 0xDDD0
#define ILI_CADETBLUE 0x5CF4
#define ILI_CHARTREUSE 0x7FE0
#define ILI_CHOCOLATE 0xD343
#define ILI_CORAL 0xFBEA
#define ILI_CORNFLOWERBLUE 0x64BD
#define ILI_CORNSILK 0xFFDB
#define ILI_CRIMSON 0xD8A7
#define ILI_CYAN 0x07FF /*   0, 255, 255 */
#define ILI_DARKBLUE 0x0011
#define ILI_DARKCYAN 0x03EF /*   0, 128, 128 */
#define ILI_DARKCYAN2 0x0451
#define ILI_DARKGOLDENROD 0xBC21
#define ILI_DARKGRAY 0xAD55
#define ILI_DARKGREEN2 0x0320
#define ILI_DARKGREEN 0x03E0 /*   0, 128, 0 */
#define ILI_DARKGREY 0x7BEF /* 128, 128, 128 */
#define ILI_DARKKHAKI 0xBDAD
#define ILI_DARKMAGENTA 0x8811
#define ILI_DARKOLIVEGREEN 0x5345
#define ILI_DARKORANGE 0xFC60
#define ILI_DARKORCHID 0x9999
#define ILI_DARKRED 0x8800
#define ILI_DARKSALMON 0xECAF
#define ILI_DARKSEAGREEN 0x8DF1
#define ILI_DARKSLATEBLUE 0x49F1
#define ILI_DARKSLATEGRAY 0x2A69
#define ILI_DARKTURQUOISE 0x067A
#define ILI_DARKVIOLET 0x901A
#define ILI_DEEPPINK 0xF8B2
#define ILI_DEEPSKYBLUE 0x05FF
#define ILI_DIMGRAY 0x6B4D
#define ILI_DODGERBLUE 0x1C9F
#define ILI_FIREBRICK 0xB104
#define ILI_FLORALWHITE 0xFFDE
#define ILI_FORESTGREEN 0x2444
#define ILI_FUCHSIA 0xF81F
#define ILI_GAINSBORO 0xDEFB
#define ILI_GHOSTWHITE 0xFFDF
#define ILI_GOLD 0xFEA0
#define ILI_GOLDENROD 0xDD24
#define ILI_GRAY 0x8410
#define ILI_GREEN2 0x0400
#define ILI_GREEN 0x07E0 /*   0, 255, 0 */
#define ILI_GREENYELLOW 0xAFE5 /* 173, 255, 47 */
#define ILI_HONEYDEW 0xF7FE
#define ILI_HOTPINK 0xFB56
#define ILI_INDIANRED 0xCAEB
#define ILI_INDIGO 0x4810
#define ILI_IVORY 0xFFFE
#define ILI_KHAKI 0xF731
#define ILI_LAVENDER 0xE73F
#define ILI_LAVENDERBLUSH 0xFF9E
#define ILI_LAWNGREEN 0x7FE0
#define ILI_LEMONCHIFFON 0xFFD9
#define ILI_LIGHTBLUE 0xAEDC
#define ILI_LIGHTCORAL 0xF410
#define ILI_LIGHTCYAN 0xE7FF
#define ILI_LIGHTGOLDENRODYELLOW 0xFFDA
#define ILI_LIGHTGREEN 0x9772
#define ILI_LIGHTGREY 0xC618 /* 192, 192, 192 */
#define ILI_LIGHTGREY2 0xD69A
#define ILI_LIGHTPINK 0xFDB8
#define ILI_LIGHTSALMON 0xFD0F
#define ILI_LIGHTSEAGREEN 0x2595
#define ILI_LIGHTSKYBLUE 0x867F
#define ILI_LIGHTSLATEGRAY 0x7453
#define ILI_LIGHTSTEELBLUE 0xB63B
#define ILI_LIGHTYELLOW 0xFFFC
#define ILI_LIME 0x07E0
#define ILI_LIMEGREEN 0x3666
#define ILI_LINEN 0xFF9C
#define ILI_MAGENTA 0xF81F /* 255, 0, 255 */
#define ILI_MAROON 0x7800 /* 128, 0, 0 */
#define ILI_MAROON2 0x8000
#define ILI_MEDIUMAQUAMARINE 0x6675
#define ILI_MEDIUMBLUE 0x0019
#define ILI_MEDIUMORCHID 0xBABA
#define ILI_MEDIUMPURPLE 0x939B
#define ILI_MEDIUMSEAGREEN 0x3D8E
#define ILI_MEDIUMSLATEBLUE 0x7B5D
#define ILI_MEDIUMSPRINGGREEN 0x07D3
#define ILI_MEDIUMTURQUOISE 0x4E99
#define ILI_MEDIUMVIOLETRED 0xC0B0
#define ILI_MIDNIGHTBLUE 0x18CE
#define ILI_MINTCREAM 0xF7FF
#define ILI_MISTYROSE 0xFF3C
#define ILI_MOCCASIN 0xFF36
#define ILI_NAVAJOWHITE 0xFEF5
#define ILI_NAVY 0x000F /*   0, 0, 128 */
#define ILI_NAVY2 0x0010
#define ILI_OLDLACE 0xFFBC
#define ILI_OLIVE 0x7BE0 /* 128, 128, 0 */
#define ILI_OLIVE2 0x8400
#define ILI_OLIVEDRAB 0x6C64
#define ILI_ORANGE 0xFD20 /* 255, 165, 0 */
#define ILI_ORANGERED 0xFA20
#define ILI_ORCHID 0xDB9A
#define ILI_PALEGOLDENROD 0xEF55
#define ILI_PALEGREEN 0x9FD3
#define ILI_PALETURQUOISE 0xAF7D
#define ILI_PALEVIOLETRED 0xDB92
#define ILI_PAPAYAWHIP 0xFF7A
#define ILI_PEACHPUFF 0xFED7
#define ILI_PERU 0xCC27
#define ILI_PINK 0xF81F
#define ILI_PINK_2 0xFE19
#define ILI_PLUM 0xDD1B
#define ILI_POWDERBLUE 0xB71C
#define ILI_PURPLE 0x780F /* 128, 0, 128 */
#define ILI_PURPLE2 0x8010
#define ILI_RED 0xF800 /* 255, 0, 0 */
#define ILI_ROSYBROWN 0xBC71
#define ILI_ROYALBLUE 0x435C
#define ILI_SADDLEBROWN 0x8A22
#define ILI_SALMON 0xFC0E
#define ILI_SANDYBROWN 0xF52C
#define ILI_SEAGREEN 0x2C4A
#define ILI_SEASHELL 0xFFBD
#define ILI_SIENNA 0xA285
#define ILI_SILVER 0xC618
#define ILI_SKYBLUE 0x867D
#define ILI_SLATEBLUE 0x6AD9
#define ILI_SLATEGRAY 0x7412
#define ILI_SNOW 0xFFDF
#define ILI_SPRINGGREEN 0x07EF
#define ILI_STEELBLUE 0x4416
#define ILI_TAN 0xD5B1
#define ILI_TEAL 0x0410
#define ILI_THISTLE 0xDDFB
#define ILI_TOMATO 0xFB08
#define ILI_TURQUOISE 0x471A
#define ILI_VIOLET 0xEC1D
#define ILI_WHEAT 0xF6F6
#define ILI_WHITE 0xFFFF /* 255, 255, 255 */
#define ILI_WHITESMOKE 0xF7BE
#define ILI_YELLOW 0xFFE0 /* 255, 255, 0 */
#define ILI_YELLOWGREEN 0x9E66

// ------------------------------------------------------------------- macros --

#define __ILI9341_COLOR565(r,g,b) \
    ( (((r) & 0xF8) << 8) |  \
      (((g) & 0xFC) << 3) |  \
      (((b) & 0xF8) >> 3) )

#define __ILI9341_COLOR565_RGB(rgb) \
    __ILI9341_COLOR565((rgb).red, (rgb).green, (rgb).blue)

#define __ILI9341_RGB(r,g,b) \
    (ili9341_color_rgb_t){ .red = (r), .green = (g), .blue = (b) }

// ----------------------------------------------------------- exported types --

typedef uint16_t ili9341_color_t;

typedef struct
{
  int16_t red;
  int16_t green;
  int16_t blue;
}
ili9341_color_rgb_t;

// TODO:
typedef enum
{
  iwwNONE = -1,
  iwwTruncate, // = 0
  iwwCharWrap, // = 1
  iwwWordWrap, // = 2
  iwwCOUNT     // = 3
}
ili9341_word_wrap_t;

typedef struct
{
  ili9341_font_t const *font;
  ili9341_color_t fg_color;
  ili9341_color_t bg_color;
  uint16_t origin_x;
  uint16_t origin_y;
}
ili9341_text_attr_t;

// ------------------------------------------------------- exported variables --

//extern ili9341_color_t const ILI9341_BLACK;
//extern ili9341_color_t const ILI9341_NAVY;
//extern ili9341_color_t const ILI9341_DARKGREEN;
//extern ili9341_color_t const ILI9341_DARKCYAN;
//extern ili9341_color_t const ILI9341_MAROON;
//extern ili9341_color_t const ILI9341_PURPLE;
//extern ili9341_color_t const ILI9341_OLIVE;
//extern ili9341_color_t const ILI9341_LIGHTGREY;
//extern ili9341_color_t const ILI9341_DARKGREY;
//extern ili9341_color_t const ILI9341_BLUE;
//extern ili9341_color_t const ILI9341_GREEN;
//extern ili9341_color_t const ILI9341_CYAN;
//extern ili9341_color_t const ILI9341_RED;
//extern ili9341_color_t const ILI9341_MAGENTA;
//extern ili9341_color_t const ILI9341_YELLOW;
//extern ili9341_color_t const ILI9341_WHITE;
//extern ili9341_color_t const ILI9341_ORANGE;
//extern ili9341_color_t const ILI9341_GREENYELLOW;
//extern ili9341_color_t const ILI9341_PINK;

// ------------------------------------------------------- exported functions --

ili9341_color_rgb_t ili9341_rgb_wheel(uint8_t *pos);
ili9341_color_t ili9341_color_wheel(uint8_t *pos);

void ili9341_spi_tft_set_address_rect(ili9341_t *lcd,
    uint16_t x0, uint16_t y0, uint16_t x1, uint16_t y1);

void ili9341_transmit_wait(ili9341_t *lcd);
void ili9341_transmit_color(ili9341_t *lcd, uint16_t size,
    uint16_t color[]/* already byte-swapped (LE) */, ili9341_bool_t wait);

void ili9341_draw_pixel(ili9341_t *lcd, ili9341_color_t color,
    int16_t x, int16_t y);

void ili9341_draw_line(ili9341_t *lcd, ili9341_color_t color,
    int16_t x0, int16_t y0, int16_t x1, int16_t y1);

void ili9341_draw_rect(ili9341_t *lcd, ili9341_color_t color,
    int16_t x, int16_t y, uint16_t w, uint16_t h);
void ili9341_fill_rect(ili9341_t *lcd, ili9341_color_t color,
    int16_t x, int16_t y, uint16_t w, uint16_t h);

void ili9341_draw_circle(ili9341_t *lcd, ili9341_color_t color,
    int16_t x, int16_t y, int16_t r);
void ili9341_fill_circle(ili9341_t *lcd, ili9341_color_t color,
    int16_t x, int16_t y, int16_t r);

void ili9341_fill_screen(ili9341_t *lcd, ili9341_color_t color);

void ili9341_draw_bitmap_1b(ili9341_t *lcd,
    ili9341_color_t fg_color, ili9341_color_t bg_color,
    int16_t x, int16_t y, uint16_t w, uint16_t h, uint8_t *bmp);

void ili9341_draw_char(ili9341_t *lcd, ili9341_text_attr_t attr, char ch);
void ili9341_draw_string(ili9341_t *lcd, ili9341_text_attr_t attr, char str[]);

#ifdef __cplusplus
}
#endif

#endif /* __ILI9341_GFX_H */
