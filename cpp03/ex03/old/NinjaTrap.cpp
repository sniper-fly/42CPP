#include "NinjaTrap.hpp"
#include <iostream>

NinjaTrap::NinjaTrap(void)
    :ClapTrap()
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
    :ClapTrap(name)
{
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

const std::string NinjaTrap::quotes[5] = {
    "haruha-ru infiga-ru",
    "asufaru leaf",
    "augu aruhazard",
    "barark saika",
    "forarz zola"
};

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

void        NinjaTrap::ninjaShoebox(NinjaTrap& other)
{
    const int ep_cost = 20;
    if (energy_point < ep_cost) {
        std::cout << "[Error]: not enough energy." << std::endl;
        return ;
    }
    // 25エナジーポイントを消費する
    energy_point -= ep_cost;
    // ランダムで5つ以上の選択肢から攻撃を選ぶ
    std::cout << name << " uses his " << "Shuriken" << " on " << other.getName()
    << std::endl;
    other.takeDamage(20 + (rand() % 10));
}

void         NinjaTrap::ninjaShoebox(ClapTrap& other)
{
    const int ep_cost = 20;
    if (energy_point < ep_cost) {
        std::cout << "[Error]: not enough energy." << std::endl;
        return ;
    }
    // 25エナジーポイントを消費する
    energy_point -= ep_cost;
    // ランダムで5つ以上の選択肢から攻撃を選ぶ
    std::cout << name << " uses his " << "Makibishi" << " on " << other.getName()
    << std::endl;
    other.takeDamage(20 + (rand() % 3));
}

void NinjaTrap::ninjaShoebox(FragTrap& other)
{
    const int ep_cost = 20;
    if (energy_point < ep_cost) {
        std::cout << "[Error]: not enough energy." << std::endl;
        return ;
    }
    // 25エナジーポイントを消費する
    energy_point -= ep_cost;
    // ランダムで5つ以上の選択肢から攻撃を選ぶ
    std::cout << name << " uses his " << "katana" << " on " << other.getName()
    << std::endl;
    other.takeDamage(30 + (rand() % 3));
}

void NinjaTrap::ninjaShoebox(ScavTrap& other)
{
    const int ep_cost = 20;
    if (energy_point < ep_cost) {
        std::cout << "[Error]: not enough energy." << std::endl;
        return ;
    }
    // 25エナジーポイントを消費する
    energy_point -= ep_cost;
    // ランダムで5つ以上の選択肢から攻撃を選ぶ
    std::cout << name << " uses his " << "kunai" << " on " << other.getName()
    << std::endl;
    other.takeDamage(25 + (rand() % 5));
}
