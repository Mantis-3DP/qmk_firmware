#include "matspad.h"
#include "keymap_german.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
	    DE_LPRN,        DE_LBRC, DE_RBRC, DE_RPRN, _______,    DE_EQL,
	    DE_MINS,        DE_SLSH, DE_ASTR, KC_BSPC, KC_DEL,     KC_F4,
	    KC_TAB,        KC_P7,   KC_P8,   KC_P9,   KC_DOT,     KC_LSFT,
	    DE_PLUS,        KC_P4,   KC_P5,   KC_P6,   KC_COMM,    KC_SPC,
	    LT(1, KC_ENT),  KC_P1,   KC_P2,   KC_P3,   KC_UP,      KC_F2,
	    _______,        _______, KC_P0,   KC_LEFT, KC_DOWN,    KC_RGHT),

	[1] = LAYOUT(
	    RESET,      _______,    _______,    _______,    _______,  _______,
	    _______,    _______,    _______,    _______,    _______,  _______,
	    _______,    _______,    _______,    _______,    _______,  _______,
	    LCTL(KC_X), _______,    _______,    _______,    _______,  _______,
	    _______,    LCTL(KC_C), LCTL(KC_V), _______,    KC_VOLU,  _______,
	    _______,    _______,    KC_MPLY,    KC_MPRV,    KC_VOLD,  KC_MNXT),
};



