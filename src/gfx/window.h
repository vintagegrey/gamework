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

namespace gamework::gfx {

constexpr int DEFAULT_W = 640;
constexpr int DEFAULT_H = 480;
constexpr const char *DEFAULT_TITLE = "Untitled";
constexpr window_mode DEFAULT_WINDOW_MODE = WM_WINDOWED;

/** Window config data */
struct window_info {
    v2i resolution;
    window_mode mode;
};

class window {
private:
    SDL_Window *sdl_window;
    window_info info;

public:
    window();
    void init();
    [[nodiscard]] SDL_Window *get_window_context() const;
    [[nodiscard]] window_info get_info() const;
};

}

#endif //GAMEWORK_WINDOW_H
