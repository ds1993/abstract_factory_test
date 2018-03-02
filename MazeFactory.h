#ifndef MAZEFACTORY_H
#define MAZEFACTORY_H

#include <vector>
#include "Maze.h"
#include "Wall.h"
#include "Room.h"
#include "Door.h"

class MazeFactory {
public:
    MazeFactory();
    virtual ~MazeFactory();

    virtual Maze* MakeMaze();
    virtual Wall* MakeWall();
    virtual Room* MakeRoom(int);
    virtual Door* MakeDoor(Room* r1, Room* r2);

private:
    std::vector<Maze*> maze_list;
    std::vector<Wall*> wall_list;
    std::vector<Room*> room_list;
    std::vector<Door*> door_list;
};

#endif
