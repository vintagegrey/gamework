//
// Created by jimmy on 10/20/2024.
//
#include "sprite.h"
#include <SDL_image.h>

gfx::sprite::sprite() : data(nullptr), info() {}

gfx::sprite::sprite(const std::string &path, const gfx::renderer *r) {
    data = IMG_LoadTexture(r->get_renderer(), path.c_str());
}