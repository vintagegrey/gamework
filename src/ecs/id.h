//
// Created by jimmy on 10/17/2024.
//

#ifndef GAMEWORK_ID_H
#define GAMEWORK_ID_H

#include <cstdint>

#define ECS_ID_UID(_e)              ((uint32_t) _e)
#define ECS_ID_GEN(_e)              ((_e >> 32) & 0xFFFF)
#define ECS_ID_FLG(_e)              ((_e >> 48) & 0xFFFF)
#define ECS_ID_GEN_ADD(_e)          (((uint64_t)_e & ~(0xFFFFULL << 32)) | (((ECS_ID_GEN(_e) + 1) & 0xFFFF) << 32))
#define ECS_ID_BUILD(_u)            (((uint64_t) 0x0 << 48) | ((uint64_t) 0x0 << 32) | _u)

namespace gamework::ecs {

using id = uint64_t;
using entity = id;
using component = id;

}

#endif //GAMEWORK_ID_H
