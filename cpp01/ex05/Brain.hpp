#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class Brain
{
	public:
		Brain();
		~Brain();
		std::string	identify(void) const;
	private:
		int iq;
		int eq;
};

#endif
