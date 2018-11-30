//
// Created by Amy Hong on 2018-11-29.
//

#ifndef ABSTRACTFACTORY_WALL_HPP
#define ABSTRACTFACTORY_WALL_HPP

#include <iostream>

class wall {
public:
    virtual void print() = 0;

    virtual ~wall() = default;
};

class enchanted_wall : virtual public wall {

public:
    enchanted_wall() {
        print();
    }

    void print() override {
        std::cout << "enchanted wall" << std::endl;
    }
};

class futuristic_wall : virtual public wall {

public:
    futuristic_wall() {
        print();
    }

    void print() override {
        std::cout << "futuristic wall" << std::endl;
    }
};

#endif //ABSTRACTFACTORY_WALL_HPP
