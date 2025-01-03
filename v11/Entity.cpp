//
// Created by Yoave on 03/01/2025.
//

#include "Entity.h"


Entity::Entity(const Entity& ent) :
    Name(ent.GetName()), MaxLife(ent.GetMaxLife()), Life(ent.GetLife()), Damage(ent.GetDamage())
{}

Entity& Entity::operator=(const Entity& ent) {
    if (this == &ent) {  // If self-assignment
        return *this;
    }

    Name = ent.Name;
    MaxLife = ent.MaxLife;
    Life = ent.Life;
    Damage = ent.Damage;
    return *this;
}

std::string Entity::GetName() const{
    return Name;
}

int Entity::GetMaxLife() const {
    return MaxLife;
}

int Entity::GetLife() const {
    return Life;
}

int Entity::GetDamage() const {
    return Damage;
}