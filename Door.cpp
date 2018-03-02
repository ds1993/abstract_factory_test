#include <stdio.h>
#include "Door.h"
#include "Room.h"

Door::Door(Room* room1, Room* room2): _room1(room1), _room2(room2)
{
    printf("create a Door\n");
}

Door::~Door()
{
    printf("delete a Door\n");
}

void Door::Enter()
{
    if (_isOpen == true) {
        printf("enter from room %d to room %d\n", _room1->GetRoomNumber(), _room2->GetRoomNumber());
    }
    else {
        printf("the door is not open!\n");
    }
}
