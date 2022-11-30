#include "Contact.hpp"
#include "PhoneBook.hpp"

int main (void)
{
	PhoneBook	ph;
	std::string	s;

	std::cout << "\nWelcome to PhoneBook\n\n";
	std::cout << "You're able to choose following options:\n";
	std::cout << "- ADD\n";
	std::cout << "- SEARCH\n";
	std::cout << "- EXIT\n";
	while (1)
	{
		std::cout << "Command: ";
		std::cin >> s;
		if (s == "ADD")
			ph.add();
		else if (s == "SEARCH")
			ph.search();
		else if (s[0] == '\n')
			continue ;
		else if (s == "EXIT")
			break;
		else
			std::cout << "Please type a valid command\n";
	}
	return (0);
}
