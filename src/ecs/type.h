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

namespace ecs {

/** Represents a combination of components, used for archetypes */
struct type {
    std::set<component> set;

    void add(component c);
    void remove(component c);
    bool has(component c);
    size_t get_index(component c);
};

}

#endif //GAMEWORK_TYPE_H
