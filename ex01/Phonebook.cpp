#include "Phonebook.hpp"

int				Phonebook::getIndex(void)
{
	return _index;
}

bool			Phonebook::isEmpty(void)
{
	return _isempty;
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

std::string		Phonebook::getPhoneNumber(void)
{
	return _phone_number;
}

struct tm		Phonebook::getBirthdayDate(void)
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
