//
// Created by Amy Hong on 2018-11-29.
//

#ifndef ABSTRACTFACTORY_MAZE_FACTORY_HPP
#define ABSTRACTFACTORY_MAZE_FACTORY_HPP

#include "maze.hpp"

/**
 * Abstract maze factory interface.
 */
class maze_factory {

public:

    /**
     * Builds a maze.
     *
     * @return a pointer that points to a maze.
     */
    virtual maze *make_maze() = 0;

    /**
     * Builds a wall.
     *
     * @return a pointer that points to a wall.
     */
    virtual wall *make_wall() = 0;

    /**
     * Builds a room.
     *
     * @return a pointer that points to a room.
     */
    virtual room *make_room() = 0;

    /**
     * Builds a door.
     *
     * @return a pointer that points to a door.
     */
    virtual door *make_door(room &r1, room &r2) = 0;

};

#endif //ABSTRACTFACTORY_MAZE_FACTORY_HPP
