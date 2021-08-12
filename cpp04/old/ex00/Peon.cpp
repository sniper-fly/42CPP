#include "Peon.hpp"
#include <iostream>

const std::string Peon::animal = "pink pony";

Peon::Peon() {}

Peon::Peon(const std::string& name):
    Victim(name)
{
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon& other): Peon(other.name) {}

Peon::~Peon()
{
    std::cout << "Bleurak..." << std::endl;
}

Peon& Peon::operator=(const Peon &other)
{
    name = other.name;
    return *this;
}

void    Peon::getPolymorphed() const
{
    std::cout << name << " has been turned into a " << animal << "!"
    << std::endl;
}

std::ostream& operator<<(std::ostream &out, const Peon& other)
{
    out << "I'm " << other.getName() << " and I like otters!"
    <<  std::endl;
    return out;
}
