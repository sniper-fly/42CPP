#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class ScavTrap: public ClapTrap
{
public:
    ScavTrap(void);
    ScavTrap(const std::string& name);
    ScavTrap(const ScavTrap& other);
    ~ScavTrap(void);
    ScavTrap& operator=(const ScavTrap& other);

    void challengeNewcomer(void);
private:
    const std::string challenges[5] = {
        "Shaker",
        "Forkaless",
        "Suparagumosu",
        "Gang way",
        "Sennin Kusabi"
    };
};

#endif
