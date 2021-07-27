#include "Excalibur.hpp"

Excalibur::Excalibur():
    AWeapon("Excalibur", 30, 1000)
{
}

Excalibur::Excalibur(Excalibur& other)
{
    *this = other;
}

Excalibur::~Excalibur() { }

Excalibur&      Excalibur::operator=(Excalibur& other)
{
    name = other.name;
    ap_cost = other.ap_cost;
    damagePoints = other.damagePoints;
    return *this;
}

void            Excalibur::attack() const
{
    std::cout << "* seiken Excalibuuuuureeeerrerreeerre!!! *" << std::endl;
}
