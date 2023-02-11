#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("Shrubbery Creation Form", 145, 137)
{
	std::cout << "ShrubberyCreationForm has been constructed." << std::endl;
	this->_target = "default";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("Shrubbery Creation Form", 145, 137)
{
	this->_target = target;
    std::cout << "ShrubberyCreationForm has been constructed." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & copy): AForm(copy)
{
	*this = copy;
	std::cout << "ShrubberyCreationForm's copy constructer called." << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm & copy)
{
	this->_target = copy._target;
	std::cout << "ShrubberyCreationForm's copy assignment called." << std::endl;
	return *this;
}

void	ShrubberyCreationForm::execute(const Bureaucrat & executor) const
{
	if (this->getSign() == false)
		throw (FormNotSignedException());
	if (this->getExecGrade() < executor.getGrade())
		throw (GradeTooLowException());
	std::ofstream file(this->_target + "_shrubbery");
	std::string tree ="\033[32;m\
                       O\n\
                      ***\n\
                     **O**\n\
                    *******\n\
                   *********\n\
                    *******\n\
                   ******o**\n\
                  ***********\n\
                 ****o********\n\
                ***************\n\
                  *o***o*****\n\
                 *************\n\
                ***************\n\
               *****O***********\n\
              **********o********\n\
\033[33;m                      ###\n\
                      ###\n\
                      ###\n\
              ###################\033[0m";
	file << tree << std::endl;
	file.close();
}
