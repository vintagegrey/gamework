#include <iostream>
#include "ecs/id_manager.h"

int main() {
    ecs::id_manager idm;
    auto jit = idm.new_id();
    idm.kill_id(jit);
    auto jit2 = idm.new_id();

    return 0;
}
