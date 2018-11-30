//
// Created by Amy Hong on 2018-11-29.
//

#include "maze_game.hpp"
#include "enchanted_faery_land_maze_factory.hpp"

maze_game::maze_game() {
    std::cout << "*** Maze game ***" << std::endl;
}

maze *maze_game::create_maze(maze_factory &mf) {
    return mf.make_maze();
}
