#include QMK_KEYBOARD_H
#include "quefrency.h"
#include "keymap_german.h"


// Test
extern keymap_config_t keymap_config;

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _BASE 0
#define _FN1 1

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
};

enum combo_events {
    A,
    U,
    S
};

enum {
    TD_ESC_CAPS,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_65_iso_with_macro(
    KC_F1,   KC_F2,   TD(TD_ESC_CAPS), 	DE_1, 	 	DE_2, 		DE_3, 		DE_4, 		DE_5, 		DE_6, 		DE_7, 		DE_8, 		DE_9, 		DE_0, 		KC_TRNS, 	KC_TRNS,  	KC_TRNS,  	KC_BSPC, KC_INS, \
    KC_F3,   KC_F4,   KC_TAB, 			DE_K,   	DE_U,  	 	DE_OE, 		KC_DOT,		DE_Y, 		DE_Q,   	DE_G,   	DE_C, 		DE_L,  		DE_J, 		KC_TRNS, 	KC_TRNS,  	KC_DEL, \
    KC_F5,   KC_F6,   KC_LSFT, 			DE_H,   	DE_I,   	DE_E,   	DE_A,  		DE_O,  		DE_D,   	DE_T,   	DE_R,		DE_N,   	DE_S, 		DE_F,		KC_TRNS,	KC_ENT,  	MO(1), \
    KC_F7,   KC_F8,   KC_LCTL, 			KC_TRNS, 	DE_V,  		DE_X,   	DE_DQUO, 	DE_COMM,	DE_MINS, 	DE_B,   	DE_P,   	DE_W,		DE_M, 		DE_Z, 	 	KC_LSFT,	KC_UP, 	 	KC_TRNS, \
    KC_F9,   KC_F10,  KC_LGUI, 			KC_LALT, 	LCTL(KC_C),	LCTL(KC_V),LT(3, KC_BSPC), LT(3, KC_BSPC), 		LT(3, KC_SPC), LCTL(KC_V), 	KC_TRNS, 	KC_RCTL, 			KC_LEFT, 	KC_DOWN, 	KC_RGHT
  ),
  
  [3] = LAYOUT_65_iso_with_macro(
    KC_TRNS,   KC_TRNS,   	KC_TRNS, 	KC_TRNS, 	 	KC_TRNS, 	KC_TRNS, 	KC_TRNS, 		KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS, 		KC_TRNS, 	KC_TRNS, 		KC_TRNS, 	KC_TRNS,  	KC_TRNS,  	KC_TRNS, KC_TRNS, \
    KC_TRNS,   KC_TRNS,   	KC_TRNS, 	DE_DEG , 		DE_UNDS, 	DE_LBRC, 	DE_RBRC, 		DE_CIRC, 	DE_EXLM, 	DE_LESS, 	DE_MORE, 		DE_EQL, 	DE_AMPR, 		KC_TRNS, 	DE_SLSH, 	KC_TRNS, 	 \
    KC_TRNS,   KC_TRNS,   	KC_TRNS, 	DE_BSLS, 		DE_SLSH, 	DE_LCBR, 	DE_RCBR, 		DE_ASTR, 	DE_QST, 	DE_LPRN, 	DE_RPRN, 		DE_MINS, 	DE_COLN, 		DE_AT, 		KC_TRNS,	KC_TRNS,	KC_TRNS, \
    KC_TRNS,   KC_TRNS,   	KC_TRNS,	LSFT(KC_PSCR), 	DE_HASH, 	DE_DLR, 	DE_PIPE, 		DE_TILD, 	DE_GRV, 	DE_PLUS, 	DE_PERC, 		DE_DQOT, 	DE_QUOT, 		DE_SCLN,  	KC_TRNS, 	KC_VOLU,	KC_TRNS, \
    KC_TRNS,   KC_TRNS,  	KC_TRNS, 	KC_TRNS, 		KC_TRNS, 	KC_TRNS,	KC_TRNS,     	KC_TRNS,	KC_TRNS, 	KC_TRNS, 	KC_TRNS,  		KC_TRNS,	KC_MPRV, 		KC_MPLY,  	KC_MNXT
  ),
  [1] = LAYOUT_65_iso_with_macro(
    _______, _______, KC_GESC, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_TRNS, KC_BSPC, RESET, \
    _______, _______, RGB_TOG, RGB_MOD, _______, KC_UP,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______, RGB_M_P , RGB_M_B, RGB_M_R, RGB_M_SW, RGB_M_SN, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, _______, KC_TILD, _______, _______, _______, _______,          _______, _______, _______, _______, _______, RGB_HUI, RGB_SAI, RGB_VAI
  )
};

const uint16_t PROGMEM a_combo[] = {DE_A, DE_OE, COMBO_END};
const uint16_t PROGMEM u_combo[] = {DE_U, DE_OE, COMBO_END};
const uint16_t PROGMEM s_combo[] = {DE_S, DE_OE, COMBO_END};
combo_t key_combos[COMBO_COUNT] = {
    [A] = COMBO(a_combo, DE_AE),
    [U] = COMBO(u_combo, DE_UE),
    [S] = COMBO(s_combo, DE_SS)
};

// Tap Dance definitions
qk_tap_dance_action_t tap_dance_actions[] = {
    // Tap once for Escape, twice for Caps Lock
    [TD_ESC_CAPS] = ACTION_TAP_DANCE_DOUBLE(KC_ESC, KC_CAPS),
};

void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 1) {
        if (clockwise) {
            tap_code(KC_PGDN);
        } else {
            tap_code(KC_PGUP);
        }
    }
    else if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLD);
        } else {
            tap_code(KC_VOLU);
        }
    }
}
