#include "HumanA.hpp"
#include "Weapon.hpp"
#include <string>
#include <iostream>

void	HumanA::attack(void)
{
	std::cout << name << "attacks with his " << buki.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon buki)
{
	this->name = name;
	this->buki = buki;
}
