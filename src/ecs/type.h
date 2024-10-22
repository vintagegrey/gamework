/**
 * @file: type
 * @brief: Structure for representing component combinations
 * @author: jimmy
 * @date: 10/17/2024 at 4:26 PM
 */

#ifndef GAMEWORK_TYPE_H
#define GAMEWORK_TYPE_H

#include <set>
#include "id.h"

namespace gamework::ecs {

/** Represents a combination of components, used for archetypes */
struct type {
    std::set<component> set;

    void add(component c);
    void remove(component c);
    bool has(component c);
    size_t get_index(component c);
    [[nodiscard]] size_t hash() const;
    bool operator==(const type &t) const;
};

}

/** Hashing implementation */
namespace std {
    template <>
    struct hash<gamework::ecs::type> {
        size_t operator()(const gamework::ecs::type &t) const {
            return t.hash();
        }
    };
}

#endif //GAMEWORK_TYPE_H
