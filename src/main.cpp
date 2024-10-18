#include <iostream>
#include "ecs/world.h"

int main() {
    ecs::world w;

    auto jit = w.new_entity();
    w.assign(jit, 547);

    return 0;
}
