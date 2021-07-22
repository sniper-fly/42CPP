#include "SuperMutant.hpp"

SuperMutant::SuperMutant():
    Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant& other)
{
    *this = other;
}

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh..." << std::endl;
}

SuperMutant&    SuperMutant::operator=(SuperMutant& other)
{
    type = other.getType();
    hp = other.getHP();
    return *this;
}

void            SuperMutant::takeDamage(int damage)
{
    Enemy::takeDamage(damage - 3);
}
