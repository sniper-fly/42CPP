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

    virtual void getPolymorphed();
    std::string getName();
protected:
    std::string name;
    static const std::string animal; 
};

#endif
