//
// Created by Amy Hong on 2018-11-29.
//

#ifndef ABSTRACTFACTORY_FUTURISTIC_MAZE_HPP
#define ABSTRACTFACTORY_FUTURISTIC_MAZE_HPP

#include "../../interface/maze.hpp"

/**
 * Futuristic dystopian maze.
 * Concrete implementation of class maze.
 */
class futuristic_maze : virtual public maze {
public:

    /**
     * Constructor of this futuristic dystopian maze.
     */
    futuristic_maze();

    /**
     * Destructor of this futuristic dystopian maze.
     */
    ~futuristic_maze() override;

    /**
     * Adds a room into this futuristic dystopian maze.
     *
     * @param r room to add.
     */
    void add_room(room *r) override;

    /**
     * Adds a door into this futuristic dystopian maze.
     *
     * @param r door to add.
     */
    void add_door(door *d) override;

    /**
     * Prints information about this futuristic dystopian maze.
     */
    void print() override;
};

#endif //ABSTRACTFACTORY_FUTURISTIC_MAZE_HPP
