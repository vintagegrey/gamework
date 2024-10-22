/**
 * @file: renderer
 * @brief: Lorem ipsem dolor sit amet
 * @author: jimmy
 * @date: 10/20/2024 at 8:46 AM
 */

#ifndef GAMEWORK_RENDERER_H
#define GAMEWORK_RENDERER_H

#include <SDL.h>
#include "window.h"

namespace gamework::gfx {

/** Renderer config data */
struct renderer_info {
    /** @todo: renderer info */
};

class renderer {
private:
    SDL_Renderer *sdl_renderer;
    renderer_info info;

public:
    renderer();
    void init(const window *w);
    [[nodiscard]] SDL_Renderer *get_renderer() const;
    [[nodiscard]] renderer_info get_info() const;
};

}

#endif //GAMEWORK_RENDERER_H
