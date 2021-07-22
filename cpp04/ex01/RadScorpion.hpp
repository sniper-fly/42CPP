#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion : public Enemy
{
public:
    RadScorpion();
    RadScorpion(RadScorpion& other);
    virtual ~RadScorpion();
    RadScorpion&    operator=(RadScorpion& other);
    
    void            takeDamage(int);
};

#endif
