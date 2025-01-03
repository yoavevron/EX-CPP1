//
// Created by Yoave on 03/01/2025.
//

#include "Room.h"

Room::Room(int roomId, int fireHealValue, int monsterLife, int monsterDamage){
    RoomId = roomId;
    FireHealValue = fireHealValue;
    if (monsterLife > 0){
        Entity monster = Entity("monster", monsterLife, monsterDamage);
        Monster = monster;
    }
    Rooms = nullptr;
}

Room::Room(const Room& other){
    RoomId = other.RoomId;
    FireHealValue = other.FireHealValue;
    Monster = other.Monster;
    Rooms = other.Rooms;
}
