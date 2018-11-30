//
// Created by Amy Hong on 2018-11-29.
//

#ifndef ABSTRACTFACTORY_ENCHANTED_FAERY_LAND_MAZE_FACTORY_HPP
#define ABSTRACTFACTORY_ENCHANTED_FAERY_LAND_MAZE_FACTORY_HPP

#include "maze_factory.hpp"

/**
 * Enchanted faery land maze factory.
 * Concrete implementation of class maze_factory.
 */
class enchanted_faery_land_maze_factory : virtual public maze_factory {

public:

    /**
     * Builds an enchanted faery land maze.
     *
     * @return a pointer that points to an enchanted faery land maze.
     */
    maze *make_maze() override;

    /**
     * Builds an enchanted wall.
     *
     * @return a pointer that points to an enchanted wall.
     */
    wall *make_wall() override;

    /**
     * Builds an enchanted room.
     *
     * @return a pointer that points to an enchanted room.
     */
    room *make_room() override;

    /**
     * Builds an enchanted door.
     *
     * @return a pointer that points to an enchanted door.
     */
    door *make_door(room &r1, room &r2) override;
};

#endif //ABSTRACTFACTORY_ENCHANTED_FAERY_LAND_MAZE_FACTORY_HPP
