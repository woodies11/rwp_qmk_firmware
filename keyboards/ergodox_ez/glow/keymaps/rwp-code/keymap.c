#include QMK_KEYBOARD_H
#include "version.h"

enum custom_keycodes {
    RGB_SLD = SAFE_RANGE,
    HSV_86_255_128,
    HSV_27_255_255,
};

enum tap_dance_codes {
    DANCE_0,
    DANCE_1,
    DANCE_2,
    DANCE_3,
};

// =====================================================================================================================
// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_GRAVE,                                       KC_EQUAL,       KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_BSPC,
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_LBRC,                                        KC_RBRC,        KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,
    LT(2,KC_BSPC),  KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_QUOTE,       KC_ENTER,
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           TD(DANCE_0),                                    KC_ENTER,       KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RIGHT_SHIFT,
    KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT,        LT(4,KC_RIGHT),       KC_LEFT_GUI,                                                                                                    KC_RIGHT_GUI,   KC_UP,          KC_DOWN,        KC_SCLN,        KC_LEFT_CTRL,
                                                                                                    KC_F2,          LGUI(KC_TAB),   KC_LEFT,        KC_RIGHT,
                                                                                                                    KC_EQUAL,       LALT(KC_UP),
                                                                                    TD(DANCE_1),    TT(1),          TD(DANCE_2),    LALT(KC_DOWN),  TD(DANCE_3),    LT(3,KC_SPACE)
  ),
  [1] = LAYOUT_ergodox_pretty(
    TO(0),          KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,                                          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,         KC_TRANSPARENT,
    KC_TRANSPARENT, KC_AT,          KC_TILD,        KC_LPRN,        KC_RPRN,        KC_PIPE,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_CIRC,        KC_BSLS,        KC_MINUS,       KC_PLUS,        KC_ASTR,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_HASH,        KC_DLR,         KC_LCBR,        KC_RCBR,        KC_EQUAL,                                                                       KC_GRAVE,       KC_COMMA,       KC_DOT,         KC_QUOTE,       KC_DQUO,        KC_SCLN,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LBRC,        KC_RBRC,        KC_EXLM,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_AMPR,        KC_PIPE,        KC_QUES,        KC_EXLM,        KC_PERC,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_EQUAL,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    RGB_MODE_FORWARD,RGB_VAI,        RGB_TOG,        RGB_SLD,
                                                                                                                    HSV_86_255_128, TOGGLE_LAYER_COLOR,
                                                                                    RGB_VAD,        KC_TRANSPARENT, HSV_27_255_255, RGB_HUD,        KC_TRANSPARENT, KC_RIGHT_ALT
  ),
  [2] = LAYOUT_ergodox_pretty(
    TO(0),          KC_TRANSPARENT, KC_AUDIO_VOL_DOWN,KC_AUDIO_MUTE,  KC_AUDIO_VOL_UP,KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_PGDN,        KC_PAGE_UP,     KC_MS_WH_DOWN,  KC_MS_WH_UP,    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, LALT(KC_UP),    LSFT(KC_TAB),   KC_MS_UP,       KC_TAB,         KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_MS_WH_LEFT,  KC_MS_WH_RIGHT, KC_MS_BTN2,     KC_MS_BTN1,     KC_MS_BTN3,                                                                     LALT(KC_DOWN),  KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_F17,         KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, LCTL(KC_LEFT),  LCTL(KC_UP),    LCTL(KC_RIGHT), KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, LALT(KC_LEFT),  KC_UP,          LALT(KC_RIGHT), KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_SLASH,       KC_TRANSPARENT,                                 KC_TRANSPARENT, LCTL(KC_UP),    LALT(KC_DOWN),  KC_UP,          LALT(KC_UP),    LCTL(KC_DOWN),  KC_TRANSPARENT,
    KC_TRANSPARENT, KC_PLUS,        KC_4,           KC_5,           KC_6,           KC_DOT,                                                                         LCTL(KC_LEFT),  KC_LEFT,        KC_DOWN,        KC_RIGHT,       LCTL(KC_RIGHT), KC_TRANSPARENT,
    KC_TRANSPARENT, KC_MINUS,       KC_7,           KC_8,           KC_9,           KC_ASTR,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_COMMA,       KC_0,           KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, LALT(KC_DOWN),  KC_UP,          RALT(KC_UP),    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, LCTL(KC_LEFT),  LCTL(KC_UP),    LCTL(KC_RIGHT), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};
