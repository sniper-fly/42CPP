
#include "Phonebook.hpp"
#include <iostream>

Phonebook::Phonebook(void)
{
	_is_empty = true;
}

Phonebook::~Phonebook(void)
{
	return ;
}

int				Phonebook::getIndex(void)
{
	return _index;
}

bool			Phonebook::isEmpty(void)
{
	return _is_empty;
}

std::string		Phonebook::getStrData(int i)
{
	return string_data[i];
}

int				Phonebook::getBirthdayYear(void)
{
	return _birthday_year;
}

int				Phonebook::getBirthdayMonth(void)
{
	return _birthday_month;
}

int				Phonebook::getBirthdayDate(void)
{
	return _birthday_date;
}

void		Phonebook::setStrData(int i, std::string data)
{
	this->string_data[i] = data;
}

// int			Phonebook::setBirthdayYear(int year)
// {
// 	this->_birthday_year = year;
// }

// int			Phonebook::setBirthdayMonth(int month)
// {
// 	this->_birthday_month = month;
// }

// int			Phonebook::setBirthdayDate(int date)
// {
// 	this->_birthday_date = date;
// }