#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
public:
    SuperMutant();
    SuperMutant(SuperMutant& other);
    virtual ~SuperMutant();
    SuperMutant&    operator=(SuperMutant& other);
    
    void            takeDamage(int);
};

#endif
