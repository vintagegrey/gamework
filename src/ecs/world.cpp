//
// Created by jimmy on 10/17/2024.
//
#include "world.h"

namespace gamework::ecs {

constexpr bool WORLD_IMPLICIT_DEFAULT = true;

world::world() {
    config = {
            WORLD_IMPLICIT_DEFAULT
    };
    stats = {0};
}

world::world(world_config cfg) : config(cfg) {}

entity ecs::world::new_entity() {
    stats.entity_count++;
    return data.entities.new_entity(&data.ids);
}

archetype *ecs::world::ensure_archetype(type t) {
    stats.archetype_count++;
    return data.archetypes.ensure_archetype(t, &data.components);
}

}