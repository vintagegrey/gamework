//
// Created by jimmy on 10/19/2024.
//
#include "window.h"
#include "../core/util.h"

namespace gamework::gfx {

window::window() : info({ DEFAULT_W, DEFAULT_H }, DEFAULT_WINDOW_MODE) {}

SDL_Window *window::get_window_context() const {
    return sdl_window;
}

void window::init() {
    sdl_window =
            SDL_CreateWindow(
                    DEFAULT_TITLE,
                    SDL_WINDOWPOS_CENTERED,
                    SDL_WINDOWPOS_CENTERED,
                    info.resolution.x,
                    info.resolution.y,
                    SDL_WINDOW_ALLOW_HIGHDPI);
    ASSERT(sdl_window, "failed to init SDL window: " << SDL_GetError())
}

window_info window::get_info() const {
    return info;
}

}