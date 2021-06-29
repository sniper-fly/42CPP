#include "ClapTrap.hpp"

int	main(void)
{
    ClapTrap	mayuri("mayuri");

    mayuri.attack("Okarin");
    mayuri.takeDamage(5);
    mayuri.beRepaired(10);
    mayuri.takeDamage(100);
    return (0);
}
