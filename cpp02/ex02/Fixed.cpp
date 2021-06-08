#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void)
{
	#ifdef DEBUG
	std::cout << "Default constructor called" << std::endl;
	#endif
	this->num = 0;
}

Fixed::Fixed(const Fixed &value)
{
	#ifdef DEBUG
	std::cout << "Copy constructor called" << std::endl;
	#endif
	*this = value;
}

Fixed::Fixed(int value)
{
	#ifdef DEBUG
	std::cout << "Int constructor called" << std::endl;
	#endif
	this->num = value << this->bits;
}

Fixed::Fixed(float value)
{
	#ifdef DEBUG
	std::cout << "Float constructor called" << std::endl;
	#endif
	this->num = roundf(value * (1 << this->bits)); 
	//課題文に合わせるためroundfが必要
}

Fixed::~Fixed(void)
{
	#ifdef DEBUG
	std::cout << "Destructor called" << std::endl;
	#endif
}

Fixed&	Fixed::operator=(const Fixed &value)
{
	#ifdef DEBUG
		std::cout << "Assignation operator called" << std::endl;
	#endif

	this->num = value.getRawBits();
	return *this;
}

Fixed&	Fixed::operator++(void)
{
	// *this = *this + Fixed(1);
	(this->num)++;
	return *this;
}

Fixed	Fixed::operator++(int _)
{
	(void)_;
	Fixed tmp = *this;
	operator++();
	return tmp;
	// 後置インクリメントの場合は全く別のアドレスの変数を返す
	// 後置インクリメントはパフォーマンスが悪いらしい
}

Fixed&	Fixed::operator--(void)
{
	(this->num)--;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp = *this;
	operator--();
	return tmp;
}

Fixed	Fixed::operator+(Fixed ope)
{
	Fixed res;
	res.setRawBits(this->getRawBits() + ope.getRawBits());
	return (res);
}

Fixed	Fixed::operator-(Fixed ope)
{
	Fixed res;
	res.setRawBits(this->getRawBits() - ope.getRawBits());
	return (res);
}

Fixed	Fixed::operator*(Fixed ope)
{
	Fixed res(this->toFloat() * ope.toFloat());
	// res.setRawBits(this->getRawBits() * ope.getRawBits() / (1 << this->bits));
	return (res);
}

Fixed	Fixed::operator/(Fixed ope)
{
	Fixed res(this->toFloat() / ope.toFloat());
	// Fixed res;
	// res.setRawBits(this->getRawBits() * (1 << this->bits) / (float)ope.getRawBits());
	return (res);
}

bool	Fixed::operator>(Fixed ope) { return (this->getRawBits() > ope.getRawBits()); }

bool	Fixed::operator<(Fixed ope) { return (this->getRawBits() < ope.getRawBits()); }

bool	Fixed::operator>=(Fixed ope) { return (this->getRawBits() >= ope.getRawBits()); }

bool	Fixed::operator<=(Fixed ope) { return (this->getRawBits() <= ope.getRawBits()); }

bool	Fixed::operator==(Fixed ope) { return (this->getRawBits() == ope.getRawBits()); }

bool	Fixed::operator!=(Fixed ope) { return (this->getRawBits() != ope.getRawBits()); }

Fixed& Fixed::min(Fixed &a, Fixed &b) { return (a < b ? a : b); }

Fixed& Fixed::max(Fixed &a, Fixed &b) { return (a > b ? a : b); }

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a.getRawBits() < b.getRawBits() ? a : b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a.getRawBits() > b.getRawBits() ? a : b);
}

int		Fixed::getRawBits(void) const { return this->num; }

void	Fixed::setRawBits(int const raw) { this->num = raw; }

int		Fixed::toInt(void) const
{
	return (this->num >> this->bits);
}

float	Fixed::toFloat(void) const
{
	return ((float)this->num / (float)(1 << this->bits));
}

std::ostream& operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}
