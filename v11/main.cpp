#include <iostream>
#include "Entity.h"
#include "Room.h"
#define DEBUG(x) std::cout << x << std::endl;

int main() {
    std::string name1 = "n1";
    Entity e1 = Entity(name1, 40, 3);
    e1.Print();
    std::string name2 = "n2";
    Entity e2 = Entity(name1, 50, 2);
    e2.Print();
    if (e1 == e2){
        std::cout << "EQUAL" << std::endl;
    }
    else{
        std::cout << "DIFFERENT" << std::endl;
    }

    Room room1 = Room("0", 8, 0, 4);
    Room room2 = Room("01", 8, 0, 4);
    Room room3 = Room("1", 8, 0, 4);
    Room room4 = Room("19", 8, 0, 4);
    Room room5 = Room("191", 8, 0, 4);
    room1[1] = &room2;
    room3[9] = &room4;
    room4[1] = &room5;
//    (*room1[1]).Print();
//    (*room1[8]).Print();
//    (*room3[9]).Print();
    (*(*room3[9])[1]).Print();

    return 0;
}
