
/*#include "planck.h"*/

#include QMK_KEYBOARD_H

#ifdef BACKLIGHT_ENABLE
#include "backlight.h"
#endif
#include "keymap_german.h"

// for intellisense, has to be commented for building
/*
#include "..\..\..\..\quantum\keymap_extras\keymap_german.h"
#include "..\..\..\..\tmk_core\common\keycode.h"
*/


#define _______ KC_TRNS
#define XXXXXXX KC_NO

#define MEDIA_KEY_DELAY 7
/*
This layout tries to emulate Neo2, and is intended to be used with a German QWERTZ softwarelayout.
It has "üäöß" as it is optimized for a mix of German & English.
The special character layer and the navigation & number block layer are designed to keep the fingers near the home row.
*/
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/*
,-----------------------------------------------------------------------------------.
| Esc  |   K  |   U  |   Ü  |   .  |   Ä  |   V  |   G  |   C  |   L  |   J  |  F   |
|------+------+------+------+------+-------------+------+------+------+------+------|
| Ent  |   H  |   I  |   E  |   A  |   O  |   D  |   N  |   R  |   T  |   D  |  Y   |
|------+------+------+------+------+------|------+------+------+------+------+------|
| Shift|   Ü  |   Ö  |   Ä  |   P  |   Z  |   B  |   M  |   ,  |   .  |   J  |Shift |
|------+------+------+------+------+------+------+------+------+------+------+------|
| Ctrl | GUI  | Alt  |  M2  |  M1  |    Space    |  M1  |  M2  | Alt  |MRight| Ctrl |
`-----------------------------------------------------------------------------------'
[0] = LAYOUT_planck_grid(
	 KC_ESC,        DE_K,    DE_U,    DE_UE, DE_DOT,DE_AE, DE_V,   DE_G,  DE_C,    DE_L,     DE_J,     KC_F         ,
	 KC_ENT,        DE_H,    DE_I,    DE_E,  DE_A,  DE_O,  DE_D,   DE_T,  DE_R,    DE_N,     DE_S,     DE_SS        ,
	 KC_LSFT,       DE_X,    DE_Y,    DE_OE, DE_COMM,DE_Q, DE_B,   DE_P,  DE_W,    DE_M,     DE_Z,     KC_LSFT      ,	
	 KC_LCTL ,      KC_RGUI, KC_LALT, MO(2), MO(1),KC_BSPC,KC_SPC, MO(1), MO(2),   KC_RALT,  KC_BTN2,  KC_RCTL      
), 


*/

	[0] = LAYOUT_planck_grid(
		 KC_ESC, 			KC_1,    	KC_2,    	KC_3,    	KC_4, 		KC_5,		KC_NLCK, 	KC_PMNS,   	KC_PPLS,  	KC_6,    	KC_7,     	KC_8,     	KC_9, 		KC_0,   KC_DEL,	
		 KC_TAB,        	DE_K,    	DE_U,   	DE_UE, 		DE_F,		DE_AE, 		KC_P7,   	KC_P8,  	KC_P9,   	DE_V,     	DE_G,    	DE_C, 		DE_L,  		DE_J, 	DE_SS,
		 KC_LSFT,    		DE_H,    	DE_I,    	DE_E,  		DE_A,  		DE_O,  		KC_P4,   	KC_P5,  	KC_P6,    	DE_D,     	DE_T,     	DE_R,		DE_N,   	DE_S,   RSFT_T(KC_ENT),
		 KC_LCTL,       	DE_X,    	DE_Y,    	DE_OE, 		DE_Z,		DE_Q, 		KC_P1,   	KC_P2,  	KC_P3,    	DE_B,     	DE_P,    	DE_W,		DE_M, 		KC_UP,	KC_RCTL,
		 KC_RGUI,      		KC_LALT, 	LCTL(KC_C),LCTL(KC_V), MO(1),		KC_BSPC,	DE_COMM, 	KC_P0,  	KC_DOT, 	KC_SPC,  	MO(1), 		KC_TRNS, 	KC_LEFT, 	KC_DOWN,KC_RGHT
	),
	[1] = LAYOUT_planck_grid(
		KC_TRNS, 			KC_F1, 		KC_F2, 		KC_F3, 		KC_F4, 		KC_F5, 		KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_F6, 		KC_F7, 		KC_F9, 		KC_F10, 	KC_F11,	 KC_F12, 
		KC_TRNS, 			ALGR(KC_E),	DE_UNDS, DE_LBRC, 	DE_RBRC, 	DE_CIRC, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS,	DE_EXLM,	DE_LESS, 	DE_MORE, 	DE_EQL, 	DE_AMPR, KC_TRNS, 
		RGB_MODE_FORWARD,	DE_BSLS,	DE_SLSH,	DE_LCBR, 	DE_RCBR, 	DE_ASTR, 	KC_TRNS,	KC_TRNS, 	KC_TRNS,	DE_QST, 	DE_LPRN, 	DE_RPRN, 	DE_MINS, 	DE_COLN, DE_AT, 
		RGB_VAI, 			RGB_TOG, 	KC_HASH, 	DE_DLR, 	DE_PIPE, 	DE_TILD, 	KC_TRNS,	KC_TRNS, 	KC_TRNS,	DE_GRV, 	DE_PLUS, 	DE_PERC, 	DE_DQOT, 	DE_QUOT, DE_SCLN,
		RGB_VAD, 			KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_SYSTEM_SLEEP, KC_TRNS, KC_TRNS, 	KC_TRNS,	KC_MPLY,	KC_MPRV,	KC_TRNS, KC_MNXT
	)
	
};
const uint16_t PROGMEM fn_actions[] = {

};
//...and then I used timers to set a forced delay in my rotary encoder handler: 
void encoder_update(bool clockwise) { uint16_t held_keycode_timer = timer_read(); 
	if (clockwise) { register_code(KC_VOLU); 
		while (timer_elapsed(held_keycode_timer) < MEDIA_KEY_DELAY) 
		{ // no-op 
		} 
	unregister_code(KC_VOLU); 
	} else { register_code(KC_VOLD); 
		while (timer_elapsed(held_keycode_timer) < MEDIA_KEY_DELAY) 
		{ // no-op 
		} 
	unregister_code(KC_VOLD)
; } 
}

/*
void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {kkkkuukukuavvv
        if (clockwise) {
            register_code(KC_SPC);
            unregister_code(KC_SPC);
        } else {
            register_code(KC_BSPC);
            unregister_code(KC_BSPC);
        }
    }
}
*/
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    // MACRODOWN only works in this function
    switch (id) {
    case 0:
        if (record->event.pressed) {
            register_code(KC_RSFT);
#ifdef BACKLIGHT_ENABLE
            backlight_step();
#endif
        }
        else {
            unregister_code(KC_RSFT);
        }
        break;
    }
    return MACRO_NONE;
};
