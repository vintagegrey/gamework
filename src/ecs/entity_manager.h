/**
 * @file: entity_manager.h
 * @brief: Handles entity creation
 * @author: James Henry
 * @date: 10/17/2024
 */

#ifndef GAMEWORK_ENTITY_MANAGER_H
#define GAMEWORK_ENTITY_MANAGER_H

#include <unordered_map>
#include "id_manager.h"
#include "archetype.h"

namespace ecs {

struct entity_info {
    archetype *archetype;   /**< What archetype this entity belongs in */
    entity id;              /**< The entity's full ID */
    int32_t index;          /**< The entity's index in its archetype */
};

/** Handles entity creation */
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
