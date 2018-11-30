//
// Created by Amy Hong on 2018-11-29.
//

#ifndef ABSTRACTFACTORY_DOOR_HPP
#define ABSTRACTFACTORY_DOOR_HPP

#include "room.hpp"

class door {
protected:
    room *room1;
    room *room2;

public:
    virtual void print() = 0;
    virtual ~door() = default;
};

class enchanted_door : virtual public door {
public:
    enchanted_door(room &r1, room &r2) {
        room1 = &r1;
        room2 = &r2;

        print();
    }

    ~enchanted_door() override {
        delete room1;
        delete room2;
    }

    void print() override {
        std::cout << "enchanted door" << std::endl;
    }
};

class futuristic_door : virtual public door {
public:
    futuristic_door(room &r1, room &r2) {
        room1 = &r1;
        room2 = &r2;

        print();
    }

    ~futuristic_door() override {
        delete room1;
        delete room2;
    }

    void print() override {
        std::cout << "futuristic door" << std::endl;
    }
};

#endif //ABSTRACTFACTORY_DOOR_HPP
