//
// Created by Amy Hong on 2018-11-29.
//

#include "futuristic_wall.hpp"

void futuristic_wall::print() {
    std::cout << "futuristic wall" << std::endl;
}

futuristic_wall::futuristic_wall() {
    print();
}

futuristic_wall::~futuristic_wall() {
    std::cout << "D *** futuristic_wall" << std::endl;
}
