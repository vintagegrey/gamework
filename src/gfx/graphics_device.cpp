//
// Created by jimmy on 10/19/2024.
//
#include "graphics_device.h"
#include "../core/util.h"

gfx::graphics_device::graphics_device() {
    ASSERT(!SDL_Init(SDL_INIT_VIDEO), "failed to init SDL: " << SDL_GetError())
    window.init();
    renderer.init(&window);
}
