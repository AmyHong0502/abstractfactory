cmake_minimum_required(VERSION 3.12)
project(abstractfactory)

set(CMAKE_CXX_STANDARD 14)

set(GCC_COVERAGE_COMPILE_FLAGS "-Wall -Wextra -pedantic -std=c++14")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}")

add_executable(abstractfactory main.cpp maze_factory.cpp maze.cpp maze.hpp wall.cpp wall.hpp room.cpp room.hpp maze_factory.hpp door.cpp door.hpp maze_game.cpp maze_game.hpp)
