//
// Created by Yoave on 03/01/2025.
//

#ifndef V11_ENTITY_H
#define V11_ENTITY_H


#include <string>

class Entity {
private:
    std::string Name;
    int MaxLife;
    int Life;
    int Damage;

public:
    explicit Entity(std::string name="", int maxLife=0, int damage=0, int life=0):
        Name((std::move(name))), MaxLife(maxLife), Damage(damage), Life(maxLife){};
    Entity(const Entity& ent);
    Entity& operator=(const Entity& ent);
    ~Entity() = default;

    Entity operator+=(int value);
    Entity operator-=(const Entity& other);
    Entity operator-=(int value);

    std::string GetName() const;
    int GetMaxLife() const;
    int GetLife() const;
    int GetDamage() const;
    void Print() const;};


#endif //V11_ENTITY_H
