//
// Created by jimmy on 10/20/2024.
//
#include "renderer.h"
#include "../core/util.h"

gfx::renderer::renderer() : sdl_renderer(nullptr) {}

SDL_Renderer *gfx::renderer::get_renderer() const {
    return sdl_renderer;
}

void gfx::renderer::init(const gfx::window *w) {
    sdl_renderer =
            SDL_CreateRenderer(
                    w->get_window_context(),
                    -1,
                    SDL_RENDERER_PRESENTVSYNC);
    ASSERT(sdl_renderer, "failed to init SDL renderer: " << SDL_GetError())
}

gfx::_::renderer_info gfx::renderer::get_info() const {
    return info;
}
