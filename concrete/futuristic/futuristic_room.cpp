//
// Created by Amy Hong on 2018-11-29.
//

#include "futuristic_room.hpp"

futuristic_room::futuristic_room() {
    print();
}

futuristic_room::~futuristic_room() {
    std::cout << "D *** futuristic_room" << std::endl;
    for (wall *w: walls) {
        delete w;
    }
}

void futuristic_room::build_wall(wall *w) {
    walls.push_back(w);
}

void futuristic_room::print() {
    std::cout << "futuristic room" << std::endl;
}
