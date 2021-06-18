#include "NinjaTrap.hpp"
#include <iostream>

NinjaTrap::NinjaTrap(void)
{
    name = "kumogakure saizo";
    std::cout << "Dron!" << std::endl;
    hp = 60;
    max_hp = 60;
    energy_point = 120;
    max_ep = 120;
    level = 1;
    melee_attack_damage = 60;
    ranged_attack_damage = 5;
    armor_damage_reduction = 0;
}

NinjaTrap::NinjaTrap(const std::string& name)
{
    this->name = name;
    std::cout << "Dron!" << std::endl;
    hp = 60;
    max_hp = 60;
    energy_point = 120;
    max_ep = 120;
    level = 1;
    melee_attack_damage = 60;
    ranged_attack_damage = 5;
    armor_damage_reduction = 0;
}

NinjaTrap::~NinjaTrap(void)
{
    std::cout << "Gomen!" << std::endl;
}

NinjaTrap&   NinjaTrap::operator=(const NinjaTrap& other)
{
    name = other.name;
    std::cout << "Dron!" << std::endl;
    hp = other.hp;
    max_hp = other.max_hp;
    energy_point = other.energy_point;
    max_ep = other.max_ep;
    level = other.level;
    melee_attack_damage = other.melee_attack_damage;
    ranged_attack_damage = other.ranged_attack_damage;
    armor_damage_reduction = other.armor_damage_reduction;
    return (*this);
}

void        NinjaTrap::rangedAttack(std::string const &target)
{
    std::cout << "NINJ-TP " << name << " attacks " << target
    << " at range, causing " << ranged_attack_damage << " points of damage!" << std::endl;
}

void        NinjaTrap::meleeAttack(std::string const &target)
{
    std::cout << "NINJ-TP " << name << " attacks " << target
    << " at melee, causing " << ranged_attack_damage << " points of damage!" << std::endl;
}

// void ninjaShoebox(const NinjaTrap& other)
// {

// }

// void ninjaShoebox(const ClapTrap& other)
// {

// }

// void ninjaShoebox(const FragTrap& other)
// {

// }

// void ninjaShoebox(const ScavTrap& other)
// {

// }
