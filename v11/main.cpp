#include <iostream>
#include "Entity.h"

int main() {
    std::cout << "Hello, World!!" << std::endl;
    std::string s = "abc";
    Entity e = Entity(s, 4, 3);

    return 0;
}
