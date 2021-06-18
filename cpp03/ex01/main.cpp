#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
    std::srand(time(0));
    FragTrap ozen("ozen");
    ScavTrap bondrewd("bondrewd");

    ozen.rangedAttack("bondrewd");
    bondrewd.takeDamage(20);
    bondrewd.meleeAttack("ozen");
    ozen.takeDamage(20);

    ozen.meleeAttack("bondrewd");
    bondrewd.takeDamage(30);
    bondrewd.rangedAttack("ozen");
    ozen.takeDamage(15);

    ozen.meleeAttack("bondrewd");
    bondrewd.takeDamage(30);
    bondrewd.rangedAttack("ozen");
    ozen.takeDamage(15);
    ozen.show_hp();
    bondrewd.show_hp();

    ozen.meleeAttack("bondrewd");
    bondrewd.takeDamage(100);
    bondrewd.rangedAttack("ozen");
    ozen.takeDamage(100);
    ozen.show_hp();
    bondrewd.show_hp();

    ozen.beRepaired(30);
    bondrewd.beRepaired(40);
    ozen.show_hp();
    bondrewd.show_hp();

    ozen.vaulthunter_dot_exe("bondrewd");
    bondrewd.challengeNewcomer();

    ozen.vaulthunter_dot_exe("bondrewd");
    bondrewd.challengeNewcomer();

    ozen.vaulthunter_dot_exe("bondrewd");
    bondrewd.challengeNewcomer();
    return (0);
}
