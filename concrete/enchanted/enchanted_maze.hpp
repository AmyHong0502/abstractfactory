//
// Created by Amy Hong on 2018-11-29.
//

#ifndef ABSTRACTFACTORY_ENCHANTED_MAZE_HPP
#define ABSTRACTFACTORY_ENCHANTED_MAZE_HPP

#include "../../interface/maze.hpp"

/**
 * Enchanted faery land maze.
 * Concrete implementation of class maze.
 */
class enchanted_maze : virtual public maze {

public:

    /**
     * Constructor of this enchanted faery land maze.
     */
    enchanted_maze() {
        print();
    }

    /**
     * Destructor of this enchanted faery land maze.
     */
    ~enchanted_maze() override {
        for (room *r: rooms) {
            delete r;
        }
        for (door *d: doors) {
            delete d;
        }
    }

    /**
     * Adds a room into this enchanted faery land maze.
     *
     * @param r room to add.
     */
    void add_room(room *r) override {
        rooms.push_back(r);
    }

    /**
     * Adds a door into this enchanted faery land maze.
     *
     * @param r door to add.
     */
    void add_door(door *d) override {
        doors.push_back(d);
    }

    /**
     * Prints information about this enchanted faery land maze.
     */
    void print() override {
        std::cout << "enchanted maze" << std::endl;
    }
};

#endif //ABSTRACTFACTORY_ENCHANTED_MAZE_HPP
