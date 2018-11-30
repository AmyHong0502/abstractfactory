//
// Created by Amy Hong on 2018-11-29.
//

#include "enchanted_maze.hpp"

enchanted_maze::enchanted_maze() {
    print();
}

enchanted_maze::~enchanted_maze() {
    for (room *r: rooms) {
        delete r;
    }
    for (door *d: doors) {
        delete d;
    }
}

void enchanted_maze::add_room(room *r) {
    rooms.push_back(r);
}

void enchanted_maze::add_door(door *d) {
    doors.push_back(d);
}

void enchanted_maze::print() {
    std::cout << "enchanted maze" << std::endl;
}
