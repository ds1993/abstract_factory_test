#ifndef MAZEGAME_H
#define MAZEGAME_H

#include "MazeFactory.h"

class MazeGame {
public:
    MazeGame();
    ~MazeGame();

    Maze* CreateMaze(MazeFactory& factory);
};

#endif
