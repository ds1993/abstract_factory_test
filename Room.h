#ifndef ROOM_H
#define ROOM_H

#include "MapSite.h"

class Room: public MapSite {
public:
    Room(int roomNo);
    ~Room();

    MapSite* GetSide(Direction) const;
    void SetSide(Direction, MapSite*);

    int GetRoomNumber() {return _roomNumber;}

    virtual void Enter();

private:
    MapSite* _sides[4];
    int _roomNumber;
};

#endif
