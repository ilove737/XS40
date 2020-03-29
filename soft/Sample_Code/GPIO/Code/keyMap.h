
// #include "keyScanCode.h"
#include "usb_hid_keys.h"

// 这个就是 左 键盘布局
#if 0
unsigned char keyMap[40] ={
    KEY_ESC,        KEY_1,   KEY_2,  KEY_3,      KEY_4,      KEY_5,      KEY_GRAVE,   SHIFT_8,
    KEY_TAB,        KEY_Q,   KEY_W,  KEY_E,      KEY_R,      KEY_T,      KEY_LEFTBRACE, KEY_RIGHTBRACE,
    KEY_CAPSLOCK,   KEY_A,   KEY_S,  KEY_D,      KEY_F,      KEY_G,      SHIFT_9,     SHIFT_0,
    KEY_LEFTSHIFT,  SHIFT_2, KEY_Z,  KEY_X,      KEY_C,      KEY_V,      SHIFT_7,     SHIFT_3,
    KEY_F5,   KEY_LEFTMETA,  KEY_LEFTALT, KEY_LEFTSHIFT, KEY_LEFTCTRL,  KEY_SPACE,  SHIFT_GRAVE, SHIFT_1,
};

#else

// 这个就是 右 键盘布局
unsigned char keyMap[40] ={
    SHIFT_MINUS, SHIFT_EQUAL, KEY_6,  KEY_7,  KEY_8,  KEY_9,  KEY_0,  KEY_BACKSPACE,
    KEY_EQUAL, KEY_BACKSLASH, KEY_Y,  KEY_U,  KEY_I,  KEY_O,  KEY_P,  KEY_DELETE,
    KEY_SEMICOLON, KEY_APOSTROPHE, KEY_H,  KEY_J,  KEY_K,  KEY_L,  KEY_MINUS,   KEY_ENTER,
    KEY_COMMA, KEY_DOT, KEY_B,  KEY_N,  KEY_M,  KEY_SLASH,  KEY_UP,   KEY_RIGHTSHIFT,
    SHIFT_5, SHIFT_SLASH, KEY_SPACE, KEY_RIGHTCTRL,  KEY_RIGHTSHIFT,  KEY_LEFT,  KEY_DOWN,  KEY_RIGHT,
};

#endif


/*
http://www.keyboard-layout-editor.com/#/

[{c:"#6495ed"},"Esc",{c:"#cccccc"},"!\n1","@\n2","#\n3","$\n4","%\n5",{c:"#ff4500"},"~\n`","*",{x:1},"_","+",{c:"#cccccc"},"^\n6","&\n7","*\n8","(\n9",")\n0",{c:"#bb0000"},"Bs"],
[{c:"#444444"},"Tab",{c:"#cccccc"},"Q","W","E","R","T",{c:"#444444"},"{\n[","}\n]",{x:1},"+\n=","|\n\\",{c:"#cccccc"},"Y","U","I","O","P",{c:"#444444"},"del"],
[{c:"#cccccc"},"Caps Lock","A","S","D","F","G","(",{c:"#444444"},")",{x:1},":\n;",{c:"#cccccc"},"\"\n'","H","J","K","L","_\n-","Enter"],
[{c:"#ff4500"},"Shift",{c:"#6495ed"},"@",{c:"#cccccc"},"Z","X","C","V","&",{c:"#444444"},"#",{x:1},"<\n,",{c:"#cccccc"},">\n.","B","N","M","?\n/",{c:"#bb0000"},"↑",{c:"#ff4500"},"RShift"],
[{c:"#6495ed"},"Fn0","Win","Alt",{c:"#ff4500"},"Shift",{c:"#444444"},"Ctrl",{c:"#cccccc"},"Space",{c:"#444444"},"~","!",{x:1},"%","?",{c:"#cccccc"},"Space",{c:"#444444"},"Ctrl",{c:"#ff4500"},"RShift",{c:"#bb0000"},"←","↓","→"],

[{y:0.5,c:"#6495ed"},"F0",{c:"#cccccc"},"F1","F2","F3","F4","F5",{c:"#ff4500"},"Num Lock","",{x:1},"","",{c:"#cccccc"},"F6","F7","F8","F9","F10",{c:"#bb0000"},""],
[{c:"#444444"},"select",{c:"#cccccc"},"F11","F12","mail",{a:7},"","",{c:"#444444",a:4},"","",{x:1},"","",{c:"#cccccc"},"7\nHome",{a:4},"8\n↑","9\nPgUp",{a:4},"/","",{c:"#444444"},""],
[{c:"#cccccc"},"prev","play","next","stop",{a:7},"","",{a:4},"",{c:"#444444"},"",{x:1},"",{c:"#cccccc"},"","4\n←",{a:4},"5",{a:4},"6\n→",{a:4},"*","",""],
[{c:"#ff4500",a:4},"vol dn",{c:"#6495ed"},"mute",{c:"#cccccc"},"vol up","app",{a:7},"","",{a:4},"",{c:"#444444"},"",{x:1},"",{c:"#cccccc"},"","1\nEnd","2\n↓","3\nPgDn","-",{c:"#bb0000",a:4},"",{c:"#ff4500"},""],
[{c:"#6495ed"},"Fn3","Fn2","Fn4",{c:"#ff4500",a:7},"",{c:"#444444"},"",{c:"#cccccc"},"",{c:"#444444",a:4},"","",{x:1},"","",{c:"#cccccc"},"PEnter",{c:"#444444"},"0\nIns",{c:"#ff4500"},".\nDel",{c:"#bb0000"},"+","",""]

*/