#include "Character.hpp"
#include <iostream>

Character::Character()
{
    for (int i = 0; i < 4; ++i) {
        materias[i] = NULL;
    }
}

Character::~Character()
{
    for (int i = 0; i < 4; ++i) {
        delete materias[i];
    }
}

Character::Character(Character const &other): Character()
{
    *this = other;
}

Character::Character(std::string const &name): Character()
{
    this->name = name;
}

Character &Character::operator=(Character const &other)
{
    if (this != &other)
    {
        name = other.getName();
        for (int i = 0; i < 4; ++i) {
            delete materias[i];
            if (other.materias[i]) {
                materias[i] = other.materias[i]->clone();
            }
        }
    }
    return *this;
}

std::string const & Character::getName() const { return name; }

void                Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; ++i) {
        if (materias[i] == NULL) {
            materias[i] = m;
            return ;
        }
    }
    std::cout << "full materias" << std::endl;
}

void                Character::unequip(int idx)
{
    if (0 <= idx && idx <= 3) {
        materias[idx] = NULL;
    }
}

void                Character::use(int idx, ICharacter& target)
{
    if (0 <= idx && idx <= 3) {
        materias[idx]->use(target);
    }
}
