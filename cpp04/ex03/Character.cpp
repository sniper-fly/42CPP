#include "Character.hpp"

Character::Character()
{
}

Character::~Character()
{
}

Character::Character(Character const &other)
{
    *this = other;
}

Character &Character::operator=(Character const &other)
{
    if (this != &other)
    {
    }
    return *this;
}
