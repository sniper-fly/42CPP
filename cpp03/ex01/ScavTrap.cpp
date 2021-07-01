#include "ScavTrap.hpp"
#include <string>
#include <iostream>

ScavTrap::ScavTrap(std::string name):
    ClapTrap(name)
{
    std::cout << "Ohha~!" << std::endl;
    hitpoints = 100;
    energy_points = 50;
    attack_damage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "See you in 7 years.." << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << name << " entered in Gate keeper mode." << std::endl;
}
