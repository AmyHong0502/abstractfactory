#include "concrete/enchanted/enchanted_faery_land_maze_factory.hpp"
#include "maze_game.hpp"
#include "concrete/futuristic/futuristic_dystopian_maze_factory.hpp"

int main() {
    enchanted_faery_land_maze_factory e_mf;
    futuristic_dystopian_maze_factory f_mf;

    maze_game maze_game;

    maze_game.create_maze(e_mf);
    maze_game.create_maze(f_mf);

    return 0;
}