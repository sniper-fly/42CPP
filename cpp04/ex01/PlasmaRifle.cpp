#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle():
    AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::PlasmaRifle(PlasmaRifle& other) { *this = other; }

PlasmaRifle::~PlasmaRifle() { }

PlasmaRifle& PlasmaRifle::operator=(PlasmaRifle& other)
{
    this->name = other.getName();
    this->ap_cost = other.getAPCost();
    return *this;
}

void        PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
