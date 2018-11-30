//
// Created by Amy Hong on 2018-11-29.
//

#ifndef ABSTRACTFACTORY_MAZE_HPP
#define ABSTRACTFACTORY_MAZE_HPP

#include "door.hpp"

/**
 * Abstract maze interface.
 */
class maze {

protected:

    /**
     * Rooms in this maze.
     */
    std::vector<room *> rooms;

    /**
     * Doors in this maze.
     */
    std::vector<door *> doors;

public:

    /**
     * Destructor of this maze.
     */
    virtual ~maze() = default;

    /**
     * Adds a room into this maze.
     *
     * @param r room to add.
     */
    virtual void add_room(room *r) = 0;

    /**
     * Adds a door into this maze.
     *
     * @param r door to add.
     */
    virtual void add_door(door *d) = 0;

    /**
     * Prints information about this maze.
     */
    virtual void print() = 0;

};

#endif //ABSTRACTFACTORY_MAZE_HPP
