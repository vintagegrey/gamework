/**
 * @file: archetype_manager
 * @brief: Manages all archetypes in the world
 * @author: jimmy
 * @date: 10/17/2024 at 4:59 PM
 */

#ifndef GAMEWORK_ARCHETYPE_MANAGER_H
#define GAMEWORK_ARCHETYPE_MANAGER_H

#include <unordered_map>
#include "archetype.h"
#include "type.h"
#include "component_manager.h"

namespace ecs {

/** Handles archetype creation */
class archetype_manager {
private:
    std::unordered_map<type, archetype> archetypes;

public:
    [[nodiscard]] archetype *ensure_archetype(type t, component_manager *cm);
};

}

#endif //GAMEWORK_ARCHETYPE_MANAGER_H
