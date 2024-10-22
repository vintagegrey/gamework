//
// Created by jimmy on 10/17/2024.
//
#include "component_manager.h"

namespace gamework::ecs {

component_info *component_manager::get_info(component c) {
    auto it = infos.find(c);
    if (it != infos.end()) {
        return &it->second;
    }

    return nullptr;
}

}