#include "PowerFist.hpp"

PowerFist::PowerFist():
    AWeapon("Power Fist", 8, 50)
{
}

PowerFist::PowerFist(PowerFist& other) { *this = other; }

PowerFist::~PowerFist() { }

PowerFist&  PowerFist::operator=(PowerFist& other)
{
    this->name = other.getName();
    this->ap_cost = other.getAPCost();
    return *this;
}

void        PowerFist::attack() const
{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}
