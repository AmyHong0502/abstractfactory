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
    virtual ~door() = default;

};

#endif //ABSTRACTFACTORY_DOOR_HPP
