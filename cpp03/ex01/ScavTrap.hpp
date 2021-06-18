#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <string>

class ScavTrap
{
public:
    ScavTrap(std::string name);
    ScavTrap(void);
    ~ScavTrap(void);
    ScavTrap& operator=(const ScavTrap& other);

    void challengeNewcomer(void);
    void rangedAttack(std::string const &target);
    void meleeAttack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void show_hp(void);

private:
    int hp;
    int max_hp;
    int energy_point;
    int max_ep;
    int level;
    std::string name;
    int melee_attack_damage;
    int ranged_attack_damage;
    int armor_damage_reduction;
    const std::string challenges[5] = {
        "Shaker",
        "Forkaless",
        "Suparagumosu",
        "Gang way",
        "Sennin Kusabi"
    };
};

#endif
