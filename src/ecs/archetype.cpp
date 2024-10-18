//
// Created by jimmy on 10/17/2024.
//
#include "archetype.h"
#include <utility>

ecs::archetype::archetype() {}

ecs::archetype::archetype(ecs::type t, ecs::component_manager *cm) : type(std::move(t))  {
    for (const component &c : type.set) {
        components.emplace_back(cm->get_info(c));
    }
}
