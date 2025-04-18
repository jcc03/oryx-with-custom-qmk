#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           TD(DANCE_1),    
    KC_GRAVE,       KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_MINUS,       
    KC_EQUAL,       KC_A,           MT(MOD_LALT, KC_S),MT(MOD_LCTL, KC_D),MT(MOD_LSFT, KC_F),KC_G,                                           KC_H,           MT(MOD_RSFT, KC_J),MT(MOD_LCTL, KC_K),MT(MOD_LALT, KC_L),KC_SCLN,        KC_QUOTE,       
    TD(DANCE_0),    MT(MOD_LGUI, KC_Z),KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         MT(MOD_RGUI, KC_SLASH),KC_BSLS,        
                                                    KC_BSPC,        KC_TAB,                                         KC_ENTER,       LT(1,KC_SPACE)
  ),
  [1] = LAYOUT_voyager(
    KC_NO,          KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_NO,          
    KC_LCBR,        KC_LBRC,        KC_ESCAPE,      KC_PAGE_UP,     KC_PSCR,        KC_NO,                                          KC_AUDIO_VOL_UP,KC_AUDIO_MUTE,  KC_UP,          KC_F11,         KC_F12,         KC_NO,          
    KC_RCBR,        KC_RBRC,        KC_HOME,        KC_PGDN,        KC_END,         KC_NO,                                          KC_AUDIO_VOL_DOWN,KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_NO,          KC_NO,          
                                                    KC_NO,          KC_NO,                                          KC_NO,          KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           TD(DANCE_3),    
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_MINUS,       
    KC_LEFT_SHIFT,  KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_BSLS,        
    TD(DANCE_2),    KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_TRANSPARENT, 
                                                    KC_BSPC,        KC_LEFT_CTRL,                                   KC_ENTER,       KC_SPACE
  ),
};

const uint16_t PROGMEM combo0[] = { KC_F, KC_J, COMBO_END};
const uint16_t PROGMEM combo1[] = { MT(MOD_LSFT, KC_F), MT(MOD_RSFT, KC_J), COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_C, KC_X, COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_C, KC_V, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, LALT(KC_TAB)),
    COMBO(combo1, KC_CAPS),
    COMBO(combo2, LCTL(KC_C)),
    COMBO(combo3, LCTL(KC_V)),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {129,39,255}, {129,39,255}, {129,39,255}, {129,39,255}, {129,39,255}, {129,39,255}, {129,39,255}, {129,39,255}, {129,39,255}, {129,39,255}, {129,39,255}, {129,39,255}, {129,39,255}, {129,39,255}, {129,39,255}, {129,39,255}, {129,39,255}, {129,39,255}, {129,39,255}, {129,39,255}, {129,39,255}, {129,39,255}, {129,39,255}, {129,39,255}, {129,39,255}, {129,39,255}, {129,39,255}, {129,39,255}, {129,39,255}, {129,39,255}, {129,39,255}, {129,39,255}, {129,39,255}, {129,39,255}, {129,39,255}, {129,39,255}, {129,39,255}, {129,39,255}, {129,39,255}, {129,39,255}, {129,39,255}, {129,39,255}, {129,39,255}, {129,39,255}, {129,39,255}, {129,39,255}, {129,39,255}, {129,39,255}, {129,39,255}, {129,39,255}, {129,39,255}, {129,39,255} },

    [1] = { {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {86,255,152}, {86,255,152}, {215,255,128}, {129,255,255}, {215,255,128}, {0,0,0}, {86,255,152}, {86,255,152}, {129,255,255}, {129,255,255}, {129,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {236,150,255}, {236,150,255}, {172,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {236,150,255}, {172,255,255}, {172,255,255}, {172,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {236,150,255}, {236,150,255}, {0,0,0}, {0,0,0}, {0,0,0}, {129,39,255} },

    [2] = { {236,150,255}, {236,150,255}, {236,150,255}, {236,150,255}, {236,150,255}, {236,150,255}, {236,150,255}, {236,150,255}, {236,150,255}, {236,150,255}, {236,150,255}, {236,150,255}, {236,150,255}, {236,150,255}, {236,150,255}, {236,150,255}, {236,150,255}, {236,150,255}, {236,150,255}, {236,150,255}, {236,150,255}, {236,150,255}, {236,150,255}, {236,150,255}, {236,150,255}, {236,150,255}, {236,150,255}, {236,150,255}, {236,150,255}, {236,150,255}, {236,150,255}, {236,150,255}, {236,150,255}, {236,150,255}, {236,150,255}, {236,150,255}, {236,150,255}, {236,150,255}, {236,150,255}, {236,150,255}, {236,150,255}, {236,150,255}, {236,150,255}, {236,150,255}, {236,150,255}, {236,150,255}, {236,150,255}, {236,150,255}, {236,150,255}, {236,150,255}, {236,150,255}, {236,150,255} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
      case MT(MOD_LSFT, KC_F):
      case MT(MOD_RSFT, KC_J):
          return TAPPING_TERM - 100;
      default:
          return TAPPING_TERM;
    }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  // Suppress all key presses while LGUI is held, unless it's an arrow key
  if (record->event.pressed) {
    uint8_t mods = get_mods() | get_weak_mods() | get_oneshot_mods();
    if (mods & MOD_BIT(KC_LGUI)) {
      switch (keycode) {
        case KC_LEFT:
        case KC_DOWN:
        case KC_RIGHT:
        case KC_UP:
        case LT(1,KC_SPACE):
        case KC_L:
          break; // allow arrow keys and L
        default:
          return false; // suppress everything else when LGUI is held
      }
    }
  }
  // Handle other custom keycode logic
    switch (keycode) {

      case RGB_SLD:
        if (record->event.pressed) {
        rgblight_mode(1);
      }
        return false;
  }
  return true;
}


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[4];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case DOUBLE_HOLD: layer_move(2); break;
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
    }
    dance_state[0].step = 0;
}
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case DOUBLE_HOLD: layer_move(2); break;
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
    }
    dance_state[1].step = 0;
}
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case DOUBLE_HOLD: layer_move(0); break;
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
    }
    dance_state[2].step = 0;
}
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case DOUBLE_HOLD: layer_move(0); break;
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
    }
    dance_state[3].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_3_finished, dance_3_reset),
};





//CHORDAL SPECIAL HANDLING//
  bool get_chordal_hold(uint16_t tap_hold_keycode, keyrecord_t* tap_hold_record,
    uint16_t other_keycode, keyrecord_t* other_record) {
// Always treat LT(1, KC_SPACE) as a chord (hold), regardless of context
  if (tap_hold_keycode == LT(1, KC_SPACE)) {
    return true;
}

// Use default chordal hold logic for everything else
return get_chordal_hold_default(tap_hold_record, other_record);
}

//BACKSPACE OVERRIDE 
  const key_override_t delete_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_BSPC, KC_DEL);
// This globally defines all key overrides to be used
  const key_override_t **key_overrides = (const key_override_t *[]){
	&delete_key_override,
	  NULL // Null terminate the array of overrides! 
};