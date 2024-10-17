//
// Created by jimmy on 10/17/2024.
//
#include "type.h"

constexpr size_t GOLDEN_RATIO = 0x9e3779b9;

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

size_t ecs::type::hash() const {
    size_t hash = 0;
    std::hash<component> hasher;

    for (const component &c : set) {
        hash ^= hasher(c) + GOLDEN_RATIO + (hash >> 2) + (hash << 6);
    }

    return hash;
}

bool ecs::type::operator==(const ecs::type &t) const {
    return set == t.set;
}

