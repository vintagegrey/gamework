//
// Created by jimmy on 10/17/2024.
//
#include "entity_manager.h"

ecs::entity ecs::entity_manager::new_entity(ecs::id_manager *idm) {
    entity id = idm->new_id();

    infos[id] = {
            id,
            -1
    };

    return id;
}

void ecs::entity_manager::kill_entity(ecs::id_manager *idm, ecs::entity e) {
    idm->kill_id(e);
}

ecs::entity_info *ecs::entity_manager::get_info(ecs::entity e) {
    auto it = infos.find(e);
    if (it != infos.end()) {
        return &it->second;
    }
    return nullptr;
}
