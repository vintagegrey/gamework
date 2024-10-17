/**
 * @file: archetype
 * @brief: Archetype system for ECS
 * @author: jimmy
 * @date: 10/17/2024 at 4:01 PM
 */

#ifndef GAMEWORK_ARCHETYPE_H
#define GAMEWORK_ARCHETYPE_H

#include "type.h"

namespace ecs {

/** Stores entities of a specific combination of components */
class archetype {
    type type;
};

}

#endif //GAMEWORK_ARCHETYPE_H
