#include "FragTrap.hpp"

#include <string>
#include <iostream>

FragTrap::FragTrap(std::string name):
    ClapTrap(name)
{
    std::cout << "NyanNyan!" << std::endl;
    hitpoints = 100;
    energy_points = 100;
    attack_damage = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "I don't look back on my past!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << name << " request High fives!" << std::endl;
}
