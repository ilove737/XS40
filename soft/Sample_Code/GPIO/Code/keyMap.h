
#include "keyScanCode.h"

// 这个就是 左 键盘布局
// unsigned char keyMap[40] ={
//     KEY_ESC,        KEY_1,      KEY_2,  KEY_3,      KEY_4,      KEY_5,      KEY_THROW,  KEY_BACKSPACE,
//     KEY_TAB,        KEY_Q,      KEY_W,  KEY_E,      KEY_R,      KEY_T,      KEY_Y,      KEY_U,
//     KEY_CAPS_LOCK,  KEY_A,      KEY_S,  KEY_D,      KEY_F,      KEY_G,      KEY_H,      KEY_J,
//     KEY_LSHIFT,     KEY_HOME,   KEY_Z,  KEY_X,      KEY_C,      KEY_V,      KEY_B,      KEY_END,
//     KEY_F1,         KEY_F2,     KEY_F5, KEY_LSHIFT, KEY_LCTRL,  KEY_SPACE,  KEY_LALT,   KEY_ENTER,
// };

// 这个就是 右 键盘布局
unsigned char keyMap[40] ={
    KEY_VERTICAL_LINE, KEY_QUESTION, KEY_6,  KEY_7,  KEY_8,  KEY_9,  KEY_0,  KEY_BACKSPACE,
    KEY_LEFT_BRACKET,  KEY_RIGHT_BRACKET, KEY_Y,  KEY_U,  KEY_I,  KEY_O,  KEY_P,  KEY_DEL,
    KEY_SEMICOLON,     KEY_QUOTE,             KEY_H,  KEY_J,  KEY_K,  KEY_L,  KEY_ENTER,   KEY_ENTER,
    KEY_SUB,       KEY_EQUAL,             KEY_N,  KEY_M,  KEY_COMMA,  KEY_DOT,  KEY_UP_ARROW,   KEY_RSHIFT,
    KEY_RGUI,         KEY_RALT,          KEY_SPACE,   KEY_RCTRL,  KEY_RSHIFT,  KEY_LEFT_ARROW,  KEY_DOWN_ARROW,  KEY_RIGHT_ARROW,
};