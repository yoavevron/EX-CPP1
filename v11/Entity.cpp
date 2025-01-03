//
// Created by Yoave on 03/01/2025.
//

#include "Entity.h"
#include <iostream>


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

Entity Entity::operator+=(int value){
    int newLife = this->GetLife() + value;
    if (newLife > this->MaxLife){
        this->Life = this->MaxLife;
    }
    else{
        this->Life = newLife;
    }
    return *this;
}

Entity Entity::operator-=(const Entity& other){
    if (other.Damage){
        this->operator-=(other.GetDamage());
    }
    return *this;
}

Entity Entity::operator-=(int value){
    int newLife = this->GetLife() - value;
    if (newLife <= 0){
        this->Life = 0;
    }
    else{
        this->Life = newLife;
    }
    return *this;
}

bool Entity::operator==(const Entity& other) const{
    int myValue = Life * Damage;
    int hisValue = other.Life * other.Damage;
    return myValue == hisValue;
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

void Entity::Print() const {
    std::cout << Name << " (" << Life << "/" << MaxLife << ") - " << Damage << std::endl;
}