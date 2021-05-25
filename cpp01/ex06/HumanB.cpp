#include "HumanB.hpp"
#include "Weapon.hpp"
#include <string>
#include <iostream>

void	HumanB::attack(void)
{
	std::cout << name << "attacks with his " << buki->getType() << std::endl;
}

HumanB::HumanB(std::string name) : name(name) { }

void	HumanB::setWeapon(Weapon &buki) { this->buki = &buki; }
