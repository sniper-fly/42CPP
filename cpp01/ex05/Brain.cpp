#include "Brain.hpp"
#include "sstream"
#include <string>

std::string	Brain::identify(void) const
{
	std::stringstream ss;
	ss << this;
	return (ss.str());
}

Brain::Brain() { iq = 100; eq = 100;}
Brain::~Brain() { }
