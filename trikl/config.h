

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define DEVICE_VER      0x0001
#define VENDOR_ID       0x320F
#define PRODUCT_ID      0x5044
#define MANUFACTURER    Cooler master x QMK
#define PRODUCT         Modified Masterkeys S PBT

/* key matrix size */
#define MATRIX_ROWS 10
#define MATRIX_COLS 17

#define MATRIX_ROW_PINS  { F0, F1, F2, F3, F4, F5, F6, F7, A1, D2 }
#define MATRIX_COL_PINS  { B7, E1, C0, C1, C2, C3, C4, C5, C6, C7, B5, B4, B3, B2, B1, B0, A0 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL

#define ENCODERS_PAD_A { A2, D3 }
#define ENCODERS_PAD_B { A3, D4 }
#define ENCODER_DIRECTION_FLIP
#define ENCODER_RESOLUTIONS { 2, 2 }

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define OLED_TIMEOUT 180000

#define TAPPING_TERM 150