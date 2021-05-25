#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"

class Human
{
	public:
		Human(void);
		// ~Human();
		std::string		identify(void);
		const Brain		&getBrain(void);
	private:
		const Brain		brain;
};

#endif
