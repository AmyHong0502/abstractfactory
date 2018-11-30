//
// Created by Amy Hong on 2018-11-29.
//

#ifndef ABSTRACTFACTORY_FUTURISTIC_ROOM_HPP
#define ABSTRACTFACTORY_FUTURISTIC_ROOM_HPP

#include "../../interface/room.hpp"

/**
 * Room for futuristic dystopian maze.
 * Concrete implementation of class room.
 */
class futuristic_room : virtual public room {
public:

    /**
     * Constructor of this futuristic room.
     */
    futuristic_room();

    /**
     * Destructor of this futuristic room.
     */
    ~futuristic_room() override;

    /**
     * Builds a wall for this futuristic room.
     *
     * @param w wall to build
     */
    void build_wall(wall *w) override;

    /**
     * Prints information of this futuristic room.
     */
    void print() override;
};

#endif //ABSTRACTFACTORY_FUTURISTIC_ROOM_HPP
