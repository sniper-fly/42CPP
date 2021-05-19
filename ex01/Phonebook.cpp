#include "Phonebook.hpp"

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

std::string		Phonebook::getFirstName(void)
{
	return _first_name;
}

std::string		Phonebook::getLastName(void)
{
	return _last_name;
}

std::string		Phonebook::getNickName(void)
{
	return _nickname;
}

std::string		Phonebook::getLogin(void)
{
	return _login;
}

std::string		Phonebook::getPostalAddress(void)
{
	return _postal_address;
}
std::string		Phonebook::getEmailAddress(void)
{
	return _email_address;
}

int		Phonebook::getPhoneNumber(void)
{
	return _phone_number;
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

std::string		Phonebook::getFavoriteMeal(void)
{
	return _favorite_meal;
}

std::string		Phonebook::getUnderwearColor(void)
{
	return _underwear_color;
}

std::string		Phonebook::getDarkestSecret(void)
{
	return _darkest_secret;
}

void		Phonebook::setFirstName(std::string first_name)
{
	this->_first_name = first_name;
}

void		Phonebook::setLastName(std::string last_name)
{
	this->_last_name = last_name;
}

void		Phonebook::setNickName(std::string nick_name)
{
	this->_nickname = nick_name;
}

void		Phonebook::setLogin(std::string login)
{
	this->_login = login;
}

void		Phonebook::setPostalAddress(std::string postal_address)
{
	this->_postal_address = postal_address;
}

int			Phonebook::setEmailAddress(std::string email_address)
{
	this->_email_address = email_address;
}

int			Phonebook::setPhoneNumber(int phone_number)
{
	this->_phone_number = phone_number;
}

int			Phonebook::setBirthdayYear(int year)
{
	this->_birthday_year = year;
}

int			Phonebook::setBirthdayMonth(int month)
{
	this->_birthday_month = month;
}

int			Phonebook::setBirthdayDate(int date)
{
	this->_birthday_date = date;
}

void		Phonebook::setFavoriteMeal(std::string meal)
{
	
}

void		Phonebook::setUnderwearColor(std::string color)
{
	
}

void		Phonebook::setDarkestSecret(std::string darkest_secret)
{
	
}
