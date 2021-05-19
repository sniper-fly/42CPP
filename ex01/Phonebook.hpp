#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <string>

enum : int {
	FIRST_NAME,
	LAST_NAME,
	NICK_NAME,
	LOGIN,
	POSTAL_ADDRESS,
	// EMAIL_ADDRESS,
	// PHONE_NUMBER,
	FAVORITE_MEAL,
	UNDERWEAR_COLOR,
	DARKEST_SECRET,
	TOTAL_DATA
};

const std::string contact_str[TOTAL_DATA] = {
	"first name",
	"last name",
	"nick name",
	"login",
	"postal address",
	// "email address",
	// "phone number",
	"favorite meal",
	"underwear color",
	"darkest secret"
};

class		Phonebook
{
	private:
		int			_index;
		bool		_is_empty;
		// std::string	_first_name;
		// std::string	_last_name;
		// std::string	_nickname;
		// std::string	_login;
		// std::string	_postal_address;
		// std::string	_email_address;
		// int			_phone_number; //TODO:string型に変更するべき
		int			_birthday_year;
		int			_birthday_month;
		int			_birthday_date;
		// std::string	_favorite_meal;
		// std::string	_underwear_color;
		// std::string _darkest_secret;
		std::string string_data[TOTAL_DATA];

	public:
		std::string		getStrData(int i);
		int				getIndex(void);
		bool			isEmpty(void);
		// std::string		getFirstName(void);
		// std::string		getLastName(void);
		// std::string		getNickName(void);
		// std::string		getLogin(void);
		// std::string		getPostalAddress(void);
		// std::string		getEmailAddress(void);
		int				getPhoneNumber(void);
		int				getBirthdayYear(void);
		int				getBirthdayMonth(void);
		int				getBirthdayDate(void);
		// std::string		getFavoriteMeal(void);
		// std::string		getUnderwearColor(void);
		// std::string		getDarkestSecret(void);

		void		setStrData(int i, std::string data);
		// void		setFirstName(std::string first_name);
		// void		setLastName(std::string last_name);
		// void		setNickName(std::string nick_name);
		// void		setLogin(std::string login);
		// void		setPostalAddress(std::string postal_address);
		// void		setProperty(std::string &to_set, std::string property);
		// int			setEmailAddress(std::string email_address);
		// int			setPhoneNumber(int phone_number);
		int			setBirthdayYear(int year);
		int			setBirthdayMonth(int month);
		int			setBirthdayDate(int date);
		// void		setFavoriteMeal(std::string meal);
		// void		setUnderwearColor(std::string color);
		// void		setDarkestSecret(std::string darkest_secret);
		Phonebook(void);
		~Phonebook(void);
};

#endif
