#undef TAPPING_TERM
#define TAPPING_TERM 250

#define PERMISSIVE_HOLD
#define CHORDAL_HOLD

#undef RGB_MATRIX_TIMEOUT
#define RGB_MATRIX_TIMEOUT 300000

#undef RGB_MATRIX_VAL_STEP
#define RGB_MATRIX_VAL_STEP 4

#define USB_SUSPEND_WAKEUP_DELAY 0
#define CAPS_LOCK_STATUS
#define SERIAL_NUMBER "6pqLr/9DDnaj"
#define LAYER_STATE_8BIT
#define COMBO_COUNT 4

#define TAPPING_TERM_PER_KEY
#define RGB_MATRIX_STARTUP_SPD 60
//
#define MT(mod, kc) (QK_MOD_TAP | (((mod)&0x1F) << 8) | ((kc)&0xFF))
#define LT(layer, kc) (QK_LAYER_TAP | (((layer)&0xF) << 8) | ((kc)&0xFF))

