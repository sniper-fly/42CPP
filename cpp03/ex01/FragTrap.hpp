#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <string>

class FragTrap
{
public:
    FragTrap(std::string name);
    FragTrap(void);
    ~FragTrap(void);
    FragTrap& operator=(const FragTrap& other);

    void rangedAttack(std::string const &target);
    void meleeAttack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void vaulthunter_dot_exe(std::string const & target);

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
    const std::string quotes[5] = {
        "lelouch vi britannia ga meijiru.",
        "Zeroooooohhhh!!",
        "Yes, my load.",
        "Yes, your highness.",
        "Yes, your majesty."
    };
};

#endif
