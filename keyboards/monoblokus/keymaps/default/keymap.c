
#include QMK_KEYBOARD_H

#define U_NP KC_NO // key is not present
#define U_NA KC_NO // present but not available for use
#define U_NU KC_NO // available but not used

enum layers { BASE, BUTTON, LANG_UA, LANG_RU, NAV, SYM, NUM, FUN };

#if defined MIRYOKU_CLIPBOARD_FUN
#define U_RDO KC_AGIN
#define U_PST KC_PSTE
#define U_CPY KC_COPY
#define U_CUT KC_CUT
#define U_UND KC_UNDO
#elif defined MIRYOKU_CLIPBOARD_MAC
#define U_RDO SCMD(KC_Z)
#define U_PST LCMD(KC_V)
#define U_CPY LCMD(KC_C)
#define U_CUT LCMD(KC_X)
#define U_UND LCMD(KC_Z)
#elif defined MIRYOKU_CLIPBOARD_WIN
#define U_RDO C(KC_Y)
#define U_PST C(KC_V)
#define U_CPY C(KC_C)
#define U_CUT C(KC_X)
#define U_UND C(KC_Z)
#else
#define U_RDO KC_AGIN
#define U_PST S(KC_INS)
#define U_CPY C(KC_INS)
#define U_CUT S(KC_DEL)
#define U_UND KC_UNDO
#endif

/*
 * Cyrillic unicode keycodes definition
 */

enum unicode_names {
    C_aa,
    C_Aa,
    C_be,
    C_Be,
    C_ve,
    C_Ve,
    C_ghe,
    C_Ghe,
    C_de,
    C_De,
    C_ie,
    C_Ie,
    C_io,
    C_Io,
    C_UA_ie,
    C_UA_Ie,
    C_zhe,
    C_Zhe,
    C_ze,
    C_Ze,
    C_i,
    C_I,
    C_UA_i,
    C_UA_I,
    C_UA_yi,
    C_UA_Yi,
    C_SHORT_i,
    C_SHORT_I,
    C_ka,
    C_Ka,
    C_el,
    C_El,
    C_em,
    C_Em,
    C_en,
    C_En,
    C_o,
    C_O,
    C_pe,
    C_Pe,
    C_er,
    C_Er,
    C_es,
    C_Es,
    C_te,
    C_Te,
    C_u,
    C_U,
    C_ef,
    C_Ef,
    C_ha,
    C_Ha,
    C_tse,
    C_Tse,
    C_che,
    C_Che,
    C_sha,
    C_Sha,
    C_shcha,
    C_Shcha,
    C_HARD_sign,
    C_HARD_Sign,
    C_yeru,
    C_Yeru,
    C_SOFT_sign,
    C_SOFT_Sign,
    C_e,
    C_E,
    C_yu,
    C_Yu,
    C_ya,
    C_Ya
};

