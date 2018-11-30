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

    virtual void build_wall(wall *w) = 0;

    virtual ~room() = 0;
};

class enchanted_room : virtual public room {
public:
    enchanted_room() {
        print();
    }

    ~enchanted_room() override {
        for (wall *w: walls) {
            delete w;
        }
    }

    void build_wall(wall *w) override {
        walls.push_back(w);
    }

    void print() override {
        std::cout << "enchanted room" << std::endl;
    }
};

class futuristic_room : virtual public room {
public:
    futuristic_room() {
        print();
    }

    ~futuristic_room() override {
        for (wall *w: walls) {
            delete w;
        }
    }

    void build_wall(wall *w) override {
        walls.push_back(w);
    }

    void print() override {
        std::cout << "futuristic room" << std::endl;
    }
};

#endif //ABSTRACTFACTORY_ROOM_HPP
