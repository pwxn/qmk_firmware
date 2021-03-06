#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    Barry
#define PRODUCT         CA66
#define DESCRIPTION     CA66

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

/* key matrix pins         0   1   2   3   4   5   6   7   8   9  10  11  12  13  14*/
#define MATRIX_ROW_PINS { F5, F4, F1, B0, B3 }
#define MATRIX_COL_PINS { F7, C7, C6, B6, B5, B4, D7, D6, D4, D5, D3, D2, F6, B7, E6 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* number of backlight levels */

#define BACKLIGHT_PIN F0
#define BACKLIGHT_LEVELS 3

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define RGB_DI_PIN B1
#ifdef RGB_DI_PIN

// #define RGBLIGHT_ANIMATIONS Lets only use some of them (Static_Light is always enabled)
#define RGBLIGHT_EFFECT_BREATHING       // 4 options
#define RGBLIGHT_EFFECT_RAINBOW_MOOD    // 3 options
#define RGBLIGHT_EFFECT_STATIC_GRADIENT // 10 options
#define RGBLIGHT_EFFECT_ALTERNATING     // 1 option

#define RGBLED_NUM 6
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#endif
