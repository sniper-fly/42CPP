#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include "AWeapon.hpp"
class PowerFist : public AWeapon
{
public:
    PowerFist();
    PowerFist(const PowerFist& other);
    ~PowerFist();
    PowerFist& operator=(const PowerFist& other);

    void attack();
};

#endif
