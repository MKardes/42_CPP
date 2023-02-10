/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkardes <mkardes@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 18:00:59 by mkardes           #+#    #+#             */
/*   Updated: 2023/02/10 19:16:23 by mkardes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(): _name("default"), _sign(false), _signGrade(40), _execGrade(40)
{
	std::cout << "Form has been constructed." << std::endl;
}

Form::Form(std::string name, int signGrade, int execGrade): _name(name), _sign(false), _signGrade(signGrade), _execGrade(execGrade)
{
	std::cout << "Form has been constructed." << std::endl;
}

Form::Form(const Form & copy): _name(copy.getName()), _signGrade(copy.getSignGrade()), _execGrade(copy.getExecGrade()) 
{
	*this = copy;
	std::cout << "Form's copy constructer called." << std::endl;
}

Form::~Form()
{
	std::cout << "Form has been destructed." << std::endl;
}

Form &Form::operator=(const Form & copy)
{
	this->_sign = copy.getSign();
	std::cout << "Form's copy assignment called." << std::endl;
	return *this;
}

std::string	Form::getName(void) const
{
	return (this->_name);
}

bool	Form::getSign() const
{
	return (this->_sign);
}

int	Form::getSignGrade() const
{
	return (this->_signGrade);
}

int Form::getExecGrade() const
{
    return (this->_execGrade);
}

void	Form::beSigned(Bureaucrat &bure)
{
	if (this->_signGrade < bure.getGrade())
		throw (GradeTooLowException());
	this->_sign = true;
}

std::ostream &operator<<(std::ostream &o, Form &s)
{
    o << s.getName() << ", sign: " << s.getSign() << ", signGrade: " << s.getSignGrade() << ", execGrade: "<< s.getExecGrade() << std::endl;
    return o;
}

const char *Form::GradeTooHighException::what() const _NOEXCEPT
{
	return ("Form Grade is Too HIGH!\n");
}

const char *Form::GradeTooLowException::what() const _NOEXCEPT
{
    return ("Form Grade is Too LOW!!\n");
}
