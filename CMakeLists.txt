cmake_minimum_required(VERSION 3.26)
project(gamework VERSION 0.0.1 DESCRIPTION "gamework alpha")
set(CMAKE_CXX_STANDARD 20)

add_library(gamework SHARED
        src/test/main.cpp
        src/ecs/id_manager.h
        src/ecs/id_manager.cpp
        src/core/util.h
        src/ecs/entity_manager.cpp
        src/ecs/entity_manager.h
        src/ecs/id.h
        src/ecs/component_manager.cpp
        src/ecs/component_manager.h
        src/ecs/archetype.cpp
        src/ecs/archetype.h
        src/ecs/type.cpp
        src/ecs/type.h
        src/ecs/world.cpp
        src/ecs/world.h
        src/ecs/archetype_manager.cpp
        src/ecs/archetype_manager.h
        src/ecs/component_buffer.cpp
        src/ecs/component_buffer.h
        src/gfx/graphics_device.cpp
        src/gfx/graphics_device.h
        src/gfx/window.cpp
        src/gfx/window.h
        src/core/vec.h
        src/gfx/window_mode.h
        src/core/metadata.cpp
        src/core/metadata.h
        src/gfx/renderer.cpp
        src/gfx/renderer.h
        src/gfx/sprite.cpp
        src/gfx/sprite.h
        include/gamework.h
)

find_package(SDL2 CONFIG REQUIRED)
target_link_libraries(gamework
        PRIVATE
        $<TARGET_NAME_IF_EXISTS:SDL2::SDL2main>
        $<IF:$<TARGET_EXISTS:SDL2::SDL2>,SDL2::SDL2,SDL2::SDL2-static>
)

find_package(SDL2_image CONFIG REQUIRED)
target_link_libraries(gamework
        PRIVATE
        $<IF:$<TARGET_EXISTS:SDL2_image::SDL2_image>,SDL2_image::SDL2_image,SDL2_image::SDL2_image-static>)