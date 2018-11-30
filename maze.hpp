//
// Created by Amy Hong on 2018-11-29.
//

#ifndef ABSTRACTFACTORY_MAZE_HPP
#define ABSTRACTFACTORY_MAZE_HPP

#include <vector>
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
    virtual ~maze() = 0;

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

#endif //ABSTRACTFACTORY_MAZE_HPP
