#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->num = 0;
}

Fixed::Fixed(int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->num = value << this->bits;
}

Fixed::Fixed(float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->num = roundf(value * (1 << this->bits)); 
	//課題文に合わせるためroundfが必要
}

Fixed::Fixed(const Fixed &value)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = value;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=(const Fixed &value)
{
	std::cout << "Assignation operator called" << std::endl;
	this->num = value.getRawBits();
	return *this;
}

int		Fixed::getRawBits(void) const
{
	return this->num;
}

void	Fixed::setRawBits(int const raw)
{
	this->num = raw;
}

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
