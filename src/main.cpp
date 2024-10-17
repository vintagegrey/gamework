#include <iostream>
#include "ecs/world.h"

int main() {
    ecs::world w;

    auto jit = w.new_entity();
    auto bing = w.new_component<int>();

    return 0;
}
