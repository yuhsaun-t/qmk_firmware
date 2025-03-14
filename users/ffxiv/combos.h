#pragma once

#include QMK_KEYBOARD_H

const uint16_t PROGMEM f2[] = {KC_5, KC_1, COMBO_END};
const uint16_t PROGMEM f3[] = {KC_6, KC_2, COMBO_END};
const uint16_t PROGMEM f4[] = {KC_7, KC_3, COMBO_END};
const uint16_t PROGMEM f5[] = {KC_9, KC_6, COMBO_END};
const uint16_t PROGMEM f6[] = {KC_0, KC_7, COMBO_END};
const uint16_t PROGMEM f7[] = {KC_7, KC_2, COMBO_END};
const uint16_t PROGMEM f8[] = {KC_3, KC_8, COMBO_END};
const uint16_t PROGMEM f2r[] = {KC_1, KC_5, COMBO_END};
const uint16_t PROGMEM f3r[] = {KC_2, KC_6, COMBO_END};
const uint16_t PROGMEM f4r[] = {KC_3, KC_7, COMBO_END};
const uint16_t PROGMEM f5r[] = {KC_6, KC_9, COMBO_END};
const uint16_t PROGMEM f6r[] = {KC_7, KC_0, COMBO_END};
const uint16_t PROGMEM f7r[] = {KC_2, KC_7, COMBO_END};
const uint16_t PROGMEM f8r[] = {KC_8, KC_3, COMBO_END};
const uint16_t PROGMEM ytseng[] = {KC_Y, KC_T, COMBO_END};
const uint16_t PROGMEM yuhsuan[] = {KC_Y, KC_H, COMBO_END};
const uint16_t PROGMEM thanks[] = {KC_T, KC_K, COMBO_END};
const uint16_t PROGMEM trtllm[] = {KC_T, KC_L, COMBO_END};
const uint16_t PROGMEM trtllm_serve[] = {KC_T, KC_L, KC_S, COMBO_END};
const uint16_t PROGMEM trtllm_bench[] = {KC_T, KC_L, KC_B, COMBO_END};

enum combo_events {
    COMBO_F2,
    COMBO_F3,
    COMBO_F4,
    COMBO_F5,
    COMBO_F6,
    COMBO_F7,
    COMBO_F8,
    COMBO_F2r,
    COMBO_F3r,
    COMBO_F4r,
    COMBO_F5r,
    COMBO_F6r,
    COMBO_F7r,
    COMBO_F8r,
    COMBO_YTSENG,
    COMBO_YUHSUAN,
    COMBO_THANKS,
    COMBO_TRTLLM,
    COMBO_TRTLLM_SERVE,
    COMBO_TRTLLM_BENCH,
};

combo_t key_combos[] = {
    [COMBO_F2] = COMBO(f2, KC_F2),
    [COMBO_F3] = COMBO(f3, KC_F3),
    [COMBO_F4] = COMBO(f4, KC_F4),
    [COMBO_F5] = COMBO(f5, KC_F5),
    [COMBO_F6] = COMBO(f6, KC_F6),
    [COMBO_F7] = COMBO(f7, KC_F7),
    [COMBO_F8] = COMBO(f8, KC_F8),
    [COMBO_F2r] = COMBO(f2r, KC_F2),
    [COMBO_F3r] = COMBO(f3r, KC_F3),
    [COMBO_F4r] = COMBO(f4r, KC_F4),
    [COMBO_F5r] = COMBO(f5r, KC_F5),
    [COMBO_F6r] = COMBO(f6r, KC_F6),
    [COMBO_F7r] = COMBO(f7r, KC_F7),
    [COMBO_F8r] = COMBO(f8r, KC_F8),
    [COMBO_YTSENG] = COMBO(ytseng, YTSENG),
    [COMBO_YUHSUAN] = COMBO(yuhsuan, YUHSUAN),
    [COMBO_THANKS] = COMBO(thanks, THANKS),
    [COMBO_TRTLLM] = COMBO(trtllm, TRTLLM),
    [COMBO_TRTLLM_SERVE] = COMBO(trtllm_serve, TRTLLM_SERVE),
    [COMBO_TRTLLM_BENCH] = COMBO(trtllm_bench, TRTLLM_BENCH),
};