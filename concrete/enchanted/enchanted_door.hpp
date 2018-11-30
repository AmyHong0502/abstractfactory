//
// Created by Amy Hong on 2018-11-29.
//

#ifndef ABSTRACTFACTORY_ENCHANTED_DOOR_HPP
#define ABSTRACTFACTORY_ENCHANTED_DOOR_HPP

#include "../../interface/door.hpp"

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
    enchanted_door(room &r1, room &r2);

    /**
     * Destructor of this enchanted door.
     */
    ~enchanted_door() override;

    /**
     * Prints information of this enchanted door.
     */
    void print() override;

};

#endif //ABSTRACTFACTORY_ENCHANTED_DOOR_HPP
