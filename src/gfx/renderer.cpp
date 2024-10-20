//
// Created by jimmy on 10/20/2024.
//
#include "renderer.h"
#include "../core/util.h"

gfx::renderer::renderer(const gfx::window *w) {
    sdl_renderer =
            SDL_CreateRenderer(
                    w->get_window_context(),
                    -1,
                    SDL_RENDERER_PRESENTVSYNC);
    ASSERT(sdl_renderer, "failed to init SDL renderer: " << SDL_GetError())
}

SDL_Renderer *gfx::renderer::get_renderer() const {
    return sdl_renderer;
}
