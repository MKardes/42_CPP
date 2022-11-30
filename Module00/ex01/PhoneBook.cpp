#include "PhoneBook.hpp"

void	PhoneBook::add(void)
{
	string	s;

	std::cout << "Name: ";
	std::cin << s;
	contacts[index].set_name(s);

	std::cout << "Surname: ";
    std::cin << s;
    contacts[index].set_surname(s);

	std::cout << "Nickname: ";
    std::cin << s;
    contacts[index].set_nickname(s);
	
	std::cout << "Number: ";
    std::cin << s;
    contacts[index].set_number(s);

	std::cout << "Darkest Secret: ";
    std::cin << s;
    contacts[index].set_secret(s);

	std::cout << contacts[index].get_number();
	std::cout << "\n" << contacts[index].get_secret();
}
