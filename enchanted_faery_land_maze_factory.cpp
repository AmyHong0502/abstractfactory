//
// Created by Amy Hong on 2018-11-29.
//

#include "enchanted_faery_land_maze_factory.hpp"

maze *enchanted_faery_land_maze_factory::make_maze() {
    room *room1 = make_room();
    room *room2 = make_room();
    door *door = make_door(*room1, *room2);

    maze *m = new enchanted_maze();
    m->add_room(room1);
    m->add_room(room2);
    m->add_door(door);
    return m;
}

wall *enchanted_faery_land_maze_factory::make_wall() {
    return new enchanted_wall();
}

room *enchanted_faery_land_maze_factory::make_room() {
    return new enchanted_room();
}

door *enchanted_faery_land_maze_factory::make_door(room &r1, room &r2) {
    return new enchanted_door(r1, r2);
}
