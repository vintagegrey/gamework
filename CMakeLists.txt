cmake_minimum_required(VERSION 3.26)
project(gamework)

set(CMAKE_CXX_STANDARD 20)

add_executable(gamework src/main.cpp
        src/ecs/id_manager.h
        src/ecs/id_manager.cpp
        src/util.h
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
)
