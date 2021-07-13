#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <string>

class Victim
{
protected:
    Victim();
public:
    Victim(const std::string& name);
    Victim(const Victim& other);
    virtual ~Victim();
    Victim& operator=(const Victim& other);

    void getPolymorphed() const;
    std::string getName() const;
protected:
    std::string name;
    static const std::string animal; 
};

std::ostream& operator<<(std::ostream &out, const Victim& other);

#endif
