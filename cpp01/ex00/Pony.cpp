#include "Pony.hpp"
#include <iostream>

Pony::Pony(std::string name, std::string team) : _name(name), _team(team)
{
	std::cout << "Hello." << std::endl;
}

Pony::~Pony(void)
{
	std::cout << "Good bye." << std::endl;
}

void	Pony::introduce(void)
{
	std::cout << "My name is " << _name << ". I'm a member of " << _team << "." 
	<< std::endl;
}
