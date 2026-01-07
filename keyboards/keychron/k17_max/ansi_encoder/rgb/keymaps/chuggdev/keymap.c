/* Copyright 2024 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/* chuggboarder customizations to Keychron K17 Max
 * programmer dvorak with re-arranged modifier row inspired by Space Cadet Keyboard
 
 */

#include QMK_KEYBOARD_H
#include "keychron_common.h"
#include "keymap_dvorak_programmer.h" // For Programmer Dvorak keycodes



    /* #define MOUSEKEY_INTERVAL 20 */
    /* #define MOUSEKEY_DELAY 0 */
    /* #define MOUSEKEY_TIME_TO_MAX 60 */
    /* #define MOUSEKEY_MAX_SPEED 7 */
    /* #define MOUSEKEY_WHEEL_DELAY 0 */




  // im leaving the mac part of the keymap as stock.  So i flip the switch on the back of the board to MAC, and its normal QWERTY. WIN is my modified programmer dvorak 



enum layers{
  MAC_BASE,
  MAC_FN,  
  WIN_BASE,
  WIN_SHIFT,
  WIN_FN
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [MAC_BASE] = LAYOUT_104_ansi(
        KC_ESC,   KC_BRID,  KC_BRIU,  KC_MCTRL, KC_LNPAD, RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,    KC_VOLU,  KC_SNAP,  RGB_MOD,  KC_DEL,   KC_F13,   KC_F14,   KC_F15,   KC_MUTE,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,    KC_EQL,   KC_BSPC,            KC_PGUP,  KC_NUM,   KC_PSLS,  KC_PAST,  KC_PMNS,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,    KC_RBRC,  KC_BSLS,            KC_PGDN,  KC_P7,    KC_P8,    KC_P9,    KC_PPLS,
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,              KC_ENT,             KC_HOME,  KC_P4,    KC_P5,    KC_P6,
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              KC_RSFT,  KC_UP,              KC_P1,    KC_P2,    KC_P3,    KC_PENT,
        KC_LCTL,  KC_LOPTN, KC_LCMMD,                               KC_SPC,                                 KC_RCMMD, MO(MAC_FN), KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_P0,              KC_PDOT         ),

    [MAC_FN] = LAYOUT_104_ansi(
        _______,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,     KC_F12,   _______,  RGB_TOG,  _______,  _______,  _______,  _______,  RGB_TOG,
        _______,  BT_HST1,  BT_HST2,  BT_HST3,  P2P4G,    _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,  _______,  _______,  _______,  _______,
        RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,  _______,  _______,  _______,  _______,
        _______,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  _______,  _______,  _______,  _______,  _______,  _______,              _______,            KC_END,   _______,  _______,  _______,
        _______,            _______,  _______,  _______,  _______,  BAT_LVL,  NK_TOGG,  _______,  _______,  _______,  _______,              _______,  _______,            _______,  _______,  _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,    _______,  _______,  _______,  _______,  _______,            _______         ),

    [WIN_BASE] = LAYOUT_104_ansi(
        KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,     KC_F12,   KC_D,  RGB_MOD,  KC_DEL,  _______,  _______,  LWIN(KC_L),  KC_ENT,
        KC_DOLLAR,   KC_AMPERSAND,     KC_LBRC,     KC_LCBR,     KC_RCBR,     KC_LPRN,     KC_EQL,     KC_ASTR,     KC_RPRN,     KC_PLUS,     KC_RBRC,     KC_EXCLAIM,    KC_HASH,   KC_BSPC,            KC_PGUP,  KC_NUM,   KC_PSLS,  KC_PAST,  KC_PMNS,
        KC_TAB,   KC_SCLN,     KC_COMM,     KC_DOT,     KC_P,     KC_Y,     KC_F,     KC_G,     KC_C,     KC_R,     KC_L,     KC_SLSH,    KC_AT,  KC_BSLS,            KC_PGDN,  KC_P1,    KC_P2,    KC_P3,    KC_PPLS,
        KC_F13,  KC_A,     KC_O,     KC_E,     KC_U,     KC_I,     KC_D,     KC_H,     KC_T,     KC_N,     KC_S,  KC_MINS,              KC_ENT,             KC_HOME,  KC_P4,    KC_P5,    KC_P6,
       MO(WIN_SHIFT),            KC_QUOT,     KC_Q,     KC_J,     KC_K,     KC_X,     KC_B,     KC_M,     KC_W,  KC_V,   KC_Z,              MO(WIN_SHIFT),  KC_F14,              KC_P7,    KC_P8,    KC_P9,    KC_PENT,
        KC_F15,  KC_LALT,  KC_LCTL,                                KC_SPC,                                 KC_RCTL,  KC_RALT, KC_F16,  KC_LWIN,  KC_APP,  MO(WIN_FN),  KC_P0,              KC_PDOT         ),

