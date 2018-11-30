//
// Created by Amy Hong on 2018-11-29.
//

#include "futuristic_door.hpp"

futuristic_door::futuristic_door(room &r1, room &r2) {
    room1 = &r1;
    room2 = &r2;

    print();
}

futuristic_door::~futuristic_door() {
    std::cout << "D *** futuristic_door" << std::endl;
}

void futuristic_door::print() {
    std::cout << "futuristic door" << std::endl;
}
