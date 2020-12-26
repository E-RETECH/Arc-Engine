#include <arc/engine/io/var.hpp>
#include <assert.h>
#include <stdio.h>

int main() {
    struct joystick_values test_var = {
        .js_x = 0,
        .js_y = 0,
        .js_press = 0
    };

    assert(sizeof(test_var.js_x) != 0);
    assert(sizeof(test_var.js_y) != 0);
    assert(sizeof(test_var.js_press) != 0);

    assert(sizeof(JSCONFIG.arc_rx) != 0);
    assert(sizeof(JSCONFIG.arc_ry) != 0);
    assert(sizeof(JSCONFIG.arc_sw) != 0);
}
