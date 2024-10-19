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
#include "archetype_manager.h"

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
    archetype_manager archetypes;
};

/** Main class that encapsulates all ECS functionality */
class world {
private:
    world_config config;
    world_stats stats;
    world_data data;

    archetype *ensure_archetype(type t);

    template <typename T>
    component_info *ensure_component() {
        /** @todo: Figure this stupid shit out */
        //stats.component_count++;
        return data.components.ensure_component<T>(&data.ids);
    }

public:
    world();
    explicit world(world_config cfg);

    entity new_entity();

    template <typename T>
    component new_component() {
        stats.component_count++;
        return data.components.new_component<T>(&data.ids);
    }

    /** Assign a component to an entity */
    template <typename T>
    void assign(entity e, const T &c) {
        entity_info *ei = data.entities.get_info(e);
        if (!ei) {
            return;
        }

        component_info *ci;
        if (config.implicit_components) {
            ci = ensure_component<T>();
        } else {
            ci = data.components.get_info<T>();
        }

        if (!ci) {
            return;
        }

        type t;
        if (ei->archetype) {
            t = ei->archetype->type;
        }
        t.add(ci->id);

        ei->archetype = ensure_archetype(t);
    }
};

}

#endif //GAMEWORK_WORLD_H
