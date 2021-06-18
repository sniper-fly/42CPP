#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(void)
{
    name = "bondrewd";
    std::cout << "Oyaoyaoyaoyaoya, oyaoyaoyaoyaoya" << std::endl;
    hp = 100;
    max_hp = 100;
    energy_point = 50;
    max_ep = 50;
    level = 1;
    melee_attack_damage = 20;
    ranged_attack_damage = 15;
    armor_damage_reduction = 3;
}

ScavTrap::ScavTrap(const std::string& name)
{
    this->name = name;
    std::cout << "Oyaoyaoyaoyaoya, oyaoyaoyaoyaoya" << std::endl;
    hp = 100;
    max_hp = 100;
    energy_point = 50;
    max_ep = 50;
    level = 1;
    melee_attack_damage = 20;
    ranged_attack_damage = 15;
    armor_damage_reduction = 3;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "I desu, I desuyo, Nanachi" << std::endl;
}

ScavTrap&   ScavTrap::operator=(const ScavTrap& other)
{
    name = other.name;
    std::cout << "Oyaoyaoyaoyaoya, oyaoyaoyaoyaoya" << std::endl;
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

void        ScavTrap::rangedAttack(std::string const &target)
{
    std::cout << "BDRD-TP " << name << " attacks " << target
    << " at range, causing " << ranged_attack_damage << " points of damage!" << std::endl;
}

void        ScavTrap::meleeAttack(std::string const &target)
{
    std::cout << "BDRD-TP " << name << " attacks " << target
    << " at melee, causing " << ranged_attack_damage << " points of damage!" << std::endl;
}

void        ScavTrap::challengeNewcomer(void)
{
    std::cout << "BDRD-TP " << name << " use " << challenges[rand() % 5] << std::endl;
}
