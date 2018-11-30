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
    virtual ~wall() = 0;
};

/**
 * Wall for enchanted faery land maze.
 * Concrete implementation of class wall.
 */
class enchanted_wall : virtual public wall {

public:

    /**
     * Constructor of this enchanted wall.
     */
    enchanted_wall() {
        print();
    }

    /**
     * Prints information of this enchanted wall.
     */
    void print() override {
        std::cout << "enchanted wall" << std::endl;
    }
};

/**
 * Wall for futuristic dystopian maze.
 * Concrete implementation of class wall.
 */
class futuristic_wall : virtual public wall {

public:

    /**
     * Constructor of this futuristic wall.
     */
    futuristic_wall() {
        print();
    }

    /**
     * Prints information of this futuristic wall.
     */
    void print() override {
        std::cout << "futuristic wall" << std::endl;
    }
};

#endif //ABSTRACTFACTORY_WALL_HPP
