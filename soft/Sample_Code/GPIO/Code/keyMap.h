
#include "usb_hid_keys.h"

// 这个就是 左 键盘布局
#if 1
unsigned char xdata keyMap[40] ={
    KEY_ESC,        KEY_1,   KEY_2,  KEY_3,      KEY_4,      KEY_5,      KEY_GRAVE,   SHIFT_8,
    KEY_TAB,        KEY_Q,   KEY_W,  KEY_E,      KEY_R,      KEY_T,      KEY_LEFTBRACE, KEY_RIGHTBRACE,
    KEY_CAPSLOCK,   KEY_A,   KEY_S,  KEY_D,      KEY_F,      KEY_G,      SHIFT_9,     SHIFT_0,
    KEY_LEFTSHIFT,  SHIFT_2, KEY_Z,  KEY_X,      KEY_C,      KEY_V,      SHIFT_7,     SHIFT_3,
    KEY_Fn0,   KEY_LEFTMETA,  KEY_LEFTALT, KEY_LEFTSHIFT, KEY_SPACE, KEY_LEFTCTRL,  SHIFT_GRAVE, SHIFT_1,
};

unsigned char xdata Fn0_keyMap[40] ={
    KEY_ESC,        KEY_F1,   KEY_F2,  KEY_F3,      KEY_F4,      KEY_F5,      KEY_GRAVE,   SHIFT_8,
    KEY_TAB,        KEY_F11,   KEY_F12,  KEY_E,      KEY_R,      KEY_T,      KEY_LEFTBRACE, KEY_RIGHTBRACE,
    KEY_CAPSLOCK,   KEY_A,   KEY_S,  KEY_D,      KEY_F,      KEY_G,      SHIFT_9,     SHIFT_0,
    KEY_VOLUMEDOWN,  SHIFT_2, KEY_VOLUMEUP,  KEY_X,      KEY_C,      KEY_V,      SHIFT_7,     SHIFT_3,
    KEY_Fn0,   KEY_LEFTMETA,  KEY_LEFTALT, KEY_LEFTSHIFT, KEY_SPACE, KEY_LEFTCTRL,  SHIFT_GRAVE, SHIFT_1,
};


#else

// 这个就是 右 键盘布局
unsigned char xdata keyMap[40] ={
    SHIFT_MINUS, SHIFT_EQUAL, KEY_6,  KEY_7,  KEY_8,  KEY_9,  KEY_0,  KEY_BACKSPACE,
    KEY_EQUAL, KEY_BACKSLASH, KEY_Y,  KEY_U,  KEY_I,  KEY_O,  KEY_P,  KEY_DELETE,
    KEY_SEMICOLON, KEY_COMMA, KEY_H,  KEY_J,  KEY_K,  KEY_L,  KEY_MINUS,   KEY_ENTER,
    KEY_APOSTROPHE, KEY_DOT, KEY_B,  KEY_N,  KEY_M,  KEY_SLASH,  KEY_UP,   KEY_RIGHTSHIFT,
    SHIFT_5, SHIFT_SLASH, KEY_RIGHTCTRL, KEY_SPACE,  KEY_Fn0,  KEY_LEFT,  KEY_DOWN,  KEY_RIGHT,
};

unsigned char xdata Fn0_keyMap[40] ={
    SHIFT_MINUS, SHIFT_EQUAL, KEY_F6,  KEY_F7,  KEY_F8,  KEY_F9,  KEY_F10,  KEY_BACKSPACE,
    KEY_EQUAL, KEY_BACKSLASH, KEY_KP7,  KEY_KP8,  SHIFT_BACKSLASH,  KEY_KPSLASH,  KEY_P,  KEY_DELETE,
    KEY_SEMICOLON, KEY_COMMA, KEY_KP4,  SHIFT_APOSTROPHE,  SHIFT_SEMICOLON,  KEY_KPASTERISK,  KEY_MINUS,   KEY_ENTER,
    KEY_APOSTROPHE, KEY_DOT, KEY_KP1,  SHIFT_LEFTBRACE,  SHIFT_RIGHTBRACE,  KEY_KPMINUS,  KEY_UP,   KEY_RIGHTSHIFT,
    SHIFT_5, SHIFT_SLASH, KEY_KPENTER, KEY_KP0,  KEY_Fn0,  KEY_KPPLUS,  KEY_DOWN,  KEY_RIGHT,
};
 
#endif


/*
http://www.keyboard-layout-editor.com/#/

[{c:"#6495ed"},"Esc",{c:"#cccccc"},"!\n1","@\n2","#\n3","$\n4","%\n5",{c:"#ff4500"},"~\n`","*",{x:1},"_","+",{c:"#cccccc"},"^\n6","&\n7","*\n8","(\n9",")\n0",{c:"#bb0000"},"Bs"],
[{c:"#444444"},"Tab",{c:"#cccccc"},"Q","W","E","R","T",{c:"#444444"},"{\n[","}\n]",{x:1},"+\n=","|\n\\",{c:"#cccccc"},"Y","U","I","O","P",{c:"#444444"},"del"],
[{c:"#cccccc"},"Caps Lock","A","S","D","F","G","(",{c:"#444444"},")",{x:1},":\n;",{c:"#cccccc"},"<\n,","H","J","K","L","_\n-","Enter"],
[{c:"#ff4500"},"Shift",{c:"#6495ed"},"@",{c:"#cccccc"},"Z","X","C","V","&",{c:"#444444"},"#",{x:1},"\"\n'",{c:"#cccccc"},">\n.","B","N","M","?\n/",{c:"#bb0000"},"↑",{c:"#ff4500"},"RShift"],
[{c:"#6495ed"},"Fn0","Win","Alt",{c:"#ff4500"},"Shift",{c:"#cccccc"},"Space",{c:"#444444"},"Ctrl","~","!",{x:1},"%","?","Ctrl",{c:"#cccccc"},"Space",{c:"#ff4500"},"Fn0",{c:"#bb0000"},"←","↓","→"],

[{y:0.5,c:"#6495ed"},"F0",{c:"#cccccc"},"F1","F2","F3","F4","F5",{c:"#ff4500"},"Num Lock","",{x:1},"","",{c:"#cccccc"},"F6","F7","F8","F9","F10",{c:"#bb0000"},""],
[{c:"#444444"},"select",{c:"#cccccc"},"F11","F12","mail",{a:7},"","",{c:"#444444",a:4},"","",{x:1},"","",{c:"#cccccc"},"7\nHome",{a:4},"8\n↑","|",{a:4},"/","",{c:"#444444"},""],
[{c:"#cccccc"},"prev","play","next","stop",{a:7},"","",{a:4},"",{c:"#444444"},"",{x:1},"",{c:"#cccccc"},"","4\n←",{a:4},"\"",{a:4},":",{a:4},"*","",""],
[{c:"#ff4500",a:4},"vol dn",{c:"#6495ed"},"mute",{c:"#cccccc"},"vol up","app",{a:7},"","",{a:4},"",{c:"#444444"},"",{x:1},"",{c:"#cccccc"},"","1\nEnd","{","}","-",{c:"#bb0000",a:4},"",{c:"#ff4500"},""],
[{c:"#6495ed"},"Fn0","Fn2","Fn4",{c:"#ff4500",a:7},"",{c:"#cccccc"},"",{c:"#444444"},"",{a:4},"","",{x:1},"","","PEnter",{c:"#cccccc"},"0\nIns",{c:"#ff4500"},"Fn0",{c:"#bb0000"},"+","",""]

*/