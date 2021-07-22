#include "AWeapon.hpp"
#include <string>

AWeapon::AWeapon() {}

AWeapon::AWeapon(std::string const & name, int ap_cost, int damage):
    name(name),
    ap_cost(ap_cost),
    damagePoints(damage)
{
}

AWeapon::AWeapon(const AWeapon& other)
{
    *this = other;
}

AWeapon::~AWeapon() { }

AWeapon& AWeapon::operator=(const AWeapon& other)
{
    this->name = other.name;
    this->ap_cost = other.ap_cost;
    this->damagePoints = other.damagePoints;
    return *this;
}

std::string& AWeapon::getName() { return name; }

int                 AWeapon::getAPCost() const { return ap_cost; }

int                 AWeapon::getDamage() const { return damagePoints; }
