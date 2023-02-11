#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("Presidential Pardon Form", 25, 5)
{
	this->_target = "default";
	std::cout << "PresidentialPardonForm has been constructed." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("Presidential Pardon Form", 25, 5)
{
    this->_target = target;
    std::cout << "PresidentialPardonForm has been constructed." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & copy): AForm(copy)
{
	*this = copy;
	std::cout << "PresidentialPardonForm's copy constructer called." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm & copy)
{
	this->_target = copy._target;
	std::cout << "PresidentialPardonForm's copy assignment called." << std::endl;
	return *this;
}

void	PresidentialPardonForm::execute(const Bureaucrat & executor) const
{
	if (this->getSign() == false)
        throw (FormNotSignedException());
    if (this->getExecGrade() < executor.getGrade())
        throw (GradeTooLowException());
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
