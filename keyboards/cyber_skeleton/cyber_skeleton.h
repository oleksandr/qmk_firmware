#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT( \
    L00, L01, L02, L03, L04,   R00, R01, R02, R03, R04, \
    L10, L11, L12, L13, L14,   R10, R11, R12, R13, R14, \
    L20, L21, L22, L23, L24,   R20, R21, R22, R23, R24, \
              LT1, LT2, LT3,   RT1, RT2, RT3 \
) { \
        { L00, L01, L02, L03, L04}, \
        { L10, L11, L12, L13, L14}, \
        { L20, L21, L22, L23, L24}, \
        { KC_NO, KC_NO,  LT1, LT2, LT3 }, \
        { R04, R03, R02, R01, R00 }, \
        { R14, R13, R12, R11, R10 }, \
        { R24, R23, R22, R21, R20 }, \
        { KC_NO, KC_NO,  RT3, RT2, RT1 } \
}

/*
 * Data structures used for the track ball / optical sensor implementation
 */
enum custom_keycodes {
    KC_SCROLL = SAFE_RANGE,
    KC_CPI_1,
    KC_CPI_2,
    KC_CPI_3
};

typedef union {
  uint32_t raw;
  struct {
    uint16_t cpi;
  };
} config_oddball_t;
