#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("Robotomy Request Form", 72, 45)
{
	this->_target = "default";
	std::cout << "RobotomyRequestForm has been constructed." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("Robotomy Request Form", 72, 45)
{
	this->_target = target;
	std::cout << "RobotomyRequestForm has been constructed." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & copy): AForm()
{
	*this = copy;
	std::cout << "RobotomyRequestForm's copy constructer called." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm & copy)
{
	this->_target = copy._target;
	std::cout << "RobotomyRequestForm's copy assignment called." << std::endl;
	return *this;
}

void	RobotomyRequestForm::execute(const Bureaucrat & executor) const
{
	if (this->getSign() == false)
        throw (FormNotSignedException());
    if (this->getExecGrade() < executor.getGrade())
        throw (GradeTooLowException());
	srand(time(0));
	std::cout << "crack crack crack.." << std::endl;
	if (rand() % 2 == 0)
	{
		int i = 0;
		while(i < 100)
		{
			if (i == 50)
				std::cout << this->_target << " has been robotomized successfully 50% of the time" << std::endl;
			i++;
		}
		std::cout << this->_target << "'s robotization process has been completed successfully" << std::endl;
	}
	else
	{
		std::cout << this->_target << "'s robotization process failed!" << std::endl;
	}
}
