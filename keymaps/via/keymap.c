// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap 0: Basic layer
 *
 * ,--------------------------------------------------.       
 * |   A    |   B  |   C  |   D  |   E  |   F  |   G  |       
 * |--------+------+------+------+------+-------------|       
 * |   H    |   I  |   J  |   K  |   L  |   M  |   N  |       
 * |--------+------+------+------+------+------|      |       
 * |   O    |   P  |   Q  |   R  |   S  |   T  |------|       
 * |--------+------+------+------+------+------|   U  |       
 * |   W    |   X  |   Y  |   Z  |   1  |   2  |      |       
 * `--------+------+------+------+------+-------------'       
 *   | 5    |   6  |   7  |   8  |   9  |                     
 *   `----------------------------------'                     
 *                                        ,-------------.     
 *                                        |   1  |  2   |     
 *                                 ,------|------|------|     
 *                                 |      |      |  3   |     
 *                                 |   A  |  B   |------|     
 *                                 |      |      |  4   |     
 *                                 `--------------------'     
 */
    [0] = LAYOUT_ortho_5x8(
        KC_A,   KC_B,   KC_C,  KC_D, KC_E, KC_F, KC_G, 
        KC_H,   KC_I,   KC_J,  KC_K, KC_L, KC_M, KC_N,
        KC_O,   KC_P,   KC_Q,  KC_R, KC_S, KC_T, KC_U,        
        KC_W,   KC_X,   KC_Y,  KC_Z, KC_1, KC_2,  
        KC_5,   KC_6,   KC_7,  KC_8, KC_9,  
                                                       KC_A,KC_B,
                                                       KC_1, KC_2,KC_3,KC_4

    )
};



