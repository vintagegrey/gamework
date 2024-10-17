/**
 * @file: world
 * @brief: Main ECS class
 * @author: jimmy
 * @date: 10/17/2024 at 4:32 PM
 */

#ifndef GAMEWORK_WORLD_H
#define GAMEWORK_WORLD_H

#include "id_manager.h"
#include "entity_manager.h"
#include "component_manager.h"

namespace ecs {

struct world_config {
    /** Unknown components are defined automatically if assigned to an entity */
    bool implicit_components;
};

struct world_stats {
    uint32_t entity_count;
    uint32_t component_count;
    uint32_t archetype_count;
};

struct world_data {
    id_manager ids;
    entity_manager entities;
    component_manager components;
};

/** Main class that encapsulates all ECS functionality */
class world {
private:
    world_config config;
    world_stats stats;
    world_data data;

public:
    world();
    world(world_config cfg);

    entity new_entity();

    template <typename T>
    component new_component() {
        stats.component_count++;
        return data.components.new_component<T>(&data.ids);
    }
};

}

#endif //GAMEWORK_WORLD_H
