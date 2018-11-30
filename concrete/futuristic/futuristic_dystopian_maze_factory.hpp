//
// Created by Amy Hong on 2018-11-29.
//

#ifndef ABSTRACTFACTORY_FUTURISTIC_DYSTOPIAN_MAZE_FACTORY_HPP
#define ABSTRACTFACTORY_FUTURISTIC_DYSTOPIAN_MAZE_FACTORY_HPP

#include "../../interface/maze_factory.hpp"
#include "futuristic_maze.hpp"
#include "futuristic_wall.hpp"
#include "futuristic_room.hpp"
#include "futuristic_door.hpp"

/**
 * Futuristic dystopian maze factory.
 * Concrete implementation of class maze_factory.
 */
class futuristic_dystopian_maze_factory : virtual public maze_factory {

public:

    /**
     * Builds a futuristic dystopian maze.
     *
     * @return a pointer that points to a futuristic dystopian maze.
     */
    maze *make_maze() override;

    /**
     * Builds a futuristic wall.
     *
     * @return a pointer that points to a futuristic wall.
     */
    wall *make_wall() override;

    /**
     * Builds a futuristic room.
     *
     * @return a pointer that points to a futuristic room.
     */
    room *make_room() override;

    /**
     * Builds a futuristic door.
     *
     * @return a pointer that points to a futuristic door.
     */
    door *make_door(room &r1, room &r2) override;
};

#endif //ABSTRACTFACTORY_FUTURISTIC_DYSTOPIAN_MAZE_FACTORY_HPP
