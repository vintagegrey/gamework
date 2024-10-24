//
// Created by jimmy on 10/17/2024.
//
#include "id_manager.h"
#include "../core/util.h"

namespace gamework::ecs {

id_manager::id_manager() : alive(0) {
    ids.reserve(EM_INIT_RESERVE);
}

entity ecs::id_manager::new_id() {
    if (alive != ids.size()) {
        return ids[alive++];
    }

    id id = ECS_ID_BUILD(alive++);
    ids.push_back(id);
    return id;
}

void id_manager::kill_id(id e) {
    auto uid = ECS_ID_UID(e);

    if (uid >= ids.size()) {
        return;
    }

    uint32_t last_alive = alive - 1;
    std::swap(ids[last_alive], ids[uid]);
    ids[last_alive] = ECS_ID_GEN_ADD(e);
    alive--;
}

}