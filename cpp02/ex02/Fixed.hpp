#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
public:
	Fixed(void);
	Fixed(const Fixed &value); //なぜかconstじゃないと合わない
	Fixed(int value);
	Fixed(float value);
	~Fixed(void);

	Fixed	&operator=(const Fixed &value);
	int		toInt(void) const;
	float	toFloat(void) const;
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

private:
	int					num;
	static const int	bits = 8;
};

std::ostream& operator<<(std::ostream &out, const Fixed &fixed);

#endif
