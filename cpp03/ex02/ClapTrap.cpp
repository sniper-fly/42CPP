#include "ClapTrap.hpp"
#include <string>
#include <iostream>

ClapTrap::ClapTrap(void)
{
    name = "ClapTrap";
    hp = 0;
    max_hp = 0;
    energy_point = 0;
    max_ep = 0;
    level = 0;
    melee_attack_damage = 0;
    ranged_attack_damage = 0;
    armor_damage_reduction = 0;
}

ClapTrap::ClapTrap(const std::string& name) : name(name)
{
    hp = 0;
    max_hp = 0;
    energy_point = 0;
    max_ep = 0;
    level = 0;
    melee_attack_damage = 0;
    ranged_attack_damage = 0;
    armor_damage_reduction = 0;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    name = other.name;
    std::cout << "ClapTrap" << std::endl;
    hp = other.hp;
    max_hp = other.max_hp;
    energy_point = other.energy_point;
    max_ep = other.max_ep;
    level = other.level;
    melee_attack_damage = other.melee_attack_damage;
    ranged_attack_damage = other.ranged_attack_damage;
    armor_damage_reduction = other.armor_damage_reduction;
}

ClapTrap::~ClapTrap(void)
{
    // std::cout << "ClapTrap Destructor" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    name = other.name;
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

void        ClapTrap::rangedAttack(std::string const &target)
{
    std::cout << "ClapTrap " << name << " attacks " << target
    << " at range, causing " << ranged_attack_damage << " points of damage!" << std::endl;
}

void        ClapTrap::meleeAttack(std::string const &target)
{
    std::cout << "ClapTrap " << name << " attacks " << target
    << " at melee, causing " << ranged_attack_damage << " points of damage!" << std::endl;
}

void        ClapTrap::takeDamage(unsigned int amount)
{
    // amoutのダメージ量からarmordamagereduction を引く
    int actual_damage;
    actual_damage = amount - armor_damage_reduction;
    // this->hitpointsが0を下回らないようにする
    hp -= actual_damage;
    if (hp < 0) {
        hp = 0;
    }
    std::cout << name << " takes " << actual_damage
        << " points of damage!" << std::endl;
    if (hp == 0) {
        std:: cout << name << " has died.." << std::endl;
    }
}

void        ClapTrap::beRepaired(unsigned int amount)
{
    // hitpointsにamountを足す。
    // maxを超えないようにする
    hp += amount;
    if (hp > max_hp) {
        hp = max_hp;
    }
    std::cout << name << " was healed " << amount
        << " points of hp!" << std::endl;
}
