/**
 * @file: graphics_device
 * @brief: encapsulates SDL graphics functionality
 * @author: jimmy
 * @date: 10/19/2024 at 5:47 PM
 */

#ifndef GAMEWORK_GRAPHICS_DEVICE_H
#define GAMEWORK_GRAPHICS_DEVICE_H

#include "window.h"

namespace gfx {

class graphics_device {
private:
    window window;

public:
    graphics_device();
};

}

#endif //GAMEWORK_GRAPHICS_DEVICE_H
