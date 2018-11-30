cmake_minimum_required(VERSION 3.12)
project(abstractfactory)

set(CMAKE_CXX_STANDARD 14)

add_executable(abstractfactory main.cpp maze.hpp wall.hpp room.hpp maze_factory.hpp door.hpp maze_game.cpp maze_game.hpp enchanted_faery_land_maze_factory.cpp enchanted_faery_land_maze_factory.hpp futuristic_dystopian_maze_factory.cpp futuristic_dystopian_maze_factory.hpp)
