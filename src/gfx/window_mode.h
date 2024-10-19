//
// Created by jimmy on 10/19/2024.
//

#ifndef GAMEWORK_WINDOW_MODE_H
#define GAMEWORK_WINDOW_MODE_H

#include <SDL.h>

namespace gfx {

enum window_mode {
    WM_WINDOWED     = 0,
    WM_BORDERLESS   = SDL_WINDOW_FULLSCREEN_DESKTOP,
    WM_FULLSCREEN   = SDL_WINDOW_FULLSCREEN
};

}

#endif //GAMEWORK_WINDOW_MODE_H
