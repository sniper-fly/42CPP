#ifndef EXCALIBUR_HPP
#define EXCALIBUR_HPP

#include "AWeapon.hpp"

class Excalibur : public AWeapon
{
public:
    Excalibur();
    Excalibur(Excalibur& other);
    virtual ~Excalibur();
    Excalibur&      operator=(Excalibur& other);

    void            attack() const;
};

#endif
