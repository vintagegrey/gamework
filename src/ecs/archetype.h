/**
 * @file: archetype
 * @brief: Archetype system for ECS
 * @author: jimmy
 * @date: 10/17/2024 at 4:01 PM
 */

#ifndef GAMEWORK_ARCHETYPE_H
#define GAMEWORK_ARCHETYPE_H

#include <vector>
#include "type.h"
#include "component_buffer.h"
#include "component_manager.h"

namespace gamework::ecs {

/** @todo: Archetype graph */

/** Stores entities of a specific combination of components */
struct archetype {
    std::vector<component_buffer> components;
    type type;

    archetype();
    explicit archetype(struct type t, component_manager *cm);
};

}

#endif //GAMEWORK_ARCHETYPE_H
