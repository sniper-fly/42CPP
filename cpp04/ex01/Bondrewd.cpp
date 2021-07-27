#include "Bondrewd.hpp"

Bondrewd::Bondrewd():
    Enemy(1000, "Bondrewd")
{
    std::cout << "* Oyaoyaoyaoyaoyaoya *" << std::endl;
}

Bondrewd::Bondrewd(Bondrewd& other)
{
    *this = other;
}

Bondrewd::~Bondrewd()
{
    std::cout << "* Subarashii.. *" << std::endl;
}

Bondrewd&           Bondrewd::operator=(Bondrewd& other)
{
    type = other.getType();
    hp = other.getHP();
    return *this;
}

void                Bondrewd::takeDamage(int damage)
{
    Enemy::takeDamage(damage - 10);
}
