#ifndef PONY_HPP
# define PONY_HPP

# include <string>

class Pony
{
	public:
		Pony(std::string name, std::string team);
		~Pony(void);
		void	introduce(void);
	private:
		std::string		_name;
		std::string		_team;
};

#endif
