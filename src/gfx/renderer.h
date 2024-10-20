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

namespace gfx {

/** Renderer config data */
namespace _ {
struct renderer_info {
    /** @todo: renderer info */
};
}

class renderer {
private:
    SDL_Renderer *sdl_renderer;
    _::renderer_info info;

public:
    renderer(const window *w);
    SDL_Renderer *get_renderer() const;
};

}

#endif //GAMEWORK_RENDERER_H