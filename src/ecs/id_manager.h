//
// Created by jimmy on 10/17/2024.
//

#ifndef GAMEWORK_ID_MANAGER_H
#define GAMEWORK_ID_MANAGER_H

#include <vector>
#include "id.h"

namespace ecs {

constexpr size_t EM_INIT_RESERVE = 128;

/** Handles ID creation and recycling */
class id_manager {
private:
    std::vector<id> ids;
    uint32_t alive;

public:
    id_manager();
    [[nodiscard]] id new_id();
    void kill_id(id e);
};

}

#endif //GAMEWORK_ID_MANAGER_H
