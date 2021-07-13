#ifndef PEON_HPP
#define PEON_HPP

#include <string>
#include "Victim.hpp"

class Peon : public Victim
{
private:
    Peon();
public:
    Peon(const std::string& name);
    Peon(const Peon& other);
    ~Peon();
    Peon& operator=(const Peon& other);

    void getPolymorphed();
};

std::ostream &operator<<(std::ostream &out, Peon const &ref);

#endif
