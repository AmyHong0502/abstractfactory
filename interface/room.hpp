//
// Created by Amy Hong on 2018-11-29.
//

#ifndef ABSTRACTFACTORY_ROOM_HPP
#define ABSTRACTFACTORY_ROOM_HPP

#include <vector>
#include "wall.hpp"

/**
 * Abstract room interface.
 */
class room {

protected:

    /**
     * Walls around this room.
     */
    std::vector<wall *> walls;

public:

    /**
     * Prints information of this room.
     */
    virtual void print() = 0;

    /**
     * Builds a wall for this room.
     *
     * @param w wall to build
     */
    virtual void build_wall(wall *w) = 0;

    /**
     * Destructor of this room.
     */
    virtual ~room() = default;

};

#endif //ABSTRACTFACTORY_ROOM_HPP
