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
	Fixed	&operator++(void);
	Fixed	operator++(int); //後置
	Fixed	&operator--(void);
	Fixed	operator--(int); //後置
	Fixed	operator+(Fixed ope);
	Fixed	operator-(Fixed ope);
	Fixed	operator*(Fixed ope);
	Fixed	operator/(Fixed ope);
	bool	operator>(Fixed ope);
	bool	operator<(Fixed ope);
	bool	operator>=(Fixed ope);
	bool	operator<=(Fixed ope);
	bool	operator==(Fixed ope);
	bool	operator!=(Fixed ope);

	static Fixed &min(Fixed &a, Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
	static Fixed const &min(const Fixed &a, const Fixed &b);
	static Fixed const &max(const Fixed &a, const Fixed &b);

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
