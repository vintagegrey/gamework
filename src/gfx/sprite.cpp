//
// Created by jimmy on 10/20/2024.
//
#include "sprite.h"
#include "../core/util.h"
#include <SDL_image.h>

gfx::sprite::sprite() : data(nullptr), info() {}

gfx::sprite::sprite(const std::string &path, const gfx::renderer *r) {
    ASSERT(r, "renderer not initialized while loading '" << path << "'.")

    if (!(data = IMG_LoadTexture(r->get_renderer(), path.c_str()))) {
        ERROR("failed to load sprite '" << path << "': " << IMG_GetError());
    }

    SDL_QueryTexture(data, nullptr, nullptr, &info.size.x, &info.size.y);
}

gfx::_::sprite_info gfx::sprite::get_info() const {
    return info;
}
