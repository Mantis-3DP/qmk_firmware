#include QMK_KEYBOARD_H
#include "keymap_german.h"
#include "not_so_minidoxr.h"

extern keymap_config_t keymap_config;

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.


#define _______ KC_TRNS
#define XXXXXXX KC_NO

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
[0] = LAYOUT_planck_grid(aeahiao.uük.kuü.12345
	 KC_ESC,        DE_K,    DE_U,    DE_UE, DE_DOT,DE_AE, DE_V,   DE_G,  DE_C,    DE_L,     DE_J,     KC_F         ,
	 KC_ENT,        DE_H,    DE_I,    DE_E,  DE_A,  DE_O,  DE_D,   DE_T,  DE_R,    DE_N,     DE_S,     DE_SS        ,
	 KC_LSFT,       DE_X,    DE_Y,    DE_OE, DE_COMM,DE_Q, DE_B,   DE_P,  DE_W,    DE_M,     DE_Z,     KC_LSFT      ,
	 KC_LCTL ,      KC_RGUI, KC_LALT, MO(2), MO(1),KC_BSPC,KC_SPC, MO(1), MO(2),   KC_RALT,  KC_BTN2,  KC_RCTL
),




*/

    [0] = LAYOUT(
         KC_TAB,        DE_K,    DE_U,    	DE_UE, 		DE_F,		DE_AE, 		DE_V,   DE_G,  		DE_C,    DE_L,      DE_J,     KC_DEL         ,
         KC_LSFT,       DE_H,    DE_I,    	DE_E,  		DE_A,  		DE_O,  		DE_D,   DE_T,  		DE_R,    DE_N,     	DE_S,     RSFT_T(KC_ENT)   ,
         KC_LCTL,       DE_Y,    DE_X,    	DE_OE, 		DE_Z,		DE_Q, 		DE_B,   DE_P,  		DE_W,    DE_M,      DE_Z,     KC_RCTL,
                                            MO(2), 		DE_COMM, 	KC_BSPC,	KC_SPC, DE_DOT, 	MO(2)
    ),

/* M1
 ,-----------------------------------------------------------------------------------.
 |  Esc |      |   _  |   [  |   ]  |   ^  |   !  |   <  |   >  |   =  |   &  |  ß   |
 |------+------+------+------+------+-------------+------+------+------+------+------|
 |  Tab |   \  |   /  |   {  |   }  |   *  |   ?  |   (  |   )  |   -  |   :  |  @   |
 |------+------+------+------+------+------|------+------+------+------+------+------|
 | Shift|   #  |   $  |   |  |   ~  |   `  |   +  |   %  |   "  |   '  |   ;  |Shift |
 |------+------+------+------+------+------+------+------+------+------+------+------|
 | Ctrl | GUI  | Alt  |  M2  |  M1  |    Space    |  M1  |  M2  | Alt  | Esc  | Ctrl |
 `-----------------------------------------------------------------------------------'
*/
	[2] = LAYOUT(
		KC_ESC, 			ALGR(KC_E),	DE_UNDS, 	DE_LBRC, 	DE_RBRC, 	DE_CIRC,	DE_EXLM,	DE_LESS, 	DE_MORE, 	DE_EQL, 	DE_AMPR, DE_SS,
		RGB_MODE_FORWARD,	DE_BSLS,	DE_SLSH,	DE_LCBR, 	DE_RCBR, 	DE_ASTR, 	DE_QST, 	DE_LPRN, 	DE_RPRN, 	DE_MINS, 	DE_COLN, DE_AT,
		RGB_VAI, 			RGB_TOG, 	DE_HASH, 	DE_DLR, 	DE_PIPE, 	DE_TILD, 	DE_GRV, 	DE_PLUS, 	DE_PERC, 	DE_DQOT, 	DE_QUOT, DE_SCLN,
													KC_TRNS, 	LCTL(KC_C),	LCTL(KC_V), KC_TRNS, 	KC_TRNS,	KC_TRNS
	),
};




