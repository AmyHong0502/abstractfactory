//
// Created by Amy Hong on 2018-11-29.
//

#ifndef ABSTRACTFACTORY_ENCHANTED_ROOM_HPP
#define ABSTRACTFACTORY_ENCHANTED_ROOM_HPP

#include "../../interface/room.hpp"

/**
 * Room for enchanted faery land maze.
 * Concrete implementation of class room.
 */
class enchanted_room : virtual public room {
public:

    /**
     * Constructor of this enchanted room.
     */
    enchanted_room() {
        print();
    }

    /**
     * Destructor of this enchanted room.
     */
    ~enchanted_room() override {
        for (wall *w: walls) {
            delete w;
        }
    }

    /**
     * Builds a wall for this enchanted room.
     *
     * @param w wall to build
     */
    void build_wall(wall *w) override {
        walls.push_back(w);
    }

    /**
     * Prints information of this enchanted room.
     */
    void print() override {
        std::cout << "enchanted room" << std::endl;
    }
};

#endif //ABSTRACTFACTORY_ENCHANTED_ROOM_HPP
