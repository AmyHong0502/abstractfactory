//
// Created by Amy Hong on 2018-11-29.
//

#ifndef ABSTRACTFACTORY_FUTURISTIC_WALL_HPP
#define ABSTRACTFACTORY_FUTURISTIC_WALL_HPP

#include "../../interface/wall.hpp"

/**
 * Wall for futuristic dystopian maze.
 * Concrete implementation of class wall.
 */
class futuristic_wall : virtual public wall {

public:

    /**
     * Constructor of this futuristic wall.
     */
    futuristic_wall();

    /**
     * Destructor of this futuristic wall.
     */
    ~futuristic_wall() override;

    /**
     * Prints information of this futuristic wall.
     */
    void print() override;
};

#endif //ABSTRACTFACTORY_FUTURISTIC_WALL_HPP
