/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkardes <mkardes@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 18:00:59 by mkardes           #+#    #+#             */
/*   Updated: 2023/02/11 15:55:18 by mkardes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(): _name("default"), _sign(false), _signGrade(40), _execGrade(40)
{
	std::cout << "AForm has been constructed." << std::endl;
}

AForm::AForm(std::string name, int signGrade, int execGrade): _name(name), _sign(false), _signGrade(signGrade), _execGrade(execGrade)
{
	std::cout << "AForm has been constructed." << std::endl;
	if (this->getSignGrade() < 1 || this->getExecGrade() < 1)
		throw (GradeTooHighException());
	if (this->getSignGrade() > 150 || this->getExecGrade() > 150)
        throw (GradeTooLowException());
}

AForm::AForm(const AForm & copy): _name(copy.getName()), _signGrade(copy.getSignGrade()), _execGrade(copy.getExecGrade()) 
{
	*this = copy;
	std::cout << "AForm's copy constructer called." << std::endl;
}

AForm::~AForm()
{
}

AForm &AForm::operator=(const AForm & copy)
{
	this->_sign = copy.getSign();
	std::cout << "AForm's copy assignment called." << std::endl;
	return *this;
}

std::string	AForm::getName(void) const
{
	return (this->_name);
}

bool	AForm::getSign() const
{
	return (this->_sign);
}

int	AForm::getSignGrade() const
{
	return (this->_signGrade);
}

int AForm::getExecGrade() const
{
    return (this->_execGrade);
}

void	AForm::beSigned(Bureaucrat &bure)
{
	if (this->_signGrade < bure.getGrade())
		throw (GradeTooLowException());
	this->_sign = true;
}

std::ostream &operator<<(std::ostream &o, AForm &s)
{
    o << s.getName() << ", sign: " << s.getSign() << ", signGrade: " << s.getSignGrade() << ", execGrade: "<< s.getExecGrade() << std::endl;
    return o;
}

const char *AForm::GradeTooHighException::what() const _NOEXCEPT
{
	return ("Form Grade is Too HIGH!");
}

const char *AForm::GradeTooLowException::what() const _NOEXCEPT
{
    return ("Form Grade is Too LOW!!");
}

const char *AForm::FormNotSignedException::what() const _NOEXCEPT
{
    return ("The form is not SIGNED!!");
}
