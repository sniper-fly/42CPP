#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

int	main(void)
{
    std::srand(time(0));
    FragTrap frag("sayaka");
    ScavTrap scav("kyoko");
    ClapTrap clap("mami");
    NinjaTrap ninja1("homura");
    NinjaTrap ninja2("madoka");

    ninja1.ninjaShoebox(frag);
    ninja1.ninjaShoebox(scav);
    ninja1.ninjaShoebox(clap);
    ninja1.ninjaShoebox(ninja2);
    
    return (0);
}

// int	main(void)
// {
//     std::srand(time(0));
//     FragTrap ozen("ozen");
//     ScavTrap bondrewd("bondrewd");

//     ozen.rangedAttack("bondrewd");
//     bondrewd.takeDamage(20);
//     bondrewd.meleeAttack("ozen");
//     ozen.takeDamage(15);

//     ozen.meleeAttack("bondrewd");
//     bondrewd.takeDamage(20);
//     bondrewd.rangedAttack("ozen");
//     ozen.takeDamage(15);

//     ozen.meleeAttack("bondrewd");
//     bondrewd.takeDamage(20);
//     bondrewd.rangedAttack("ozen");
//     ozen.takeDamage(15);
//     ozen.show_hp();
//     bondrewd.show_hp();

//     ozen.meleeAttack("bondrewd");
//     bondrewd.takeDamage(100);
//     bondrewd.rangedAttack("ozen");
//     ozen.takeDamage(100);
//     ozen.show_hp();
//     bondrewd.show_hp();

//     ozen.beRepaired(30);
//     bondrewd.beRepaired(40);

//     ozen.vaulthunter_dot_exe("bondrewd");
//     bondrewd.challengeNewcomer();

//     ozen.vaulthunter_dot_exe("bondrewd");
//     bondrewd.challengeNewcomer();

//     ozen.vaulthunter_dot_exe("bondrewd");
//     bondrewd.challengeNewcomer();
//     return (0);
// }
