//
// Created by jimmy on 10/17/2024.
//
#include "type.h"

namespace gamework::ecs {

constexpr size_t GOLDEN_RATIO = 0x9e3779b9;

void type::add(component c) {
    set.insert(c);
}

void type::remove(component c) {
    set.erase(c);
}

bool type::has(component c) {
    return set.contains(c);
}

size_t type::get_index(component c) {
    return std::distance(set.find(c), set.end());
}

size_t type::hash() const {
    size_t hash = 0;
    std::hash<component> hasher;

    for (const component &c : set) {
        hash ^= hasher(c) + GOLDEN_RATIO + (hash >> 2) + (hash << 6);
    }

    return hash;
}

bool type::operator==(const type &t) const {
    return set == t.set;
}

}