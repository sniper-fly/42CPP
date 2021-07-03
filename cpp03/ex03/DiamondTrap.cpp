#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>
#include <iostream>

DiamondTrap::DiamondTrap(std::string name):
    ClapTrap(name), FragTrap(name), ScavTrap(name)
{
    this->name = name;
    std::cout << "Daga Otoko da." << std::endl;
    ClapTrap::name = this->name + "_clap_name";
    this->hitpoints = FragTrap::hitpoints;
    this->energy_points = ScavTrap::energy_points;
    this->attack_damage = FragTrap::attack_damage;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "This must be the choice of steins;gate!!" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "This instance name is " << this->name
    << ", ClapTrap name is " << ClapTrap::name << std::endl;
}
