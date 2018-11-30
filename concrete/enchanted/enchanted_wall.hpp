//
// Created by Amy Hong on 2018-11-29.
//

#ifndef ABSTRACTFACTORY_ENCHANTED_WALL_HPP
#define ABSTRACTFACTORY_ENCHANTED_WALL_HPP

#include "../../interface/wall.hpp"

/**
 * Wall for enchanted faery land maze.
 * Concrete implementation of class wall.
 */
class enchanted_wall : virtual public wall {

public:

    /**
     * Constructor of this enchanted wall.
     */
    enchanted_wall();

    /**
     * Prints information of this enchanted wall.
     */
    void print() override;
};

#endif //ABSTRACTFACTORY_ENCHANTED_WALL_HPP
