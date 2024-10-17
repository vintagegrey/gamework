cmake_minimum_required(VERSION 3.26)
project(gamework)

set(CMAKE_CXX_STANDARD 20)

add_executable(gamework src/main.cpp
        src/ecs/ecs.h
        src/ecs/id_manager.h
        src/ecs/id_manager.cpp
        src/util.h
)
