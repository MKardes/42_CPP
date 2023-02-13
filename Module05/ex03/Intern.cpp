#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern has been constructed." << std::endl;
}

Intern::Intern(const Intern & copy)
{
	*this = copy;
	std::cout << "Intern's copy constructer called." << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern has been destructed." << std::endl;
}

Intern &Intern::operator=(const Intern & copy)
{
	(void)copy;
	std::cout << "Intern's copy assignment called." << std::endl;
	return *this;
}

int	type(std::string name)
{
	std::string types[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	int	i = 0;
	while (i < 3)
	{
		if (name == types[i])
			return i;
		i++;
	}
	return -1;
}

AForm *Intern::makeForm(std::string name, std::string target)
{
	AForm *ptr = NULL;
	switch(type(name))
	{
		case 0:
			ptr= new ShrubberyCreationForm(target);
			std::cout << "Intern creates " << ptr->getName() << std::endl;
			return ptr;
		case 1:
			ptr = new RobotomyRequestForm(target);
			std::cout << "Intern creates " << ptr->getName() << std::endl;
			return ptr;
		case 2:
			ptr = new PresidentialPardonForm(target);
			std::cout << "Intern creates " << ptr->getName() << std::endl;
			return ptr;
		default:
		std::cout << "Parameter does not exist!!!" << std::endl;
	}
	return 0;
}
