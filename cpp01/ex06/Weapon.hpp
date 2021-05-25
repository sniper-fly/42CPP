#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>

class Weapon
{
	public:
		std::string		&getType(void);
		void			setType(std::string type);
		Weapon(void);
		Weapon(std::string type);
	private:
		std::string		type;
};

#endif
