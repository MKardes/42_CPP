#include "PhoneBook.hpp"

void get_field(std::string s)
{
	std::string tmp;
	if (s.length() <= 10)
		std::cout << std::right << std::setw(10) << s;
	else
	{
		tmp = s.substr(0,9) + ".";
		std::cout << std::setw(10) << tmp;
	}
}

int	check_is_num(std::string s)
{
	int	i = 0;

	while (s[i])
	{
		if (std::isdigit(s[i]) == 0)
			return (0);
		i++;
	}
	return 1;
}

void	PhoneBook::add(void)
{
	std::string	s;

	if (index == 8)
		this->list_chc = 1;
	index = index % 8;
	
	std::cout << "Name: ";
	std::getline(std::cin, s);
	contacts[index].set_name(s);

	std::cout << "Surname: ";
	std::getline(std::cin, s);
	contacts[index].set_surname(s);

	std::cout << "Nickname: ";
	std::getline(std::cin, s);
	contacts[index].set_nickname(s);
    
	std::cout << "Number: ";
	std::getline(std::cin, s);
	contacts[index].set_num(s);

	std::cout << "Darkest Secret: ";
	std::getline(std::cin, s);
	contacts[index].set_secret(s);
	std::cout << std::endl;
	
	index++;
}

void	PhoneBook::search(void)
{
	int		i = 0;
	int		max = index;
	std::string	s;
	int		index;

	std::cout << "*----------*----------*----------*----------*\n";
	std::cout << "|     Index|      Name|   Surname|  Nickname|\n";
	
	if (this->list_chc)
		max = 8;

	while (i < max)
	{
		std::cout << "|----------|----------|----------|----------|\n";
		std::cout << "|" << std::right << std::setw(10) << i;
		std::cout << "|";
		get_field(contacts[i].get_name());
		std::cout << "|";
		get_field(contacts[i].get_surname());
		std::cout << "|";
		get_field(contacts[i].get_nickname());
		std::cout << "|\n";
		i++;
	}
	std::cout << "*----------*----------*----------*----------*\n";
	if (max == 0)
	{
		std::cout << "As you can see, you have to add anyone first!!\nYou have nobody to call:( (Loneliness)\n\n";
		return ;
	}
	std::cout << "Index: ";
	std::cin >> s;
	if (check_is_num(s) == 0)
	{
		std::cout << "Invalid index!\n";
		return ;
	}
	index = std::stoi(s, NULL, 10);
	if (index < max)
	{
       	std::cout << "Name: " << contacts[index].get_name() << std::endl;
		std::cout << "Surname: " << contacts[index].get_surname() << std::endl;
		std::cout << "Nickname: " << contacts[index].get_nickname() << std::endl;
		std::cout << "Number: " << contacts[index].get_num() << std::endl;
		std::cout << "Darkest Secret: " << contacts[index].get_secret() << std::endl;
	}
	else
		std::cout << "Invalid index!\n";
	std::cout << std::endl;
	
}

PhoneBook::PhoneBook()
{
	this->index = 0;
	this->list_chc = 0;
}