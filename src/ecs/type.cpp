//
// Created by jimmy on 10/17/2024.
//
#include "type.h"

void ecs::type::add(ecs::component c) {
    set.insert(c);
}

void ecs::type::remove(ecs::component c) {
    set.erase(c);
}

bool ecs::type::has(ecs::component c) {
    return set.contains(c);
}

size_t ecs::type::get_index(ecs::component c) {
    return std::distance(set.find(c), set.end());
}

