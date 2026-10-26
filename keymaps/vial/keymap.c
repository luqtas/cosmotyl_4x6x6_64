#include QMK_KEYBOARD_H

/* ╰( ^o^)╮ */
#define KC_BT QK_BOOT
#define KC_RB QK_RBT

bool is_transport_connected(void);

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] =
{
  [0] = LAYOUT(
	       KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,								KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
	       KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,								KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
	       KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,								KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
	       KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,								KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
			      KC_NO, KC_NO,	            KC_NO, KC_NO, KC_NO,		KC_NO, KC_NO, KC_NO,	       KC_NO, KC_NO,
                                            KC_NO, KC_NO, KC_NO,		KC_NO, KC_NO, KC_NO
	       )
};
