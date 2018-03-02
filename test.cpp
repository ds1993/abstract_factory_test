#include "MazeFactory.h"
#include "MazeGame.h"

int main()
{
    MazeFactory factory;
    MazeGame maze;
    maze.CreateMaze(factory);
}
