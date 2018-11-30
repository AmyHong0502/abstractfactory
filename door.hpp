//
// Created by Amy Hong on 2018-11-29.
//

#ifndef ABSTRACTFACTORY_DOOR_HPP
#define ABSTRACTFACTORY_DOOR_HPP

#include "room.hpp"

/**
 * Abstract door interface.
 */
class door {

protected:

    /**
     * A room to connect with this door.
     */
    room *room1 = nullptr;

    /**
     * A room to connect with this door.
     */
    room *room2 = nullptr;

public:

    /**
     * Prints information of this door.
     */
    virtual void print() = 0;

    /**
     * Destructor of this door.
     */
    virtual ~door() = 0;
};

/**
 * Door for enchanted faery land maze.
 * Concrete implementation of class door.
 */
class enchanted_door : virtual public door {

public:

    /**
     * Constructor of this enchanted door.
     *
     * @param r1 room to connect with this door.
     * @param r2 room to connect with this door.
     */
    enchanted_door(room &r1, room &r2) {
        room1 = &r1;
        room2 = &r2;

        print();
    }

    /**
     * Destructor of this enchanted door.
     */
    ~enchanted_door() override {
        delete room1;
        delete room2;
    }

    /**
     * Prints information of this enchanted door.
     */
    void print() override {
        std::cout << "enchanted door" << std::endl;
    }
};

/**
 * Door for futuristic dystopian maze.
 * Concrete implementation of class door.
 */
class futuristic_door : virtual public door {

public:

    /**
     * Constructor of this futuristic door.
     *
     * @param r1 room to connect with this door.
     * @param r2 room to connect with this door.
     */
    futuristic_door(room &r1, room &r2) {
        room1 = &r1;
        room2 = &r2;

        print();
    }

    /**
     * Destructor of this futuristic door.
     */
    ~futuristic_door() override {
        delete room1;
        delete room2;
    }

    /**
     * Prints information of this futuristic door.
     */
    void print() override {
        std::cout << "futuristic door" << std::endl;
    }
};

#endif //ABSTRACTFACTORY_DOOR_HPP
