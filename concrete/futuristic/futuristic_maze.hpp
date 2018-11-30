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
    futuristic_maze() {
        print();
    }

    /**
     * Destructor of this futuristic dystopian maze.
     */
    ~futuristic_maze() override {
        for (room *r: rooms) {
            delete r;
        }
        for (door *d: doors) {
            delete d;
        }
    }

    /**
     * Adds a room into this futuristic dystopian maze.
     *
     * @param r room to add.
     */
    void add_room(room *r) override {
        rooms.push_back(r);
    }

    /**
     * Adds a door into this futuristic dystopian maze.
     *
     * @param r door to add.
     */
    void add_door(door *d) override {
        doors.push_back(d);
    }

    /**
     * Prints information about this futuristic dystopian maze.
     */
    void print() override {
        std::cout << "futuristic maze" << std::endl;
    }
};


#endif //ABSTRACTFACTORY_FUTURISTIC_MAZE_HPP
