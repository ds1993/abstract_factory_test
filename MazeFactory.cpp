#include "MazeFactory.h"

MazeFactory::MazeFactory()
{
}

MazeFactory::~MazeFactory()
{
}

std::shared_ptr<Maze> MazeFactory::MakeMaze()
{
    std::shared_ptr<Maze> maze(new Maze);
    return maze;
}
std::shared_ptr<Wall> MazeFactory::MakeWall()
{
    std::shared_ptr<Wall> wall(new Wall);
    return wall;
}
std::shared_ptr<Room> MazeFactory::MakeRoom(int roomNum)
{
    std::shared_ptr<Room> room(new Room(roomNum));
    return room;
}
std::shared_ptr<Door> MazeFactory::MakeDoor(std::shared_ptr<Room> r1, std::shared_ptr<Room> r2)
{
    std::shared_ptr<Door> door(new Door(r1, r2));
    return door;
}
