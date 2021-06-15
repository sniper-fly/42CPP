#include "FragTrap.hpp"

int	main(void)
{
    srand(time(0));
    FragTrap	frag("lelouch");

    frag.meleeAttack("suzaku");
    frag.rangedAttack("suzaku");

    frag.takeDamage(30);
    frag.takeDamage(30);
    frag.takeDamage(30);
    frag.takeDamage(30);
    frag.beRepaired(60);
    frag.takeDamage(30);

    frag.vaulthunter_dot_exe("Jack");
    frag.vaulthunter_dot_exe("Jack");
    frag.vaulthunter_dot_exe("Jack");
}
