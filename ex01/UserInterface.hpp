#ifndef USERINTERFACE_HPP
# define USERINTERFACE_HPP

# include <string>
# include "Phonebook.hpp"

class UserInterface
{
	private:
		const static int TOTAL_CONTACTS = 8;
		static void	put_each_elem(std::string str);
		static void	receive_contact(std::string contact_str, std::string &input);
		static void	put_confirm_msg(std::string kind);
		static void	add_phonebook(Phonebook &contacts);
		static void	put_bufline(void);
		static void	put_elem_row(Phonebook contact[TOTAL_CONTACTS], int index);
		static void	put_phonebook_table(Phonebook contacts[TOTAL_CONTACTS]);
		static void	search_phonebook(Phonebook contacts[TOTAL_CONTACTS]);
	public:
		static void	wait_user_command(void);
};

#endif
