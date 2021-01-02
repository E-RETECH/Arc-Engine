#include <arc/engine/io/system_io.hpp>
#include <assert.h>

using namespace arc_input;

int main() {
    Joystick* js = new Joystick();
    assert(sizeof(js->config) != 0);
    free(js);
}
