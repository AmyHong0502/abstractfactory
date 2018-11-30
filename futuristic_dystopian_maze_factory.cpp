//
// Created by Amy Hong on 2018-11-29.
//

#include "futuristic_dystopian_maze_factory.hpp"

maze *futuristic_dystopian_maze_factory::make_maze() {
    room *room1 = make_room();
    room *room2 = make_room();
    door *door = make_door(*room1, *room2);

    maze *m = new futuristic_maze();
    m->add_room(room1);
    m->add_room(room2);
    m->add_door(door);
    return m;
}

wall *futuristic_dystopian_maze_factory::make_wall() {
    return new futuristic_wall();
}

room *futuristic_dystopian_maze_factory::make_room() {
    return new futuristic_room();
}

door *futuristic_dystopian_maze_factory::make_door(room &r1, room &r2) {
    return new futuristic_door(r1, r2);
}
