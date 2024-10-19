/**
 * @file: component_buffer
 * @brief: Lorem ipsem dolor sit amet
 * @author: jimmy
 * @date: 10/17/2024 at 7:34 PM
 */

#ifndef GAMEWORK_COMPONENT_BUFFER_H
#define GAMEWORK_COMPONENT_BUFFER_H

#include "component_manager.h"

namespace ecs {

constexpr size_t CB_INIT_RESERVE = 16;

/** @todo: component removal and archetype switching */
class component_buffer {
private:
    void *data;
    component_info *info;
    size_t size, capacity;

public:
    explicit component_buffer(component_info *ci);
    void add(void *d);
    void *get(size_t idx);

};

}

#endif //GAMEWORK_COMPONENT_BUFFER_H
