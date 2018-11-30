//
// Created by Amy Hong on 2018-11-29.
//

#include "futuristic_maze.hpp"

futuristic_maze::futuristic_maze(){
    print();
}

futuristic_maze::~futuristic_maze() {
    std::cout << "D *** futuristic_maze" << std::endl;

    for (room *r: rooms) {
        delete r;
    }
    for (door *d: doors) {
        delete d;
    }
}

void futuristic_maze::add_room(room *r) {
    rooms.push_back(r);
}

void futuristic_maze::add_door(door *d) {
    doors.push_back(d);
}

void futuristic_maze::print() {
    std::cout << "futuristic maze" << std::endl;
}
