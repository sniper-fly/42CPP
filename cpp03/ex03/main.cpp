#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

int	main(void)
{
    ClapTrap luca("luca");
    std::cout << "---------------" << std::endl;
    ScavTrap chris("chris");
    std::cout << "---------------" << std::endl;
    FragTrap faris("faris");
    std::cout << "---------------" << std::endl;

    luca.showHp();
    chris.showHp();
    faris.showHp();
    luca.attack("chris");
    chris.takeDamage(0);
    chris.attack("luca");
    luca.takeDamage(20);
    faris.attack("chris");
    faris.takeDamage(30);
    std::cout << "---------------" << std::endl;

    luca.showHp();
    chris.showHp();
    faris.showHp();
    luca.beRepaired(100);
    chris.beRepaired(100);
    faris.beRepaired(100);
    luca.showHp();
    chris.showHp();
    faris.showHp();
    std::cout << "---------------" << std::endl;

    chris.guardGate();
    faris.highFivesGuys();
    std::cout << "---------------" << std::endl;
    return (0);
}
