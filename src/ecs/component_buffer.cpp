//
// Created by jimmy on 10/17/2024.
//
#include "component_buffer.h"

namespace gamework::ecs {

component_buffer::component_buffer(component_info *ci) : info(ci), size(0), capacity(CB_INIT_RESERVE) {
    data = std::malloc(info->size * capacity);
    ASSERT(data, "allocation failed.")
}

void component_buffer::add(void *d) {
    if (capacity == size) {
        capacity *= 2;
        data = std::realloc(data, info->size * capacity);
    }

    void *dst = (char *) data + (size * info->size);
    std::memcpy(dst, d, info->size);
    size++;
}

void *component_buffer::get(size_t idx) {
    if (idx >= size) {
        ERROR("index out of bounds.");
        return nullptr;
    }

    return (char *) data + (idx * info->size);
}

}