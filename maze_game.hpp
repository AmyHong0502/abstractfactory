//
// Created by Amy Hong on 2018-11-29.
//

#ifndef ABSTRACTFACTORY_MAZE_GAME_HPP
#define ABSTRACTFACTORY_MAZE_GAME_HPP

#include "maze_factory.hpp"

class maze_game {

    maze *create_maze(maze_factory &mf);

};

#endif //ABSTRACTFACTORY_MAZE_GAME_HPP
