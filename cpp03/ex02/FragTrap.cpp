#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

FragTrap::FragTrap(void)
{
    name = "lelouch";
    std::cout << "Utteiinoha, utareru kakugo no aru yatsu dake da." << std::endl;
    hp = 100;
    max_hp = 100;
    energy_point = 100;
    max_ep = 100;
    level = 1;
    melee_attack_damage = 30;
    ranged_attack_damage = 20;
    armor_damage_reduction = 5;
}

FragTrap::FragTrap(const std::string& name)
{
    this->name = name;
    std::cout << "Utteiinoha, utareru kakugo no aru yatsu dake da." << std::endl;
    hp = 100;
    max_hp = 100;
    energy_point = 100;
    max_ep = 100;
    level = 1;
    melee_attack_damage = 30;
    ranged_attack_damage = 20;
    armor_damage_reduction = 5;
}

FragTrap::~FragTrap(void)
{
    std::cout << "I will destroy the world and make it a new one." << std::endl;
}

FragTrap&   FragTrap::operator=(const FragTrap& other)
{
    name = other.name;
    std::cout << "Utteiinoha, utareru kakugo no aru yatsu dake da." << std::endl;
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

void        FragTrap::rangedAttack(std::string const &target)
{
    std::cout << "FR4G-TP " << name << " attacks " << target
    << " at range, causing " << ranged_attack_damage << " points of damage!" << std::endl;
}

void        FragTrap::meleeAttack(std::string const &target)
{
    std::cout << "FR4G-TP " << name << " attacks " << target
    << " at melee, causing " << ranged_attack_damage << " points of damage!" << std::endl;
}

void        FragTrap::vaulthunter_dot_exe(std::string const &target)
{
    (void)target;
    // 25エナジーポイントを消費する
    energy_point -= 25;
    // エナジー切れを通知する エナジーがあれば攻撃
    if (energy_point < 0) {
        energy_point = 0;
        std::cout << "[Error]: not enough energy." << std::endl;
        return ;
    }
    // ランダムで5つ以上の選択肢から攻撃を選ぶ
    std::string attack = quotes[rand() % 5];
    std::cout << name << " uses his " << attack << " on " << target << std::endl;
}
