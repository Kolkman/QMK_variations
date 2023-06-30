

enum userspace_layers {
    _QWERTY = 0,
#ifdef ENABLE_DVORAK
    _DVORAK,
#endif
#ifdef ENABLE_COLEMAK
    _COLEMAK_DH,
#endif
    _NAV,
    _SYM,
    _FUNCTION,
    _ADJUST,
    __LAST
};

void keyboard_post_init_rgb(void);
