//
// Created by Yoave on 03/01/2025.
//

#ifndef V11_ROOM_H
#define V11_ROOM_H

#include <iostream>
#include <string>
#include "Entity.h"


class Room {
private:
    int RoomId;
    int FireHealValue;
    Entity Monster;
    Room* Rooms;

public:
    explicit Room(int roomId=0, int fireHealValue=0, int monsterLife=0, int monsterDamage=0);
    Room(const Room& other);
};


#endif //V11_ROOM_H
