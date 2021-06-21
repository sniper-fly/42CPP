#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>

// クラスメンバを移す
// melee, ranged だけ変更する
// 

class NinjaTrap : public ClapTrap
{
public:
    NinjaTrap(void);
    NinjaTrap(const std::string& name);
    NinjaTrap(const NinjaTrap& other);
    ~NinjaTrap(void);
    NinjaTrap& operator=(const NinjaTrap& other);

    void rangedAttack(std::string const &target);
    void meleeAttack(std::string const &target);
    // void ninjaShoebox(const NinjaTrap& other);
    // void ninjaShoebox(const ClapTrap& other);
    // void ninjaShoebox(const FragTrap& other);
    // void ninjaShoebox(const ScavTrap& other);
private:
    static const std::string quotes[5];
};

#endif
