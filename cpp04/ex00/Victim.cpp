#include "Victim.hpp"
#include <iostream>

const std::string Victim::animal = "cute little sheep";

Victim::Victim() {}

Victim::Victim(const std::string& name):
    name(name)
{
    std::cout << "Some random victim called " << name
    << " just appeared!" << std::endl;
}

Victim::Victim(const Victim& other): Victim(other.name) {}

Victim::~Victim()
{
    std::cout << "Victim " << name
    << " just died for no apparent reason!" << std::endl;
}

Victim& Victim::operator=(const Victim& other)
{
    this->name = other.name;
    return (*this);
}

void Victim::getPolymorphed()
{
    std::cout << name << " has been turned into a " << animal << "!"
    << std::endl;
}

std::string Victim::getName() const {return this->name;}

std::ostream& operator<<(std::ostream &out, const Victim& other)
{
    out << "I'm " << other.getName() << " and I like otters!"
    <<  std::endl;
    return out;
}