const uint32_t PROGMEM unicode_map[] = {
    [C_aa] = 0x0430,
    [C_Aa] = 0x0410,
    [C_be] = 0x0430,
    [C_Be] = 0x0410,
    [C_ve] = 0x0432,
    [C_Ve] = 0x0412,
    [C_ghe] = 0x0433,
    [C_Ghe] = 0x0413,
    [C_de] = 0x0434,
    [C_De] = 0x0414,
    [C_ie] = 0x0435,
    [C_Ie] = 0x0415,
    [C_io] = 0x0451,
    [C_Io] = 0x0401,
    [C_UA_ie] = 0x0454,
    [C_UA_Ie] = 0x0404,
    [C_zhe] = 0x0436,
    [C_Zhe] = 0x0416,
    [C_ze] = 0x0437,
    [C_Ze] = 0x0417,
    [C_i] = 0x0438,
    [C_I] = 0x0418,
    [C_UA_i] = 0x0456,
    [C_UA_I] = 0x0406,
    [C_UA_yi] = 0x0457,
    [C_UA_Yi] = 0x0407,
    [C_SHORT_i] = 0x0439,
    [C_SHORT_I] = 0x0419,
    [C_ka] = 0x043A,
    [C_Ka] = 0x041A,
    [C_el] = 0x043B,
    [C_El] = 0x041B,
    [C_em] = 0x043C,
    [C_Em] = 0x041C,
    [C_en] = 0x043D,
    [C_En] = 0x041D,
    [C_o] = 0x043E,
    [C_O] = 0x041E,
    [C_pe] = 0x043F,
    [C_Pe] = 0x041F,
    [C_er] = 0x0440,
    [C_Er] = 0x0420,
    [C_es] = 0x0441,
    [C_Es] = 0x0421,
    [C_te] = 0x0442,
    [C_Te] = 0x0422,
    [C_u] = 0x0443,
    [C_U] = 0x0423,
    [C_ef] = 0x0444,
    [C_Ef] = 0x0424,
    [C_ha] = 0x0445,
    [C_Ha] = 0x0425,
    [C_tse] = 0x0446,
    [C_Tse] = 0x0426,
    [C_che] = 0x0447,
    [C_Che] = 0x0427,
    [C_sha] = 0x0448,
    [C_Sha] = 0x0428,
    [C_shcha] = 0x0449,
    [C_Shcha] = 0x0429,
    [C_HARD_sign] = 0x044A,
    [C_HARD_Sign] = 0x042A,
    [C_yeru] = 0x044B,
    [C_Yeru] = 0x042B,
    [C_SOFT_sign] = 0x044C,
    [C_SOFT_Sign] = 0x042C,
    [C_e] = 0x044D,
    [C_E] = 0x042D,
    [C_yu] = 0x044E,
    [C_Yu] = 0x042E,
    [C_ya] = 0x044F,
    [C_Ya] = 0x042F
};

