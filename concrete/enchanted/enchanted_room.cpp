//
// Created by Amy Hong on 2018-11-29.
//

#include "enchanted_room.hpp"

enchanted_room::enchanted_room() {
    print();
}

enchanted_room::~enchanted_room() {
    std::cout << "D *** enchanted_room" << std::endl;
    for (wall *w: walls) {
        delete w;
    }
}

void enchanted_room::build_wall(wall *w) {
    walls.push_back(w);
}

void enchanted_room::print() {
    std::cout << "enchanted room" << std::endl;
}
