//
// Created by jimmy on 10/20/2024.
//
#include "sprite.h"
#include "../core/util.h"
#include <SDL_image.h>

namespace gamework::gfx {

sprite::sprite() : data(nullptr), info() {}

sprite::sprite(const std::string &path, const renderer *r) {
    ASSERT(r, "renderer not initialized while loading '" << path << "'.")

    if (!(data = IMG_LoadTexture(r->get_renderer(), path.c_str()))) {
        ERROR("failed to load sprite '" << path << "': " << IMG_GetError());
    }

    SDL_QueryTexture(data, nullptr, nullptr, &info.size.x, &info.size.y);
}

sprite_info sprite::get_info() const {
    return info;
}

}