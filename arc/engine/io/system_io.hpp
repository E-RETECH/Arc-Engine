#ifndef ARC_INPUT
#define ARC_INPUT

#include <arc/engine/__init__.hpp>
#include <arc/engine/io/var.hpp>

namespace arc_input {
    class Joystick;
}

class arc_input::Joystick {
    private:

    public:
        struct joystick_config config;

        Joystick(struct joystick_config);
        ~Joystick();
};

arc_input::Joystick::Joystick(struct joystick_config config=JSCONFIG): config(config) {}
arc_input::Joystick::~Joystick() {}

#endif /*ARC_INPUT*/
