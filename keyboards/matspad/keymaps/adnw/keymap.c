#include "matspad.h"
#include "keymap_german.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
	    DE_LPRN, DE_LBRC, DE_RBRC, DE_RPRN, KC_CALC,    _______,
	    KC_BSPC, DE_EQL,  DE_SLSH, DE_ASTR, KC_DEL,     KC_F4,
	    KC_COMM, KC_P7,   KC_P8,   KC_P9,   KC_DOT,     KC_TAB,
	    DE_MINS, KC_P4,   KC_P5,   KC_P6,   DE_PLUS,    KC_LSFT,
	    KC_ENT,  KC_P1,   KC_P2,   KC_P3,   KC_UP,      KC_F2,
	    DE_H,    DE_Q,    KC_P0,   KC_LEFT, KC_DOWN,    KC_RGHT),
};


