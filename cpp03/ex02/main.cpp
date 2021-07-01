#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

int	main(void)
{
    ClapTrap luca("luca");
    ScavTrap chris("chris");

    luca.showHp();
    chris.showHp();
    luca.attack("chris");
    chris.takeDamage(0);
    chris.attack("luca");
    luca.takeDamage(20);
    luca.showHp();
    chris.showHp();
    luca.beRepaired(100);
    chris.beRepaired(100);
    luca.showHp();
    chris.showHp();
    return (0);
}
