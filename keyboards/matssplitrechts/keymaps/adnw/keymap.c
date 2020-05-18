#include QMK_KEYBOARD_H
#include "keymap_german.h"

extern keymap_config_t keymap_config;

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0
#define _COLEMAK 1
#define _DVORAK 2
#define _LOWER 3
#define _RAISE 4
#define _ADJUST 16

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  COLEMAK,
  DVORAK,
  LOWER,
  RAISE,
  ADJUST,
};

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
	 KC_TAB,        DE_K,    DE_U,    DE_UE, DE_DOT,DE_AE, DE_V,   DE_G,  DE_C,    DE_L,      DE_J,     KC_F         ,
	 KC_LSFT,       DE_H,    DE_I,    DE_E,  DE_A,  DE_O,  DE_D,   DE_T,  DE_R,    DE_N,     DE_S,     RSFT_T(KC_ENT)   ,
	 KC_LCTL,       DE_X,    DE_Y,    DE_OE, DE_COMM,DE_Q, DE_B,   DE_P,  DE_W,    DE_M,       DE_Z,     KC_DEL,
	 KC_BSPC, LCTL(DE_C), LCTL(DE_V), KC_UP, KC_DOWN, KC_SPC    
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

};



#ifdef AUDIO_ENABLE
float tone_qwerty[][2]     = SONG(QWERTY_SOUND);
float tone_dvorak[][2]     = SONG(DVORAK_SOUND);
float tone_colemak[][2]    = SONG(COLEMAK_SOUND);
#endif

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        #ifdef AUDIO_ENABLE
          PLAY_SONG(tone_qwerty);
        #endif
        persistent_default_layer_set(1UL<<_QWERTY);
      }
      return false;
      break;
    case COLEMAK:
      if (record->event.pressed) {
        #ifdef AUDIO_ENABLE
          PLAY_SONG(tone_colemak);
        #endif
        persistent_default_layer_set(1UL<<_COLEMAK);
      }
      return false;
      break;
    case DVORAK:
      if (record->event.pressed) {
        #ifdef AUDIO_ENABLE
          PLAY_SONG(tone_dvorak);
        #endif
        persistent_default_layer_set(1UL<<_DVORAK);
      }
      return false;
      break;
    case LOWER:
      if (record->event.pressed) {
        layer_on(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case RAISE:
      if (record->event.pressed) {
        layer_on(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case ADJUST:
      if (record->event.pressed) {
        layer_on(_ADJUST);
      } else {
        layer_off(_ADJUST);
      }
      return false;
      break;
  }
  return true;
}
