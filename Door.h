#ifndef DOOR_H
#define DOOR_H

#include "MapSite.h"
#include "Room.h"

class Door: public MapSite {
public:
    Door(Room* room1 = NULL, Room* room2 = NULL);
    ~Door();

    virtual void Enter();
    Room* otherSideFrom(Room*);

private:
    Room* _room1;
    Room* _room2;
    bool _isOpen;
};

#endif
