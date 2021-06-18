#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

// 共通する関数や変数を抜き出す done
// mainを作る done
// 変更点のみ関数を作る done
// .cppの実装
// 動作確認
#include <string>

class ClapTrap
{
public:
    ClapTrap(void);
    ClapTrap(const std::string& name);
    ClapTrap(const ClapTrap& other);
    virtual ~ClapTrap(void);
    ClapTrap& operator=(const ClapTrap& other);

    virtual void rangedAttack(std::string const &target);
    virtual void meleeAttack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

protected:
    int hp;
    int max_hp;
    int energy_point;
    int max_ep;
    int level;
    std::string name;
    int melee_attack_damage;
    int ranged_attack_damage;
    int armor_damage_reduction;
};

#endif
