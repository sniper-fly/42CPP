#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
public:
	Fixed(void);
	Fixed(Fixed &num);
	~Fixed(void);

	Fixed	&operator=(Fixed &num);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

private:
	int					num;
	static const int	bits = 8;
};

#endif
