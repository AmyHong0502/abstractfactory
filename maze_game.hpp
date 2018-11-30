//
// Created by Amy Hong on 2018-11-29.
//

#ifndef ABSTRACTFACTORY_MAZE_GAME_HPP
#define ABSTRACTFACTORY_MAZE_GAME_HPP

#include "interface/maze_factory.hpp"

/**
 * Maze game.
 */
class maze_game {

public:

    /**
     * Constructor of this maze game.
     */
    maze_game();

    /**
     * Creates a maze.
     *
     * @param mf maze factory to be used
     * @return maze
     */
    maze *create_maze(maze_factory &mf);

};

#endif //ABSTRACTFACTORY_MAZE_GAME_HPP
