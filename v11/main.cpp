#include <iostream>
#include "Entity.h"

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
    return 0;
}
