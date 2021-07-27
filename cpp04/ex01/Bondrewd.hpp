#ifndef BONDREWD_HPP
#define BONDREWD_HPP

#include "Enemy.hpp"

class Bondrewd : public Enemy
{
public:
    Bondrewd();
    Bondrewd(Bondrewd& other);
    virtual ~Bondrewd();
    Bondrewd&           operator=(Bondrewd& other);

    void                takeDamage(int);
};

#endif
