//
// Created by jimmy on 10/17/2024.
//
#include "entity_manager.h"

namespace gamework::ecs {

entity entity_manager::new_entity(id_manager *idm) {
    entity id = idm->new_id();

    infos[id] = {
            nullptr,
            id,
            -1
    };

    return id;
}

void entity_manager::kill_entity(id_manager *idm, entity e) {
    idm->kill_id(e);
}

entity_info *entity_manager::get_info(entity e) {
    auto it = infos.find(e);
    if (it != infos.end()) {
        return &it->second;
    }
    return nullptr;
}

}