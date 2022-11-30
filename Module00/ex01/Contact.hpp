#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <locale>
#include <iomanip>

class Contact
{
	private:
		std::string	name;
		std::string	surname;
		std::string	nickname;
		std::string	dark_scrt;
		std::string	number;

	public:
		Contact();
		virtual ~Contact();

		void	set_name(std::string s);
		void	set_surname(std::string s);
		void  	set_nickname(std::string s);
		void    set_num(std::string s);
		void  	set_secret(std::string s);
		
		std::string	get_name(void);
		std::string	get_surname(void);
		std::string	get_nickname(void);
		std::string	get_num(void);
		std::string	get_secret(void);
};

#endif
