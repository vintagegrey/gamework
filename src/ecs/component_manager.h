/**
 * @file: component_manager.h
 * @brief: Handles component creation
 * @author: James Henry
 * @date: 10/17/2024
 */

#ifndef GAMEWORK_COMPONENT_MANAGER_H
#define GAMEWORK_COMPONENT_MANAGER_H

#include <unordered_map>
#include <typeindex>
#include "id_manager.h"
#include "../util.h"

namespace ecs {

struct component_info {
    size_t size;    /**< Size in bytes */
    size_t align;   /**< Byte alignment */
};

/** Handles component creation */
class component_manager {
private:
    std::unordered_map<component, component_info> infos;
    std::unordered_map<std::type_index, component> type_to_id;

public:

    template <typename T>
    component new_component(id_manager *idm) {
        component id = idm->new_id();

        infos[id] = {
                sizeof(T),
                alignof(T)
        };

        type_to_id[typeid(T)] = id;

        return id;
    }

    template <typename T>
    component get_id() {
        auto it = type_to_id.find(typeid(T));
        if (it != type_to_id.end()) {
            return it->second;
        }

        ERROR("no such component type '" << typeid(T).name() << "'.");
        return -1;
    }

    component_info *get_info(component c);

    template <typename T>
    component_info *get_info() {
        return get_info(get_id<T>());
    }
};

}

#endif //GAMEWORK_COMPONENT_MANAGER_H
