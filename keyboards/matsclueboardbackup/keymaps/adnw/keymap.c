#include "kb.h"
#include "keymap_german.h"
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 *  | ESC | 1| 2| 3| 4| 5| 6| 7| 8| 9| 0| ß| ´| BCSE| |Ins|
 *  |  TAB| Q| W| E| R| T| Z| U| I| O| P| Ü| +| ETR | |DEL  |
 *  |   CPSL| A| S| D| F| G| H| J| K| L| Ö| Ä| #| X |
 *  | LSHFT |   ^| Y| X| C| V| B| N| M| ;| :| -| RSHFT |          UP |
 *  |LCTRL  | LGUI| LALT |          SPC|    RALT|MO|RCTRL| LEFT |DOWN| RIHT|
 */
	[0] = KEYMAP(
		KC_ESC, 	DE_1, 	DE_2, 	DE_3, 	DE_4, 	DE_5, 	DE_6, 	DE_7, 	DE_8, 	DE_9, 	DE_0, DE_MINS, DE_GRV, KC_BSPC, KC_INS,
		KC_TAB, 	DE_K,   DE_U,   DE_UE, 	DE_F,	DE_AE, 	DE_V,   DE_G,   DE_C, 	DE_L,  	DE_J, DE_F, DE_ACUT, KC_ENT, KC_DEL,
		KC_LSFT, 	DE_H,   DE_I,   DE_E,   DE_A,  	DE_O,  	DE_D,   DE_T,   DE_R,	DE_N,   DE_S, DE_SS, MO(3),
		KC_LCTL, 	KC_COMM, DE_Y,  DE_X,   DE_OE, 	DE_Z,	DE_Q, 	DE_B,   DE_P,   DE_W,	DE_M, KC_DOT, KC_LSFT, KC_UP,
	    KC_RGUI, KC_LALT, LCTL(KC_C),LT(3, KC_SPC), LCTL(KC_V), 	MO(1), 	KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
		),

	[1] = KEYMAP(
		KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS, RGB_TOG,
		KC_TRNS, KC_MS_BTN1, KC_MS_UP, KC_MS_BTN2, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_SLEP,
		KC_TRNS, KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, RGB_MOD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(2), KC_VOLU,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MPLY, KC_MPRV, KC_VOLD, KC_MNXT),
	[2] = KEYMAP(
		RESET, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_SAI,
		KC_TRNS, RGB_M_P, RGB_M_R, RGB_M_B, RGB_M_SW, RGB_M_SN, RGB_M_K, RGB_M_X, RGB_M_G, RGB_M_T, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_SAD,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_HUI,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_VAD, RGB_HUD, RGB_VAI),
	[3] = KEYMAP(
		KC_TRNS, KC_TRNS, DE_SQ2, DE_SQ3, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, DE_UNDS, DE_LBRC, DE_RBRC, DE_CIRC, DE_EXLM, DE_LESS, DE_MORE, DE_EQL, DE_AMPR, KC_TRNS, DE_SLSH, KC_TRNS, KC_TRNS,
		KC_TRNS, DE_BSLS, DE_SLSH, DE_LCBR, DE_RCBR, DE_ASTR, DE_QST, DE_LPRN, DE_RPRN, DE_MINS, DE_COLN, DE_AT, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_HASH, DE_DLR, DE_PIPE, DE_TILD, DE_GRV, DE_PLUS, DE_PERC, DE_DQOT, DE_QUOT, DE_SCLN, KC_TRNS, KC_VOLU,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MPLY, KC_MPRV, KC_VOLD, KC_MNXT),

	[4] = KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PSLS, KC_PAST, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_BSPC, KC_UP, KC_TRNS, KC_TRNS, KC_P7, KC_P8, KC_P9, KC_PPLS, KC_PMNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_P4, KC_P5, KC_P6, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_COLN, KC_P1, KC_P2, KC_P3, KC_SCLN, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_P0, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
};
// RGB Modes
// 1 = Static
// 2-5 = Breathing
// 6-8 = Rainbow
// 9-14 = Swirl
// 15-20 = Snake
// 21-24 = Nightrider
// 25 = Christmas
// 26-30 = Static Gradient
//const uint8_t RGBLED_RAINBOW_SWIRL_INTERVALS[] PROGMEM = {100, 50, 10};
// Set the last one to 10ms for some speedy swirls


//uint8_t prev = 0;
//uint32_t check;
//uint32_t desired = 9;



void matrix_init_user(void) {
	//rgblight_mode(desired);
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

void led_set_user(uint8_t usb_led) {

	if (usb_led & (1 << USB_LED_NUM_LOCK)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_COMPOSE)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_KANA)) {

	} else {

	}

}
