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
    void ninjaShoebox(NinjaTrap& other);
    void ninjaShoebox(ClapTrap& other);
    void ninjaShoebox(FragTrap& other);
    void ninjaShoebox(ScavTrap& other);
private:
    static const std::string quotes[5];
};

#endif
