#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0
#define _SYMB 1
#define _NAV 2
#define _ADJUST 3

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  SYMB,
  NAV,
  ADJUST,
};

// Shortcut to make keymap more readable
//#define KC_BKSL KC_BSLASH
//#define SYM_L   MO(_SYMB)

//#define KC_ALAS LALT_T(KC_PAST)
//#define KC_CTPL LCTL_T(KC_PSLS)

//#define KC_NAGR LT(_NAV, KC_GRV)
//#define KC_NAMI LT(_NAV, KC_MINS)

//#define KC_ADEN LT(_ADJUST, KC_END)
//#define KC_ADPU LT(_ADJUST, KC_PGUP)

%keymap%

void matrix_scan_user(void) {
    uint8_t layer = biton32(layer_state);

    switch (layer) {
        case _QWERTY:
            set_led_off;
            break;
        case _SYMB:
            set_led_green;
            break;
        case _NAV:
            set_led_blue;
            break;
        case _ADJUST:
            set_led_red;
            break;
        default:
            break;
    }
};


