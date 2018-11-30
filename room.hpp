//
// Created by Amy Hong on 2018-11-29.
//

#ifndef ABSTRACTFACTORY_ROOM_HPP
#define ABSTRACTFACTORY_ROOM_HPP

#include <vector>
#include "wall.hpp"

/**
 * Abstract room interface.
 */
class room {

protected:

    /**
     * Walls around this room.
     */
    std::vector<wall *> walls;

public:

    /**
     * Prints information of this room.
     */
    virtual void print() = 0;

    /**
     * Builds a wall for this room.
     *
     * @param w wall to build
     */
    virtual void build_wall(wall *w) = 0;

    /**
     * Destructor of this room.
     */
    virtual ~room() = 0;
};

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

/**
 * Room for futuristic dystopian maze.
 * Concrete implementation of class room.
 */
class futuristic_room : virtual public room {
public:

    /**
     * Constructor of this futuristic room.
     */
    futuristic_room() {
        print();
    }

    /**
     * Destructor of this futuristic room.
     */
    ~futuristic_room() override {
        for (wall *w: walls) {
            delete w;
        }
    }

    /**
     * Builds a wall for this futuristic room.
     *
     * @param w wall to build
     */
    void build_wall(wall *w) override {
        walls.push_back(w);
    }

    /**
     * Prints information of this futuristic room.
     */
    void print() override {
        std::cout << "futuristic room" << std::endl;
    }
};

#endif //ABSTRACTFACTORY_ROOM_HPP
