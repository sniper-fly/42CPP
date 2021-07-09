#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"

class Sorcerer
{
private:
    Sorcerer();
    void copy(const Sorcerer& other);
public:
    Sorcerer(const std::string& name, const std::string& title);
    Sorcerer(const Sorcerer& other);
    virtual ~Sorcerer();

    Sorcerer& operator=(const Sorcerer& other);
    void polymorph(const Victim &victim);
    std::string nameGetter();
    std::string titleGetter();

private:
    std::string name;
    std::string title;
};

std::ostream& operator<<(std::ostream &out, const Sorcerer &fixed);

#endif
