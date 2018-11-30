//
// Created by Amy Hong on 2018-11-29.
//

#ifndef ABSTRACTFACTORY_WALL_HPP
#define ABSTRACTFACTORY_WALL_HPP

#include <iostream>

/**
 * Abstract wall interface.
 */
class wall {

public:

    /**
     * Prints information of this wall.
     */
    virtual void print() = 0;

    /**
     * Destructor of this wall.
     */
    virtual ~wall() = default;

};

#endif //ABSTRACTFACTORY_WALL_HPP
