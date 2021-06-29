#include "FragTrap.hpp"
#include <string>
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

FragTrap::FragTrap(std::string name) : name(name)
{
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

std::string const FragTrap::quotes[5] = {
    "lelouch vi britannia ga meijiru.",
    "Zeroooooohhhh!!",
    "Yes, my load.",
    "Yes, your highness.",
    "Yes, your majesty."
};

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

void        FragTrap::takeDamage(unsigned int amount)
{
    // amoutのダメージ量からarmordamagereduction を引く
    int actual_damage;
    actual_damage = amount - armor_damage_reduction;
    // this->hitpointsが0を下回らないようにする
    hp -= actual_damage;
    if (hp < 0) {
        hp = 0;
    }
    std::cout << "FR4G-TP " << name << " takes " << actual_damage
        << " points of damage!" << std::endl;
    if (hp == 0) {
        std:: cout << name << " has died.." << std::endl;
    }
}

void        FragTrap::beRepaired(unsigned int amount)
{
    // hitpointsにamountを足す。
    // maxを超えないようにする
    hp += amount;
    if (hp > max_hp) {
        hp = max_hp;
    }
    std::cout << "FR4G-TP " << name << " was healed " << amount
        << " points of hp!" << std::endl;
}

void        FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    if (energy_point < 25) {
        std::cout << "[Error]: not enough energy." << std::endl;
        return ;
    }
    // 25エナジーポイントを消費する
    energy_point -= 25;
    // ランダムで5つ以上の選択肢から攻撃を選ぶ
    std::string attack = quotes[rand() % 5];
    std::cout << name << " uses his " << attack << " on " << target << std::endl;
}

void        FragTrap::show_hp(void)
{
    std::cout << name << "'s hp is " <<  hp << " now." << std::endl;
}
