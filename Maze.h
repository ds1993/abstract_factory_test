#ifndef MAZE_H
#define MAZE_H

#include <map>
#include "Room.h"
#include "Door.h"
#include "Wall.h"

class Maze {
public:
    Maze();
    ~Maze();

    void AddRoom(Room*);
    Room* RoomNo(int);

    void AddDoor(Door*);
    Wall* CreateWall();
   
private:
    std::map<int, Room*> RoomList;
};

#endif
