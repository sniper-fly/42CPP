#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class FragTrap: public ClapTrap
{
public:
    FragTrap(void);
    FragTrap(const std::string& name);
    FragTrap(const FragTrap& other);
    ~FragTrap(void);
    FragTrap& operator=(const FragTrap& other);

    void vaulthunter_dot_exe(std::string const & target);
private:
    const std::string quotes[5] = {
        "lelouch vi britannia ga meijiru.",
        "Zeroooooohhhh!!",
        "Yes, my load.",
        "Yes, your highness.",
        "Yes, your majesty."
    };
};

#endif