    /* ---shift layer---*/
    
    [WIN_SHIFT] = LAYOUT_104_ansi(
        _______,   _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,   _______,     _______,   KC_D,  RGB_MOD,  KC_DEL,  _______,  _______,  LWIN(KC_L),  KC_ENT,
        KC_TILDE,   KC_PERCENT,     KC_7,     KC_5,     KC_3,     KC_1,     KC_9,     KC_0,     KC_2,     KC_4,     KC_6,     KC_8,    KC_GRAVE,   KC_BSPC,            KC_PGUP,  KC_NUM,   KC_PSLS,  KC_PAST,  KC_PMNS,
        KC_TAB,   KC_SCLN,     KC_COMM,     KC_DOT,     KC_P,     KC_Y,     KC_F,     KC_G,     KC_C,     KC_R,     KC_L,     KC_QUESTION,    KC_AT,  KC_BSLS,            KC_PGDN,  KC_P1,    KC_P2,    KC_P3,    KC_PPLS,
        KC_F13,  KC_A,     KC_O,     KC_E,     KC_U,     KC_I,     KC_D,     KC_H,     KC_T,     KC_N,     KC_S,  KC_MINS,              KC_ENT,             KC_HOME,  KC_P4,    KC_P5,    KC_P6,
        _______,            KC_QUOT,     KC_Q,     KC_J,     KC_K,     KC_X,     KC_B,     KC_M,     KC_W,  KC_V,   KC_Z,              _______,  KC_F14,              KC_P7,    KC_P8,    KC_P9,    KC_PENT,
        KC_F15,  KC_LALT,  KC_LCTL,                                KC_SPC,                                 KC_RCTL,  KC_RALT, KC_F16,  KC_LWIN,  KC_APP,  MO(WIN_FN),  KC_P0,              KC_PDOT         ),


    [WIN_FN] = LAYOUT_104_ansi(
        _______,  KC_BRID,  KC_BRIU,  KC_TASK,  KC_FILE,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,    KC_VOLU,  _______,  RGB_TOG,  KC_INSERT,  _______,  _______,  _______,  RGB_TOG,
        _______,  BT_HST1,  BT_HST2,  BT_HST3,  P2P4G,    _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,  _______,  _______,  _______,  _______,
        RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,  _______,  _______,  _______,  _______,
        _______,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  _______,  _______,  _______,  _______,  _______,  _______,              _______,            KC_END,   _______,  _______,  _______,
        _______,            _______,  _______,  _______,  _______,  BAT_LVL,  NK_TOGG,  _______,  _______,  _______,  _______,              _______,  _______,            _______,  _______,  _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,    _______,  KC_RWIN,  KC_MENU,  _______,  _______,            _______         )


    
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [MAC_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [MAC_FN]   = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI)},

    [WIN_BASE] = {ENCODER_CCW_CW(KC_DOWN, KC_UP)},
    [WIN_SHIFT] = {ENCODER_CCW_CW(KC_MS_DOWN, KC_MS_UP)},
    [WIN_FN]   = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI)}
    
    /* [WIN_LOCK] = {ENCODER_CCW_CW(MS_DOWN, MS_UP)}, */
    /* [WIN_MOUSE] = {ENCODER_CCW_CW(QK_MOUSE_CURSOR_DOWN, QK_MOUSE_CURSOR_UP)} */
};
#endif

// clang-format on
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_record_keychron_common(keycode, record)) {
        return false;
    }
    return true;
}






/* hardware reset: "hold down h and ' and Fn at the same time" */


/* Local Variables: */
/* compile-command: "qmk flash -kb keychron/k17_max/ansi_encoder/rgb -km chuggdev" */
/* End: */

