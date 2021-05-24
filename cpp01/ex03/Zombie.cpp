
#include "Zombie.hpp"
#include <iostream>

void	Zombie::announce(void)
{
	std::cout << "<" << this->name << " (" << this->type << ")> Braiiiiiiinnnssss..."
	<< std::endl;
}

void	Zombie::setType(std::string type) { this->type = type; }
void	Zombie::setName(std::string name) { this->name = name; }

Zombie::Zombie(void) { }

Zombie::Zombie(std::string type, std::string name)
{
	this->type = type;
	this->name = name;
}

Zombie::~Zombie(void)
{
	std::cout << this->name << " died." << std::endl;
}
