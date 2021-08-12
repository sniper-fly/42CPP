#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>

class AWeapon
{
protected:
    AWeapon();
public:
    AWeapon(std::string const & name, int ap_cost, int damage);
    AWeapon(const AWeapon& other);
    virtual ~AWeapon();

    AWeapon& operator=(const AWeapon& other);
    std::string& getName();
    int getAPCost() const;
    int getDamage() const;
    virtual void attack() const = 0;
protected:
    std::string name;
    int ap_cost;
    int damagePoints;
};

#endif
