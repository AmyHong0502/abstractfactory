//
// Created by Amy Hong on 2018-11-29.
//

#ifndef ABSTRACTFACTORY_FUTURISTIC_DOOR_HPP
#define ABSTRACTFACTORY_FUTURISTIC_DOOR_HPP

#include "../../interface/door.hpp"

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
    futuristic_door(room &r1, room &r2);

    /**
     * Destructor of this futuristic door.
     */
    ~futuristic_door() override;

    /**
     * Prints information of this futuristic door.
     */
    void print() override;
};

#endif //ABSTRACTFACTORY_FUTURISTIC_DOOR_HPP