// clang-format on
// =====================================================================================================================

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
    rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][4] = {
    [1] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {152, 255, 255}, {0, 245, 245}, {41, 255, 255}, {41, 255, 255}, {0, 245, 245}, {0, 245, 245}, {131, 255, 255}, {131, 255, 255}, {131, 255, 255}, {131, 255, 255}, {131, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {74, 255, 255}, {74, 255, 255}, {0, 0, 0}, {0, 0, 0}, {131, 255, 255}, {234, 255, 255}, {234, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {188, 255, 255}, {188, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},

    [2] = {{0, 0, 0}, {74, 255, 255}, {131, 255, 255}, {74, 255, 255}, {0, 0, 0}, {41, 255, 255}, {152, 255, 255}, {234, 255, 255}, {152, 255, 255}, {0, 0, 0}, {41, 255, 255}, {234, 255, 255}, {234, 255, 255}, {234, 255, 255}, {236, 255, 255}, {0, 0, 0}, {41, 255, 255}, {219, 255, 255}, {41, 255, 255}, {0, 0, 0}, {219, 255, 255}, {219, 255, 255}, {219, 255, 255}, {0, 0, 0}, {0, 0, 0}, {41, 255, 255}, {0, 245, 245}, {41, 255, 255}, {0, 0, 0}, {0, 0, 0}, {188, 255, 255}, {188, 255, 255}, {0, 0, 0}, {0, 0, 0}, {192, 247, 255}, {219, 255, 255}, {219, 255, 255}, {188, 255, 255}, {188, 255, 255}, {0, 0, 0}, {74, 255, 255}, {74, 255, 255}, {74, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},

    [3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {192, 247, 255}, {41, 255, 255}, {219, 255, 255}, {41, 255, 255}, {192, 247, 255}, {188, 255, 255}, {219, 255, 255}, {219, 255, 255}, {219, 255, 255}, {188, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {131, 255, 255}, {74, 255, 255}, {74, 255, 255}, {74, 255, 255}, {0, 0, 0}, {188, 255, 255}, {74, 255, 255}, {0, 0, 0}, {74, 255, 255}, {131, 255, 255}, {131, 255, 255}, {74, 255, 255}, {74, 255, 255}, {74, 255, 255}, {131, 255, 255}, {0, 0, 0}, {74, 255, 255}, {192, 247, 255}, {0, 0, 0}},

    [4] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {41, 255, 255}, {219, 255, 255}, {41, 255, 255}, {0, 0, 0}, {0, 0, 0}, {219, 255, 255}, {219, 255, 255}, {219, 255, 255}, {0, 0, 0}, {0, 0, 0}, {74, 255, 255}, {74, 255, 255}, {74, 255, 255}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
};

void set_layer_color(int layer) {
    for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
        HSV hsv = {
            .h = pgm_read_byte(&ledmap[layer][i][0]),
            .s = pgm_read_byte(&ledmap[layer][i][1]),
            .v = pgm_read_byte(&ledmap[layer][i][2]),
        };
        if (!hsv.h && !hsv.s && !hsv.v) {
            rgb_matrix_set_color(i, 0, 0, 0);
        } else {
            RGB   rgb = hsv_to_rgb(hsv);
            float f   = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
            rgb_matrix_set_color(i, f * rgb.r, f * rgb.g, f * rgb.b);
        }
    }
}

bool rgb_matrix_indicators_user(void) {
    if (keyboard_config.disable_layer_led) {
        return false;
    }

    uint8_t layer = biton32(layer_state);
    if (layer <= 0) {
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) rgb_matrix_set_color_all(0, 0, 0);
        return true;
    }

    set_layer_color(layer);
    return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case RGB_SLD:
            if (record->event.pressed) {
                rgblight_mode(1);
            }
            return false;
        case HSV_86_255_128:
            if (record->event.pressed) {
                rgblight_mode(1);
                rgblight_sethsv(86, 255, 128);
            }
            return false;
        case HSV_27_255_255:
            if (record->event.pressed) {
                rgblight_mode(1);
                rgblight_sethsv(27, 255, 255);
            }
            return false;
    }
    return true;
}

uint8_t layer_state_set_user(uint8_t state) {
    uint8_t layer = biton(state);
    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
        case 1:
            ergodox_right_led_1_on();
            break;
        case 2:
            ergodox_right_led_2_on();
            break;
        case 3:
            ergodox_right_led_3_on();
            break;
        case 4:
            ergodox_right_led_1_on();
            ergodox_right_led_2_on();
            break;
        case 5:
            ergodox_right_led_1_on();
            ergodox_right_led_3_on();
            break;
        case 6:
            ergodox_right_led_2_on();
            ergodox_right_led_3_on();
            break;
        case 7:
            ergodox_right_led_1_on();
            ergodox_right_led_2_on();
            ergodox_right_led_3_on();
            break;
        default:
            break;
    }
    return state;
};

