#include "ClapTrap.hpp"

int	main(void)
{
    ClapTrap	mayuri("mayuri");

    mayuri.attack("Okarin");
    mayuri.takeDamage(5);
    mayuri.beRepaired(10);
    mayuri.showHp();
    mayuri.takeDamage(100);
    mayuri.showHp();
    return (0);
}
