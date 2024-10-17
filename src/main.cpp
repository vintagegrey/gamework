#include <iostream>
#include "ecs/world.h"

int main() {
    ecs::world w;

    auto jit = w.new_entity();
    w.assign(jit, 5);

    return 0;
}
