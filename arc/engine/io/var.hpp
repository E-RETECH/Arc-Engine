#ifndef VARS
#define VARS

#include <arc/engine/__init__.hpp>

#ifndef JOYSTICK_VARS
#define JOYSTICK_VARS
struct joystick_values {
    uint8_t js_x;
    uint8_t js_y;
    uint8_t js_press;
};

struct joystick_config {
    uint8_t arc_rx;
    uint8_t arc_ry;
    uint8_t arc_sw;
};

static struct joystick_config JSCONFIG = {
    .arc_rx = A0,
    .arc_ry = A1,
    .arc_sw = 2
};
#endif /*JOYSTICK_VARS*/

#endif /*VARS*/
