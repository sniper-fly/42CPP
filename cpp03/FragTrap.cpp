#include "FragTrap.hpp"
#include <string>
#include <iostream>

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
