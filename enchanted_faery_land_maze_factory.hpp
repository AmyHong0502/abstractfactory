//
// Created by Amy Hong on 2018-11-29.
//

#ifndef ABSTRACTFACTORY_ENCHANTED_FAERY_LAND_MAZE_FACTORY_HPP
#define ABSTRACTFACTORY_ENCHANTED_FAERY_LAND_MAZE_FACTORY_HPP

#include "maze_factory.hpp"

class enchanted_faery_land_maze_factory : virtual public maze_factory {

public:

    maze *make_maze() override;

    wall *make_wall() override;

    room *make_room() override;

    door *make_door(room &r1, room &r2) override;
};

#endif //ABSTRACTFACTORY_ENCHANTED_FAERY_LAND_MAZE_FACTORY_HPP