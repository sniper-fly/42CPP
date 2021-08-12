#ifndef SUBARU_HPP
#define SUBARU_HPP

#include "Victim.hpp"
#include "string"

class Subaru : public Victim
{
private:
    Subaru();
public:
    virtual ~Subaru();
    Subaru(std::string const &name);
    Subaru(Subaru const &other);
    Subaru &operator=(Subaru const &other);

    void getPolymorphed() const;

private:
    static const std::string animal; 
};

std::ostream& operator<<(std::ostream &out, const Subaru& other);

#endif /* SUBARU_HPP */
