//
// Created by jimmy on 10/17/2024.
//

#ifndef GAMEWORK_ECS_H
#define GAMEWORK_ECS_H

#include <cstdint>

#define ECS_ENTITY_UID(_e)              ((uint32_t) _e)
#define ECS_ENTITY_GEN(_e)              ((_e >> 32) & 0xFFFF)
#define ECS_ENTITY_FLG(_e)              ((_e >> 48) & 0xFFFF)

#define ECS_ENTITY_GEN_ADD(_e)          (((uint64_t)_e & ~(0xFFFFULL << 32)) | (((ECS_ENTITY_GEN(_e) + 1) & 0xFFFF) << 32))
#define ECS_ENTITY_BUILD(_u)            (((uint64_t) 0x0 << 48) | ((uint64_t) 0x0 << 32) | _u)

namespace ecs {

using id = uint64_t;
using entity = id;
using component = id;

}

#endif //GAMEWORK_ECS_H
