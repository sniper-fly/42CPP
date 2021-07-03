#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

int	main(void)
{
    DiamondTrap daru("daru");

    std::cout << "--------------------" << std::endl;
    daru.whoAmI();
    std::cout << "--------------------" << std::endl;
    daru.attack("hoge");
    daru.takeDamage(20);
    daru.showHp();
    daru.beRepaired(20);
    daru.showHp();
    daru.guardGate();
    daru.highFivesGuys();
    std::cout << "--------------------" << std::endl;
    return (0);
}
