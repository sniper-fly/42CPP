#include "ClapTrap.hpp"
#include <string>
#include <iostream>

ClapTrap::ClapTrap(std::string name):
    name(name)
{
    std::cout << "Tuturu~ :)" << std::endl;
    hitpoints = 10;
    energy_points = 10;
    attack_damage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Bye bye, papa.." << std::endl;
}

void ClapTrap::attack(std::string const &target)
{
    std::cout << "FR4G-TP " << name << " attacks " << target << ", causing "
    << attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    hitpoints -= amount;
    if (hitpoints < 0) {
        hitpoints = 0;
    }
    std::cout << name << " takes " << amount << " points of damage!"
    << std::endl;
    if (hitpoints == 0) {
        std:: cout << name << " has died.." << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    hitpoints += amount;
    std::cout << name << " has healed " << amount << " points of hp!"
    << std::endl;
}

void ClapTrap::showHp(void)
{
    std::cout << name << "'s HP is " << hitpoints << "." << std::endl;
}
