#include "MazeFactory.h"

MazeFactory::MazeFactory()
{
}

MazeFactory::~MazeFactory()
{
    while (maze_list.size() > 0) {
        Maze* maze = maze_list[maze_list.size() - 1];
        delete maze;
        maze_list.pop_back();
    }

    while (wall_list.size() > 0) {
        Wall* wall = wall_list[wall_list.size() - 1];
        delete wall;
        wall_list.pop_back();
    }

    while (room_list.size() > 0) {
        Room* room = room_list[room_list.size() - 1];
        delete room;
        room_list.pop_back();
    }

    while (door_list.size() > 0) {
        Door* door = door_list[door_list.size() - 1];
        delete door;
        door_list.pop_back();
    }
}

Maze* MazeFactory::MakeMaze()
{
    Maze* maze = new Maze;
    maze_list.push_back(maze);
    return maze;
}
Wall* MazeFactory::MakeWall()
{
    Wall* wall = new Wall;
    wall_list.push_back(wall);
    return wall;
}
Room* MazeFactory::MakeRoom(int roomNum)
{
    Room* room = new Room(roomNum);
    room_list.push_back(room);
    return room;
}
Door* MazeFactory::MakeDoor(Room* r1, Room* r2)
{
    Door* door = new Door(r1, r2);
    door_list.push_back(door);
    return door;
}
