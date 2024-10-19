#include <iostream>
#include <chrono>
#include "../gfx/graphics_device.h"

int main(int argc, char *argv[]) {
    auto s = std::chrono::high_resolution_clock::now();

    gfx::graphics_device bruh;

    auto e = std::chrono::high_resolution_clock::now();
    auto dur = std::chrono::duration_cast<std::chrono::microseconds>(e - s).count();
    std::cout << dur << " microseconds\n";

    return 0;
}
