#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern & copy);
		~Intern();
		Intern &operator=(const Intern & copy);

		AForm * makeForm(std::string name, std::string target);
};

#endif
