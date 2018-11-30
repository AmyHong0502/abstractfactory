//
// Created by Amy Hong on 2018-11-29.
//

#ifndef ABSTRACTFACTORY_ROOM_HPP
#define ABSTRACTFACTORY_ROOM_HPP

#include <vector>
#include "wall.hpp"

class room {
protected:
    std::vector<wall *> walls;

public:
    virtual void print() = 0;

    virtual ~room() = default;
};

class enchanted_room : virtual public room {
public:
    enchanted_room() {
        for (int i = 0; i < 4; i++) {
            walls.push_back(new enchanted_wall);
        }
        print();
    }

    void print() override {
        std::cout << "enchanted room" << std::endl;
    }
};

class futuristic_room : virtual public room {
public:
    futuristic_room() {
        for (int i = 0; i < 4; i++) {
            walls.push_back(new futuristic_wall);
        }
        print();
    }

    void print() override {
        std::cout << "futuristic room" << std::endl;
    }
};

#endif //ABSTRACTFACTORY_ROOM_HPP
