#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>

class DiamondTrap : public FragTrap, public ScavTrap
{
public:
    DiamondTrap(std::string name);
    virtual ~DiamondTrap();

    void whoAmI();
private:
    std::string name;
};

#endif
