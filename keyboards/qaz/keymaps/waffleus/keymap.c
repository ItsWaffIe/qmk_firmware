#include "waffleus.h"
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_waffle_qaz (
        _______________QAZQWERTY1_________________
        _______________QAZQWERTY2_________________
        _______________QAZQWERTY3_________________
        _______________QAZQWERTY4_________________
    ),
    [_LOWER] = LAYOUT_waffle_qaz (
        ________________QAZLOWER1_________________
        ________________QAZLOWER2_________________
        ________________QAZLOWER3_________________
        ________________QAZLOWER4_________________
    ),
    [_RAISE] = LAYOUT_waffle_qaz (
        ________________QAZRAISE1_________________
        ________________QAZRAISE2_________________
        ________________QAZRAISE3_________________
        ________________QAZRAISE4_________________
    )
};