/*
 * Main keymaps
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT(
        KC_Q,              KC_W,              KC_E,                KC_R,              KC_T,              KC_Y,              KC_U,              KC_I,              KC_O,              KC_P,
        LGUI_T(KC_A),      LALT_T(KC_S),      LCTL_T(KC_D),        LSFT_T(KC_F),      KC_G,              KC_H,              LSFT_T(KC_J),      LCTL_T(KC_K),      LALT_T(KC_L),      LGUI_T(KC_QUOT),
        LT(BUTTON, KC_Z),  ALGR_T(KC_X),      KC_C,                KC_V,              KC_B,              KC_N,              KC_M,              KC_COMM,           ALGR_T(KC_DOT),    LT(BUTTON, KC_SLSH),
                                              LT(LANG_RU, KC_ESC), LT(NAV, KC_SPC),   LT(BUTTON, KC_TAB), LT(SYM, KC_ENT),   LT(NUM, KC_BSPC),  LT(FUN, KC_DEL)
        ),
    [NAV] = LAYOUT(
        RESET,   U_NA,    U_NA,    U_NA,    U_NA,    U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND,
        KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA,    KC_CAPS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,
        U_NA,    KC_ALGR, U_NA,    U_NA,    U_NA,    KC_INS,  KC_HOME, KC_PGDN, KC_PGUP, KC_END,
                          U_NA,    U_NA,    U_NA,    KC_ENT,  KC_BSPC, KC_DEL
    ),
    // [MOUSE] = LAYOUT(
    //     RESET,   U_NA,    U_NA,    U_NA,    U_NA,    U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND,
    //     KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA,    U_NU,    KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R,
    //     U_NA,    KC_ALGR, U_NA,    U_NA,    U_NA,    U_NU,    KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R,
    //                       U_NA,    U_NA,    U_NA,    KC_BTN1, KC_BTN3, KC_BTN2
    // ),
    // [LANG_RU] = LAYOUT(
    //     XP(C_SHORT_i, C_SHORT_I), XP(C_tse, C_Tse),   XP(C_u, C_U),   XP(C_ka, C_Ka), XP(C_ie, C_Ie),    XP(C_en, C_En), XP(C_ghe, C_Ghe),             XP(C_sha, C_Sha), XP(C_shcha, C_Shcha), XP(C_ze, C_Ze),
    //     XP(C_ef, C_Ef),           XP(C_yeru, C_Yeru), XP(C_ve, C_Ve), XP(C_aa, C_Aa), XP(C_pe, C_Pe),    XP(C_er, C_Er), LSFT_T(XP(C_o, C_O)),         XP(C_el, C_El),   XP(C_de, C_De),       XP(C_e, C_E),
    //     XP(C_ya, C_Ya),           XP(C_che, C_Che),   XP(C_es, C_Es), XP(C_em, C_Em), XP(C_i, C_I),      XP(C_te, C_Te), XP(C_SOFT_sign, C_SOFT_Sign), XP(C_be, C_Be),   XP(C_yu, C_Yu),       XP(C_zhe, C_Zhe),
    //                                                    U_NA, XP(C_aa, C_Aa), XP(C_er, C_Er),              U_NA,           U_NA,                         U_NA
    // ),
    // [LANG_RU] = LAYOUT(
    //     RESET,   U_NA,    U_NA,    U_NA,    U_NA,    RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI,
    //     UC(0x0430), UC(0x40B), UC(0x30C4), KC_LSFT, U_NA,    U_NU,    KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT,
    //     U_NA,    KC_ALGR, U_NA,    U_NA,    U_NA,    U_NU,    U_NU,    U_NU,    U_NU,    U_NU,
    //                     U_NA,    U_NA,    U_NA,    KC_MSTP, KC_MPLY, KC_MUTE
    // ),
    [LANG_RU] = LAYOUT(
        RESET,   U_NA,    U_NA,    U_NA,    U_NA,    RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI,
        UC(0x430), UC(0x40B), UC(0x30C4), UC(0x410), U_NA,    U_NU,    KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT,
        UC(0x431), UC(0x411), UC(0x80),    U_NA,    U_NA,    U_NU,    U_NU,    U_NU,    U_NU,    U_NU,
                        U_NA,    U_NA,    U_NA,    KC_MSTP, KC_MPLY, KC_MUTE
    ),
    // [MEDIA] = LAYOUT(
    //     RESET,   U_NA,    U_NA,    U_NA,    U_NA,    RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI,
    //     KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA,    U_NU,    KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT,
    //     U_NA,    KC_ALGR, U_NA,    U_NA,    U_NA,    U_NU,    U_NU,    U_NU,    U_NU,    U_NU,
    //                       U_NA,    U_NA,    U_NA,    KC_MSTP, KC_MPLY, KC_MUTE
    // ),
    [NUM] = LAYOUT(
        KC_LBRC, KC_7,    KC_8,    KC_9,    KC_RBRC, U_NA,    U_NA,    U_NA,    U_NA,    RESET,
        KC_SCLN, KC_4,    KC_5,    KC_6,    KC_EQL,  U_NA,    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_BSLS, U_NA,    U_NA,    U_NA,    KC_ALGR, U_NA,
                          KC_DOT,  KC_0,    KC_MINS, U_NA,    U_NA,    U_NA
    ),
    [SYM] = LAYOUT(
        KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR, U_NA,    U_NA,    U_NA,    U_NA,    RESET,
        KC_COLN, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS, U_NA,    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
        KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE, U_NA,    U_NA,    U_NA,    KC_ALGR, U_NA,
                          KC_LPRN, KC_RPRN, KC_UNDS, U_NA,    U_NA,    U_NA
    ),
    [FUN] = LAYOUT(
        KC_F12,  KC_F7,   KC_F8,   KC_F9,   KC_PSCR, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, RESET,
        KC_F11,  KC_F4,   KC_F5,   KC_F6,   KC_SLCK, U_NA,    KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
        KC_F10,  KC_F1,   KC_F2,   KC_F3,   KC_PAUS, U_NA,    KC_MSTP, KC_MPLY, KC_ALGR, KC_MUTE,
                          KC_APP,  KC_SPC,  KC_TAB,  U_NA,    U_NA,    U_NA
    ),
    [BUTTON] = LAYOUT(
    U_UND,   U_CUT,   U_CPY,   U_PST,   U_RDO,   U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_TRNS, KC_TRNS, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    U_UND,   U_CUT,   U_CPY,   U_PST,   U_RDO,   U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND,
                      KC_BTN2, KC_BTN3, KC_BTN1, KC_BTN1, KC_BTN3, KC_BTN2
  )
};
