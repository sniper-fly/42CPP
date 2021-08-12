#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
public:
    PlasmaRifle();
    PlasmaRifle(PlasmaRifle& other);
    virtual ~PlasmaRifle();
    PlasmaRifle& operator=(PlasmaRifle& other);

    void attack() const;
};

#endif
