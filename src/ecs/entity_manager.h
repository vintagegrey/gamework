//
// Created by jimmy on 10/17/2024.
//

#ifndef GAMEWORK_ENTITY_MANAGER_H
#define GAMEWORK_ENTITY_MANAGER_H

#include <unordered_map>
#include "id_manager.h"

namespace ecs {

/** Holds information about entities */
struct entity_info {
    entity id;      /**< The entity's full ID */
    int32_t index;  /**< The entity's index in its archetype */
};

/** Handles creation of entities */
class entity_manager {
private:
    std::unordered_map<entity, entity_info> infos;

public:
    entity new_entity(id_manager *idm);
    void kill_entity(id_manager *idm, entity e);
    [[nodiscard]] entity_info *get_info(entity e);
};

}

#endif //GAMEWORK_ENTITY_MANAGER_H
