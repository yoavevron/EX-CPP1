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
    std::string RoomId;
    int FireHealValue;
    Entity Monster;
    Room* Rooms[10];

public:
    Room();
    explicit Room(std::string roomId, int fireHealValue, int monsterLife, int monsterDamage);
    Room(const Room& other);
    Room* operator[](int index) const;
    Room*& operator[](int cell);
    void Print() const;
};


#endif //V11_ROOM_H
