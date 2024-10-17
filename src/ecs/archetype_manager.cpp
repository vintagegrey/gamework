//
// Created by jimmy on 10/17/2024.
//
#include "archetype_manager.h"

ecs::archetype *ecs::archetype_manager::ensure_archetype(ecs::type t) {
    auto it = archetypes.find(t);
    if (it != archetypes.end()) {
        return &it->second;
    }
    return &(archetypes[t] = {
            t
    });
}
