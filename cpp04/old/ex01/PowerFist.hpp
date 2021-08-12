#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include "AWeapon.hpp"
class PowerFist : public AWeapon
{
public:
    PowerFist();
    PowerFist(PowerFist& other);
    virtual ~PowerFist();
    PowerFist& operator=(PowerFist& other);

    void attack() const;
};

#endif
