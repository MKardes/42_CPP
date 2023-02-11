#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include "AForm.hpp"

class RobotomyRequestForm: public AForm
{
	private:
		std::string	_target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm & copy);
		~RobotomyRequestForm();
		RobotomyRequestForm &operator=(const RobotomyRequestForm & copy);

		void    execute(Bureaucrat const & executor) const;
};

#endif
