#include <AWeapon.hpp>
#include <string>

AWeapon::AWeapon() {}

AWeapon::AWeapon(std::string const & name, int apcost, int damage):
    name(name),
    ap(apcost),
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
    this->ap = other.ap;
    this->damagePoints = other.damagePoints;
    return *this;
}

std::string& AWeapon::getName() { return name; }

int                 AWeapon::getAPCost() const { return ap; }

int                 AWeapon::getDamage() const { return damagePoints; }
