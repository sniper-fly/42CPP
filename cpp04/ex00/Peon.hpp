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
    virtual ~Peon();
    Peon& operator=(const Peon& other);

    void getPolymorphed() const;

private:
    static const std::string animal; 
};

std::ostream &operator<<(std::ostream &out, Peon const &ref);

#endif
