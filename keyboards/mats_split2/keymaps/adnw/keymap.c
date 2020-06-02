#include QMK_KEYBOARD_H
#include "keymap_german.h"


extern keymap_config_t keymap_config;




#define _______ KC_TRNS
#define XXXXXXX KC_NO


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


    [0] = LAYOUT(
         KC_TAB,        DE_K,    DE_U,    	DE_UE, 		DE_F,		DE_AE, 		    DE_V,           DE_G,  		DE_C,    DE_L,      DE_J,     KC_DEL         ,
         KC_LSFT,       DE_H,    DE_I,    	DE_E,  		DE_A,  		DE_O,  		    DE_D,           DE_T,  		DE_R,    DE_N,     	DE_S,     RSFT_T(KC_ENT)   ,
         KC_LCTL,       DE_Y,    DE_X,    	DE_OE, 		DE_Z,		DE_Q, 		    DE_B,           DE_P,  		DE_W,    DE_M,      DE_SS,    KC_RCTL,
                                            KC_LGUI, 	DE_COMM, 	LT(1, KC_BSPC),	LT(2, KC_SPC), DE_DOT, 	    KC_LALT
    ),
	[1] = LAYOUT(
		KC_ESC,     KC_1,    	KC_2,    	KC_3,    	KC_4, 		KC_5, 	    KC_6,    	KC_7,     	KC_8,     	KC_9, 		KC_0,    KC_TRNS,
		KC_TRNS,	KC_F1,    	KC_F2,    	KC_F3,    	KC_F4, 		KC_F5, 	    KC_F6,    	KC_F7,     	KC_F8,     	KC_F9, 		KC_UP,  KC_TRNS,
		KC_PSCR, 	KC_LALT, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_VOLU, 	KC_MNXT, 	KC_TRNS, 	KC_LEFT, 	KC_DOWN, KC_RIGHT,
											LCTL(KC_C), LCTL(KC_V),	KC_TRNS,    KC_MPLY, 	KC_VOLD,	KC_MPRV
	),

	[2] = LAYOUT(
		KC_ESC, 			ALGR(KC_E),	DE_UNDS, 	DE_LBRC, 	DE_RBRC, 	DE_CIRC,	DE_EXLM,	DE_LESS, 	DE_MORE, 	DE_EQL, 	DE_AMPR, DE_SS,
		RGB_MODE_FORWARD,	DE_BSLS,	DE_SLSH,	DE_LCBR, 	DE_RCBR, 	DE_ASTR, 	DE_QST, 	DE_LPRN, 	DE_RPRN, 	DE_MINS, 	DE_COLN, DE_AT,
		KC_SLEP, 			RGB_TOG, 	DE_HASH, 	DE_DLR, 	DE_PIPE, 	DE_TILD, 	DE_GRV, 	DE_PLUS, 	DE_PERC, 	DE_DQOT, 	DE_QUOT, DE_SCLN,
													LCTL(KC_C), LCTL(KC_V),	KC_TRNS,    KC_TRNS, 	KC_TRNS,	KC_TRNS
	),
};




