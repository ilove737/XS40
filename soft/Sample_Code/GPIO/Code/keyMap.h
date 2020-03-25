
// #include "keyScanCode.h"
#include "usb_hid_keys.h"

// 这个就是 左 键盘布局
#if 1
unsigned char keyMap[40] ={
    KEY_ESC,        KEY_1,   KEY_2,  KEY_3,      KEY_4,      KEY_5,      KEY_SLASH,   SHIFT_8,
    KEY_TAB,        KEY_Q,   KEY_W,  KEY_E,      KEY_R,      KEY_T,      KEY_LEFTBRACE, KEY_RIGHTBRACE,
    KEY_CAPSLOCK,   KEY_A,   KEY_S,  KEY_D,      KEY_F,      KEY_G,      SHIFT_9,     SHIFT_0,
    KEY_LEFTSHIFT,  SHIFT_2, KEY_Z,  KEY_X,      KEY_C,      KEY_V,      SHIFT_3,     SHIFT_7,
    KEY_F1,         KEY_F5,  KEY_LEFTALT, KEY_LEFTSHIFT, KEY_LEFTCTRL,  KEY_SPACE,  KEY_LEFTALT, SHIFT_GRAVE,
};

#else

// 这个就是 右 键盘布局
unsigned char keyMap[40] ={
    KEY_MINUS, SHIFT_EQUAL, KEY_6,  KEY_7,  KEY_8,  KEY_9,  KEY_0,  KEY_BACKSPACE,
    KEY_BACKSLASH, KEY_EQUAL, KEY_Y,  KEY_U,  KEY_I,  KEY_O,  KEY_P,  KEY_DELETE,
    KEY_SEMICOLON, KEY_APOSTROPHE, KEY_H,  KEY_J,  KEY_K,  KEY_L,  SHIFT_MINUS,   KEY_ENTER,
    KEY_COMMA, KEY_DOT, KEY_B,  KEY_N,  KEY_M,  SHIFT_SLASH,  KEY_UP,   KEY_RIGHTSHIFT,
    KEY_GRAVE, KEY_RIGHTALT, KEY_SPACE, KEY_RIGHTCTRL,  KEY_RIGHTSHIFT,  KEY_LEFT,  KEY_DOWN,  KEY_RIGHT,
};

#endif
