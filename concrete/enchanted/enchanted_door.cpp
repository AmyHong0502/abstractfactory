//
// Created by Amy Hong on 2018-11-29.
//

#include "enchanted_door.hpp"

enchanted_door::enchanted_door(room &r1, room &r2) {
    room1 = &r1;
    room2 = &r2;

    print();
}

enchanted_door::~enchanted_door() {
    delete room1;
    delete room2;
}

void enchanted_door::print() {
    std::cout << "enchanted door" << std::endl;
}
