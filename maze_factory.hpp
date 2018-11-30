//
// Created by Amy Hong on 2018-11-29.
//

#ifndef ABSTRACTFACTORY_MAZE_FACTORY_HPP
#define ABSTRACTFACTORY_MAZE_FACTORY_HPP

#include "maze.hpp"

class maze_factory {

public:

    virtual maze *make_maze() = 0;

    virtual wall *make_wall() = 0;

    virtual room *make_room() = 0;

    virtual door *make_door(room &r1, room &r2) = 0;

};

#endif //ABSTRACTFACTORY_MAZE_FACTORY_HPP
