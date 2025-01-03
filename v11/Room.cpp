//
// Created by Yoave on 03/01/2025.
//

#include "Room.h"
Room::Room(){
    RoomId = "";
    FireHealValue = 0;
//    Rooms = **Rooms[10];
    for (int i = 0; i < 10; i++) {
        Rooms[i] = nullptr;
    }
}

Room::Room(std::string roomId, int fireHealValue, int monsterLife, int monsterDamage){
    RoomId = std::move(roomId);
    FireHealValue = fireHealValue;
    if (monsterLife > 0){
        Entity monster = Entity("monster", monsterLife, monsterDamage);
        Monster = monster;
    }
    for (int i = 0; i < 10; i++) {
        Rooms[i] = nullptr;
    }
}

Room::Room(const Room& other){
    RoomId = other.RoomId;
    FireHealValue = other.FireHealValue;
    Monster = other.Monster;
    for (int i = 0; i < 10; i++) {
        Rooms[i] = other.Rooms[i];
    }
}

Room* Room::operator[](int cell) const{
    return Rooms[cell];
}

Room*& Room::operator[](int cell) {
    return Rooms[cell];
}

void Room::Print() const{
    if (this) {
        std::cout << "room id: " << RoomId << std::endl;
    }
}
