//
// Created by Amy Hong on 2018-11-29.
//

#include "futuristic_dystopian_maze_factory.hpp"

maze *futuristic_dystopian_maze_factory::make_maze() {
    wall *wall1 = make_wall();
    wall *wall2 = make_wall();
    wall *wall3 = make_wall();
    wall *wall4 = make_wall();
    wall *wall5 = make_wall();
    wall *wall6 = make_wall();
    wall *wall7 = make_wall();
    wall *wall8 = make_wall();

    room *room1 = make_room();
    room *room2 = make_room();

    room1->build_wall(wall1);
    room1->build_wall(wall2);
    room1->build_wall(wall3);
    room1->build_wall(wall4);
    room2->build_wall(wall5);
    room2->build_wall(wall6);
    room2->build_wall(wall7);
    room2->build_wall(wall8);

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
