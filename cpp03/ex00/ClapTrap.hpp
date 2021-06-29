#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
public:
    ClapTrap(std::string name);
    virtual ~ClapTrap();

    void attack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void showHp(void);
private:
    std::string name;
    int hitpoints;
    int energy_points;
    int attack_damage;
};

#endif
