/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include QMK_KEYBOARD_H

//Left Home Rows
#define LG_SCLN LGUI_T(KC_SCLN)
#define LC_PLUS LCTL_T(KC_PLUS)
#define RG_UNDS RGUI_T(KC_UNDS)

#define LG_LT LGUI_T(KC_LT)
#define LA_LBRC LALT_T(KC_LBRC)
#define LC_LPRN LCTL_T(KC_LPRN)
#define LS_LCBR LSFT_T(KC_LCBR)

//Right Home Row
#define RS_RCBR RSFT_T(KC_RCBR)
#define RC_RPRN RCTL_T(KC_RPRN)
#define LA_RBRC LALT_T(KC_RBRC) //LALT is correct, no RALT in Home Row Mods
#define RG_GT RGUI_T(KC_GT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_split_3x6_3_ex2(
    KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, DT_PRNT,                                      DT_UP, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, 
    KC_ESC, LGUI_T(KC_A), LALT_T(KC_S), LCTL_T(KC_D), LSFT_T(KC_F), KC_G, KC_PSCR,      DT_DOWN, KC_H, RSFT_T(KC_J), RCTL_T(KC_K), LALT_T(KC_L), RGUI_T(KC_SCLN), KC_QUOT,
    KC_GRV, KC_Z, KC_X, KC_C, KC_V, KC_B,                                                      KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_DEL, 
    MO(5), LT(1,KC_SPC), MO(4),                                                         KC_ENT, MO(2), KC_RALT
  ),
  [1] = LAYOUT_split_3x6_3_ex2(
    KC_TRNS, KC_NO, KC_BSLS, KC_ASTR, KC_NO, KC_NO, KC_NO,                              KC_NO, KC_NO, KC_7, KC_8, KC_9, KC_NO, KC_TRNS, 
    KC_TRNS, LG_SCLN, LALT_T(KC_MINS), LC_PLUS, LSFT_T(KC_EQL), KC_NO, KC_NO,           KC_NO, KC_NO, RSFT_T(KC_4), RCTL_T(KC_5), LALT_T(KC_6), RG_UNDS, KC_TRNS, A
    KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                                KC_NO, KC_1, KC_2, KC_3, KC_TRNS, KC_TRNS,
    KC_NO, KC_TRNS, KC_NO,                                                              KC_COMM, LT(3,KC_0), KC_DOT
  ),
  [2] = LAYOUT_split_3x6_3_ex2(
    KC_TRNS, KC_NO, KC_BSLS, KC_NO, KC_NO, KC_NO, KC_NO,                                KC_NO, KC_NO, KC_APP, KC_NO, KC_NO, KC_NO, KC_TRNS,
    KC_TRNS, LG_LT, LA_LBRC, LC_LPRN, LS_LCBR, KC_NO, KC_NO,                            KC_NO, KC_NO, RS_RCBR, RC_RPRN, LA_RBRC, RG_GT, KC_PIPE, 
    KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                                KC_NO, KC_NO, KC_NO, KC_NO, KC_BSLS, KC_TRNS, 
    KC_TRNS, MO(3), KC_TRNS,                                                            KC_TRNS, KC_TRNS, KC_TRNS
  ),
  [3] = LAYOUT_split_3x6_3_ex2(
    KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                  KC_NO, KC_NO, KC_F7, KC_F8, KC_F9, KC_F12, KC_TRNS, 
    KC_TRNS, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO, KC_NO,                          KC_NO, KC_NO, KC_F4, KC_F5, KC_F6, KC_F11, KC_TRNS, 
    KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                                KC_NO, KC_F1, KC_F2, KC_F3, KC_F10, KC_TRNS, 
    KC_TRNS, KC_TRNS, KC_TRNS,                                                          KC_TRNS, KC_TRNS, KC_TRNS
  ),
  [4] = LAYOUT_split_3x6_3_ex2(
    KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                  KC_NO, KC_NO, KC_PGDN, KC_PGUP, KC_NO, KC_NO, KC_TRNS, 
    KC_TRNS, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO, KC_NO,                          KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_TRNS, 
    KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                                KC_NO, KC_HOME, KC_END, KC_NO, KC_NO, KC_TRNS, 
    KC_TRNS, KC_TRNS, KC_TRNS,                                                          KC_TRNS, KC_TRNS, KC_TRNS
  ),
  [5] = LAYOUT_split_3x6_3_ex2(
    KC_TRNS, KC_NO, KC_BSLS, KC_ASTR, KC_NO, KC_NO, KC_NO,                              KC_NO, KC_NO, KC_AMPR, KC_ASTR, KC_PIPE, KC_NO, KC_TRNS, 
    KC_TRNS, LG_SCLN, LALT_T(KC_MINS), LC_PLUS, LSFT_T(KC_EQL), KC_NO, KC_NO,           KC_NO, KC_NO, KC_DLR, KC_PERC, KC_CIRC, KC_UNDS, KC_TRNS, 
    KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                                KC_NO, KC_EXLM, KC_AT, KC_HASH, KC_NO, KC_TRNS, 
    KC_TRNS, KC_TRNS, KC_TRNS,                                                          KC_TRNS, KC_TRNS, KC_TRNS
  ),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case RSFT_T(KC_J):
    case LSFT_T(KC_F): 
    case RSFT_T(KC_4):
    case LSFT_T(KC_EQL):
    case LS_LCBR:
    case RS_RCBR:
      return TAPPING_TERM - 70;
    case LCTL_T(KC_D):
    case RCTL_T(KC_K):
    case RCTL_T(KC_5):
    case LG_SCLN:
    case LC_PLUS:
    case LC_LPRN:
    case RC_RPRN:
      return TAPPING_TERM - 40;
        default:
          return TAPPING_TERM;
  }
}

bool run_on_tap(uint16_t keycode, keyrecord_t *record) {
  if (record->tap.count && record->event.pressed) {
    tap_code16(keycode);
    return false;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    //Left Home Row
    case LG_SCLN:
      return run_on_tap(KC_COLN, record)
    case LC_PLUS:
      return run_on_tap(KC_PLUS, record);
    case RG_UNDS:
      return run_on_tap(KC_UNDS, record);

    case LG_LT:
      return run_on_tap(KC_LT, record);
    case LA_LBRC:
      return run_on_tap(KC_LBRC, record);
    case LC_LPRN:
      return run_on_tap(KC_LPRN, record);
    case LS_LCBR:
      return run_on_tap(KC_LCBR, record);
    //Right Home Row
    case RS_RCBR:
      return run_on_tap(KC_RCBR, record);
    case RC_RPRN:
      return run_on_tap(KC_RPRN, record);
    case LA_RBRC:
      return run_on_tap(KC_RBRC, record);
    case RG_GT:
      return run_on_tap(KC_GT, record);
  }
  return true;
}

