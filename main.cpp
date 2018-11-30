#include <iostream>
#include "concrete/enchanted/enchanted_faery_land_maze_factory.hpp"
#include "maze_game.hpp"
#include "concrete/futuristic/futuristic_dystopian_maze_factory.hpp"

int main() {
    enchanted_faery_land_maze_factory e_mf;
    futuristic_dystopian_maze_factory f_mf;

    maze_game maze_game;

    maze * e_maze = maze_game.create_maze(e_mf);
    maze * f_maze = maze_game.create_maze(f_mf);

    delete e_maze;
    delete f_maze;

    return 0;
}