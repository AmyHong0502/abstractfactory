//
// Created by Amy Hong on 2018-11-29.
//

#ifndef ABSTRACTFACTORY_MAZE_HPP
#define ABSTRACTFACTORY_MAZE_HPP

#include <vector>
#include "door.hpp"

class maze {
protected:
    std::vector<room *> rooms;

    std::vector<door *> doors;

public:
    virtual void add_room(room *r) = 0;

    virtual void add_door(door *r) = 0;

    virtual void print() = 0;
};

class enchanted_maze : virtual public maze {
public:
    enchanted_maze() {
        print();
    }

    void add_room(room *r) override {
        rooms.push_back(r);
    }

    void add_door(door *d) override {
        doors.push_back(d);
    }

    void print() override {
        std::cout << "enchanted maze" << std::endl;
    }
};

#endif //ABSTRACTFACTORY_MAZE_HPP
