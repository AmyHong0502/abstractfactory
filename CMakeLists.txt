cmake_minimum_required(VERSION 3.12)
project(abstractfactory)

set(CMAKE_CXX_STANDARD 14)

add_executable(abstractfactory main.cpp interface/maze.hpp interface/wall.hpp interface/room.hpp interface/maze_factory.hpp interface/door.hpp maze_game.cpp maze_game.hpp concrete/enchanted/enchanted_faery_land_maze_factory.cpp concrete/enchanted/enchanted_faery_land_maze_factory.hpp concrete/futuristic/futuristic_dystopian_maze_factory.cpp concrete/futuristic/futuristic_dystopian_maze_factory.hpp concrete/enchanted/enchanted_wall.cpp concrete/enchanted/enchanted_wall.hpp concrete/enchanted/enchanted_door.cpp concrete/enchanted/enchanted_door.hpp concrete/futuristic/futuristic_door.cpp concrete/futuristic/futuristic_door.hpp concrete/futuristic/futuristic_maze.cpp concrete/futuristic/futuristic_maze.hpp concrete/enchanted/enchanted_maze.cpp concrete/enchanted/enchanted_maze.hpp concrete/futuristic/futuristic_room.cpp concrete/futuristic/futuristic_room.hpp concrete/enchanted/enchanted_room.cpp concrete/enchanted/enchanted_room.hpp concrete/futuristic/futuristic_wall.cpp concrete/futuristic/futuristic_wall.hpp)
