//
// Created by jimmy on 10/17/2024.
//
#include "component_manager.h"

ecs::component_info *ecs::component_manager::get_info(ecs::component c) {
    auto it = infos.find(c);
    if (it != infos.end()) {
        return &it->second;
    }

    return nullptr;
}
