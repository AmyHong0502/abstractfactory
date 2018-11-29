//
// Created by Amy Hong on 2018-11-29.
//

#ifndef ABSTRACTFACTORY_MAZE_FACTORY_HPP
#define ABSTRACTFACTORY_MAZE_FACTORY_HPP

#include "maze.hpp"
#include "wall.hpp"
#include "room.hpp"
#include "door.hpp"

// It builds rooms, walls, and doors between rooms.
//
// A maze_factory can be instantiated and passed to some other module to be
// used to create the parts of a maze.
class maze_factory {

    virtual maze make_maze() = 0;

    virtual wall make_wall() = 0;

    virtual room make_room() = 0;

    virtual door make_door(room &r1, room &r2) = 0;

};

#endif //ABSTRACTFACTORY_MAZE_FACTORY_HPP
