// generated from users/manna-harbour_miryoku/miryoku.org  -*- buffer-read-only: t -*-

#include QMK_KEYBOARD_H

#define KC_NP KC_NO // key is not present
#define KC_NA KC_NO // present but not available for use
#define KC_NU KC_NO // available but not used

typedef union {
    uint32_t raw;
    struct {
        bool osIsWindows;
    };
} user_config_t;

user_config_t user_config;

enum layers { COLEMAK, NAVR, MOUR, SYMB, NUM, FUNL, GAME, NG };

enum custom_keycodes {
    Windows = SAFE_RANGE,
    Mac,
    Undo,
    Cut,
    Copy,
    Paste,
    NxtWord,
    PrvWord
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [COLEMAK] = LAYOUT_miryoku(
    KC_Q,              KC_W,              KC_F,              KC_P,              KC_G,              KC_J,              KC_L,              KC_U,              KC_Y,              KC_QUOT,
    LGUI_T(KC_A),      LALT_T(KC_R),      LCTL_T(KC_S),      LSFT_T(KC_T),      KC_D,              KC_H,              LSFT_T(KC_N),      LCTL_T(KC_E),      LALT_T(KC_I),      LGUI_T(KC_O),
    KC_Z,              ALGR_T(KC_X),      KC_C,              KC_V,              KC_B,              KC_K,              KC_M,              KC_COMM,           ALGR_T(KC_DOT),    KC_SLSH,
    KC_NP,             KC_NP,             LT(NUM, KC_ENT),   LT(NAVR, KC_BSPC), LT(MOUR, KC_DEL),   LT(FUNL, KC_ESC),  LT(SYMB, KC_SPC),  LT(NUM, KC_TAB),   KC_NP,             KC_NP
  ),
  [NAVR] = LAYOUT_miryoku(
    KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_NU,   PrvWord, KC_UP,   NxtWord, KC_NU,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NA,   KC_CAPS, KC_LEFT, KC_DOWN, KC_RGHT, KC_NU,
    Undo,    Cut,     Copy,    Paste,   KC_NA,   KC_INS,  KC_HOME, KC_NU,   KC_END,  KC_NU,
    KC_NP,   KC_NP,   KC_NA,   KC_NA,   KC_NA,   KC_ENT,  KC_BSPC, KC_DEL,  KC_NP,   KC_NP
  ),
  [MOUR] = LAYOUT_miryoku(
    KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_NU,   KC_WH_D, KC_MS_U, KC_WH_U, KC_NU,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NA,   KC_NU,   KC_MS_L, KC_MS_D, KC_MS_R, KC_NU,
    KC_NA,   KC_ALGR, KC_NA,   KC_NA,   KC_NA,   KC_NU,   KC_WH_L, KC_NU,   KC_WH_R, KC_NU,
    KC_NP,   KC_NP,   KC_NA,   KC_NA,   KC_NA,   KC_BTN3, KC_BTN1, KC_BTN2, KC_NP,   KC_NP
  ),
  [FUNL] = LAYOUT_miryoku(
    KC_F12,  KC_F7,   KC_F8,   KC_F9,   KC_PSCR, KC_LEFT, KC_RGHT, KC_NA,   Windows, Mac,
    KC_F11,  KC_F4,   KC_F5,   KC_F6,   KC_SLCK, KC_NA,   KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    KC_F10,  KC_F1,   KC_F2,   KC_F3,   KC_PAUS, KC_MUTE, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT,
    KC_NP,   KC_NP,   KC_APP,  KC_SPC,  KC_TAB,  KC_NA,   KC_MPLY, KC_NA,   KC_NP,   KC_NP
  ),
  [NUM] = LAYOUT_miryoku(
    // KC_LBRC, KC_7,    KC_8,    KC_9,    KC_RBRC, KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_NA,
    // KC_SCLN, KC_4,    KC_5,    KC_6,    KC_EQL,  KC_NA,   KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    // KC_GRV,  KC_1,    KC_2,    KC_3,    KC_BSLS, KC_NA,   KC_NA,   KC_NA,   KC_ALGR,   KC_NA,
    // KC_NP,   KC_NP,   KC_DOT,  KC_0,    KC_MINS, KC_NA,   KC_NA,   KC_NA,   KC_NP,   KC_NP
    KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_PLUS, KC_7,    KC_8,    KC_9,    KC_NA,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NA,   KC_MINS, KC_4,    KC_5,    KC_6,    KC_EQL,
    KC_NA,   KC_ALGR, KC_NA,   KC_NA,   KC_NA,   KC_ASTR, KC_1,    KC_2,    KC_3,    KC_SLSH,
    KC_NP,   KC_NP,   KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_0,    KC_DOT,  KC_NP,   KC_NP
  ),
  [SYMB] = LAYOUT_miryoku(
    // KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR, KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_NA,
    // KC_COLN, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS, KC_NA,   KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    // KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE, KC_NA,   KC_NA,   KC_NA,   KC_ALGR, KC_NA,
    // KC_NP,   KC_NP,   KC_LPRN, KC_RPRN, KC_UNDS, KC_NA,   KC_NA,   KC_NA,   KC_NP,   KC_NP
    KC_GRV,  KC_AMPR, KC_ASTR, KC_LPRN, KC_NA,   KC_NA,   KC_LCBR, KC_RCBR, KC_SCLN, KC_NA,
    KC_TILD, KC_DLR,  KC_PERC, KC_CIRC, KC_EQL,  KC_MINS, KC_LPRN, KC_RPRN, KC_COLN, KC_PIPE,
    KC_NA,   KC_EXLM, KC_AT,   KC_HASH, KC_PLUS, KC_UNDS, KC_LBRC, KC_RBRC, KC_NA,   KC_BSLS,
    KC_NP,   KC_NP,   KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_NP,   KC_NP
  ),
  [NG] = LAYOUT_miryoku(
    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_NA,
    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_NA,
    KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_NA,
    KC_NP,   KC_NP,   KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_NP,   KC_NP
  ),
  [GAME] = LAYOUT_split_3x6_5(
    // KC_LALT, KC_Q,  KC_W,  KC_E,   KC_R,   KC_T,   KC_NA,   KC_NA,    KC_NA, KC_NA, KC_NA, KC_NA,
    // KC_LCTL, KC_A,  KC_S,  KC_D,   KC_F,   KC_G,   KC_NA,   KC_NA,    KC_NA, KC_NA, KC_NA, KC_NA,
    // KC_LSFT, KC_Z,  KC_X,  KC_C,   KC_V,   KC_B,   KC_NA,   KC_NA,    KC_NA, KC_NA, KC_NA, KC_NA,
    //          KC_NP, KC_NP, LT(NG, KC_ESC), KC_SPC, KC_TAB,  KC_NA,    KC_NA, KC_NA, KC_NP, TG(GAME)
   KC_NA, KC_LCTL, KC_Q,  KC_W,  KC_E,   KC_R,   KC_NA,   KC_NA,    KC_NA, KC_NA, KC_NA, KC_NA,
   KC_NA, KC_LSFT, KC_A,  KC_S,  KC_D,   KC_F,   KC_NA,   KC_NA,    KC_NA, KC_NA, KC_NA, KC_NA,
   KC_NA, KC_LALT, KC_Z,  KC_X,  KC_C,   KC_T,   KC_NA,   KC_NA,    KC_NA, KC_NA, KC_NA, KC_NA,
            KC_NP, KC_NP, LT(NG, KC_ESC), KC_SPC, KC_TAB,  KC_NA,    KC_NA, KC_NA, KC_NP, TG(GAME)
  )
};

