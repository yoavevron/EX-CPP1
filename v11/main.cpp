#include <iostream>
#include "Entity.h"

int main() {
    std::cout << "Hello, World!!" << std::endl;
    std::string s = "abc";
    Entity e = Entity(s, 40, 3);
    e.Print();
    e-=10;
    e.Print();
    e+=50;
    e.Print();
    e-=30;
    e.Print();
    e-=100;
    e.Print();
    e+=2;
    e.Print();
    e+=100;
    e.Print();
    return 0;
}