typedef struct {
    bool    is_press_action;
    uint8_t step;
} tap;

enum { SINGLE_TAP = 1, SINGLE_HOLD, DOUBLE_TAP, DOUBLE_HOLD, DOUBLE_SINGLE_TAP, MORE_TAPS };

static tap dance_state[4];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed)
            return SINGLE_TAP;
        else
            return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted)
            return DOUBLE_SINGLE_TAP;
        else if (state->pressed)
            return DOUBLE_HOLD;
        else
            return DOUBLE_TAP;
    }
    return MORE_TAPS;
}

void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(LGUI(KC_P));
        tap_code16(LGUI(KC_P));
        tap_code16(LGUI(KC_P));
    }
    if (state->count > 3) {
        tap_code16(LGUI(KC_P));
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP:
            register_code16(LGUI(KC_P));
            break;
        case SINGLE_HOLD:
            register_code16(KC_F16);
            break;
        case DOUBLE_TAP:
            register_code16(LGUI(KC_P));
            register_code16(LGUI(KC_P));
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(LGUI(KC_P));
            register_code16(LGUI(KC_P));
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP:
            unregister_code16(LGUI(KC_P));
            break;
        case SINGLE_HOLD:
            unregister_code16(KC_F16);
            break;
        case DOUBLE_TAP:
            unregister_code16(LGUI(KC_P));
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(LGUI(KC_P));
            break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_SPACE);
        tap_code16(KC_SPACE);
        tap_code16(KC_SPACE);
    }
    if (state->count > 3) {
        tap_code16(KC_SPACE);
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP:
            register_code16(KC_SPACE);
            break;
        case SINGLE_HOLD:
            register_code16(KC_F16);
            layer_on(2);
            break;
        case DOUBLE_TAP:
            register_code16(KC_SPACE);
            register_code16(KC_SPACE);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_SPACE);
            register_code16(KC_SPACE);
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP:
            unregister_code16(KC_SPACE);
            break;
        case SINGLE_HOLD:
            unregister_code16(KC_F16);
            layer_off(2);
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_SPACE);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_SPACE);
            break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_MINUS);
        tap_code16(KC_MINUS);
        tap_code16(KC_MINUS);
    }
    if (state->count > 3) {
        tap_code16(KC_MINUS);
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP:
            register_code16(KC_MINUS);
            break;
        case SINGLE_HOLD:
            register_code16(KC_F18);
            break;
        case DOUBLE_TAP:
            register_code16(KC_MINUS);
            register_code16(KC_MINUS);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_MINUS);
            register_code16(KC_MINUS);
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP:
            unregister_code16(KC_MINUS);
            break;
        case SINGLE_HOLD:
            unregister_code16(KC_F18);
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_MINUS);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_MINUS);
            break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
    if (state->count == 3) {
        tap_code16(KC_F16);
        tap_code16(KC_F16);
        tap_code16(KC_F16);
    }
    if (state->count > 3) {
        tap_code16(KC_F16);
    }
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP:
            layer_invert(2);
            break;
        case SINGLE_HOLD:
            register_code16(KC_F16);
            layer_on(2);
            break;
        case DOUBLE_TAP:
            register_code16(KC_F17);
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_F17);
            register_code16(KC_F17);
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP:
            break;
        case SINGLE_HOLD:
            unregister_code16(KC_F16);
            layer_off(2);
            break;
        case DOUBLE_TAP:
            unregister_code16(KC_F17);
            break;
        case DOUBLE_SINGLE_TAP:
            unregister_code16(KC_F17);
            break;
    }
    dance_state[3].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
    [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
    [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
    [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
    [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
};
