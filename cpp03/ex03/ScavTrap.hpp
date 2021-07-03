#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
    ScavTrap(std::string name);
    virtual ~ScavTrap();

    void guardGate();
};

#endif
