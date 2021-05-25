#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <string>

class HumanA
{
	public:
		void	attack(void);
		HumanA(std::string name, Weapon buki);
	private:
		Weapon			buki;
		std::string		name;
};

#endif
