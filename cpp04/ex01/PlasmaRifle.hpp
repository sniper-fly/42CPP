#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
public:
    PlasmaRifle();
    PlasmaRifle(const PlasmaRifle& other);
    ~PlasmaRifle();
    PlasmaRifle& operator=(const PlasmaRifle& other);

    void attack();
};

#endif
