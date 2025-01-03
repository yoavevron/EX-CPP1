//
// Created by Yoave on 03/01/2025.
//

#ifndef V11_ENTITY_H
#define V11_ENTITY_H


#include <string> // For std::string

class Entity {
private:
    std::string Name;
    int MaxLife;
    int Damage;

public:
    Entity();
    Entity(std::string name, int maxLife, int damage);
};


#endif //V11_ENTITY_H
