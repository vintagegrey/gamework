/**
 * @file: window
 * @brief: SDL window wrapper
 * @author: jimmy
 * @date: 10/19/2024 at 5:48 PM
 */

#ifndef GAMEWORK_WINDOW_H
#define GAMEWORK_WINDOW_H

#include <SDL.h>
#include "../core/vec.h"
#include "window_mode.h"

namespace gfx {

struct window_info {
    v2i resolution;
    window_mode mode;
};

class window {
private:
    SDL_Window *sdl_window;
    window_info info;

public:

};

}

#endif //GAMEWORK_WINDOW_H
