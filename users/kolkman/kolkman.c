
/* Copyright Olaf Kolkan (github handle: kolkman)
   
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/ 

#include "rgblight.h"
#include QMK_KEYBOARD_H
#include "kolkman.h"
void keyboard_post_init_rgb(void) {
#if defined(RGBLIGHT_ENABLE) && defined(RGBLIGHT_STARTUP_ANIMATION)
    uint16_t old_hue = 170;
    rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
    for (uint16_t i = 255; i > 0; i--) {
        rgblight_sethsv_noeeprom((i + old_hue) % 255, 255, 255);
        matrix_scan();
        wait_ms(10);
    }
    rgblight_reload_from_eeprom();
#endif
}

__attribute__((weak)) void housekeeping_task_keymap(void) {}
void housekeeping_task_user(void) {
    housekeeping_task_keymap();
}
