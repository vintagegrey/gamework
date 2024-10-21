#include <iostream>
#include <chrono>
#include "../gfx/graphics_device.h"
#include "../gfx/sprite.h"

int main(int argc, char *argv[]) {
    gfx::graphics_device gd;
    gfx::sprite spr("../src/test/art/null.png", &gd.renderer);

    return 0;
}
