//
// Created by jimmy on 10/17/2024.
//
#include "world.h"

constexpr bool WORLD_IMPLICIT_DEFAULT = true;

ecs::world::world() {
    config = {
            WORLD_IMPLICIT_DEFAULT
    };
    stats = {0};
}

ecs::world::world(ecs::world_config cfg) : config(cfg) {}

ecs::entity ecs::world::new_entity() {
    stats.entity_count++;
    return data.entities.new_entity(&data.ids);
}
