#include "Peon.hpp"
#include <iostream>

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

void Peon::getPolymorphed() {}

std::ostream& operator<<(std::ostream &out, const Peon& other)
{
    out << "I'm " << other.getName() << " and I like otters!"
    <<  std::endl;
    return out;
}