void keyboard_post_init_user(void) {
    // Call the post init code.

    // Read the user config from EEPROM
    user_config.raw = eeconfig_read_user();
}

bool get_tapping_force_hold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LSFT_T(KC_T):
        case LSFT_T(KC_N):
            return true;
        default:
            return false;
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch(keycode) {
        case Windows:
            if (record->event.pressed) {
                user_config.osIsWindows = true;
                eeconfig_update_user(user_config.raw);
            }
            break;
      case Mac:
            if (record->event.pressed) {
                user_config.osIsWindows = false;
                eeconfig_update_user(user_config.raw);
            }
            break;
        case Undo:
            if (record->event.pressed) {
                if (user_config.osIsWindows == 1) {
                    tap_code16(C(KC_Z));
                } else if (user_config.osIsWindows == 0) {
                    tap_code16(G(KC_Z));
                }
            }
            break;
        case Cut:
            if (record->event.pressed) {
                if (user_config.osIsWindows == 1) {
                    tap_code16(C(KC_X));
                } else if (user_config.osIsWindows == 0) {
                    tap_code16(G(KC_X));
                }
            }
            break;
        case Copy:
            if (record->event.pressed) {
                if (user_config.osIsWindows == 1) {
                    tap_code16(C(KC_C));
                } else if (user_config.osIsWindows == 0) {
                    tap_code16(G(KC_C));
                }
            }
            break;
        case Paste:
            if (record->event.pressed) {
                if (user_config.osIsWindows == 1) {
                    tap_code16(C(KC_V));
                } else if (user_config.osIsWindows == 0) {
                    tap_code16(G(KC_V));
                }
            }
            break;
        case PrvWord:
            if (record->event.pressed) {
                if (user_config.osIsWindows == 1) {
                    tap_code16(C(KC_LEFT));
                } else if (user_config.osIsWindows == 0) {
                    tap_code16(A(KC_LEFT));
                }
            }
            break;
        case NxtWord:
            if (record->event.pressed) {
                if (user_config.osIsWindows == 1) {
                    tap_code16(C(KC_RGHT));
                } else if (user_config.osIsWindows == 0) {
                    tap_code16(A(KC_RGHT));
                }
            }
            break;
    }
    return true;
};
