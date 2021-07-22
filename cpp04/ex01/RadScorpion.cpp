#include "RadScorpion.hpp"

RadScorpion::RadScorpion():
    Enemy(80, "RadScorpion")
{
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion& other)
{
    *this = other;
}

RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion&    RadScorpion::operator=(RadScorpion& other)
{
    type = other.getType();
    hp = other.getHP();
    return *this;
}

void            RadScorpion::takeDamage(int damage)
{
    Enemy::takeDamage(damage);
}
