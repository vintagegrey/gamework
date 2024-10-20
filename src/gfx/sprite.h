/**
 * @file: sprite
 * @brief: Lorem ipsem dolor sit amet
 * @author: jimmy
 * @date: 10/20/2024 at 8:57 AM
 */

#ifndef GAMEWORK_SPRITE_H
#define GAMEWORK_SPRITE_H

#include <SDL.h>
#include <string>
#include "../core/vec.h"
#include "renderer.h"

namespace gfx {

/** Sprite metadata */
namespace _ {
struct sprite_info {
    v2i size;
    std::string name;
};
}

class sprite {
private:
    SDL_Texture *data;

public:
    const _::sprite_info info;

    sprite();
    explicit sprite(const std::string &path, const renderer *r);
};

}

#endif //GAMEWORK_SPRITE_H
