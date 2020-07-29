#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6F61
#define DEVICE_VER      0x0002
#define MANUFACTURER    F14eagle
#define PRODUCT         F14 Ophelia Wired
#define DESCRIPTION     q.m.k. keyboard firmware for F14 Ophelia Wired

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 14

/* key matrix pins */
#define MATRIX_ROW_PINS { F0, F1, F4, F5, F6, F7 }
#define MATRIX_COL_PINS { B0, B1, B2, B3, B4, B5, B6, B7, D0, D1, D2, D3, D4, D5 }

#define RGB_DI_PIN D6
#define RGBLED_NUM 16
#define DIODE_DIRECTION COL2ROW

#define RGBLIGHT_ANIMATIONS
/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* number of backlight levels */
//#define BACKLIGHT_LEVELS 3

#endif
