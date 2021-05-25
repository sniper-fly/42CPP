#include "Human.hpp"
#include "Brain.hpp"
#include <string>

Human::Human(void) { }
// Human::~Human(void) { }

std::string			Human::identify(void)
{
	return (brain.identify());
}

const Brain&	Human::getBrain(void)
{
	return (this->brain);
}
