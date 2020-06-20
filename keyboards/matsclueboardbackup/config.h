#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    Mats
#define PRODUCT         MatsKeyboard		
#define DESCRIPTION     68Percent

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

/* key matrix pins */
#define MATRIX_ROW_PINS { B0, B1, B2, B3, B7 }
#define MATRIX_COL_PINS { B5, B6, F7, F6, B4, D7, F4, D2, D3, C6, C7, F0, F1, F5, D1 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* number of backlight levels */

#ifdef BACKLIGHT_PIN
#define BACKLIGHT_LEVELS 3
#endif

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

/* prevent stuck modifiers */
#define PREVENT_STUCK_MODIFIERS

/* disable RBG while Pc asleep */
#define RGBLIGHT_SLEEP

#define USB_MAX_POWER_CONSUMPTION 20
#define RGBSTRIP_CURRENT_LIMIT 1 // Strip current limit in mA.
#define RGBSTRIP_MAX_CURRENT_PER_LIGHT 1

#define RGB_DI_PIN D0
#ifdef RGB_DI_PIN
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 20
#define RGBLIGHT_HUE_STEP 4
#define RGBLIGHT_SAT_STEP 4
#define RGBLIGHT_VAL_STEP 4
#endif

#endif