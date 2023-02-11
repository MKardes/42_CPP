/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkardes <mkardes@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 16:16:40 by mkardes           #+#    #+#             */
/*   Updated: 2023/02/11 15:43:03 by mkardes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(void): _name("Default"), _grade(150)
{
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)
{
	std::cout << "Bureaucrat 'constructed'." << std::endl;
	if (_grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	if (_grade > 150)
        throw (Bureaucrat::GradeTooLowException());
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	*this = copy;
	std::cout << "Bureaucrat's 'copy constructer' done." << std::endl;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy)
{
	this->setName(copy.getName());
	this->setGrade(copy.getGrade());
	std::cout << "Byreaucrat 'copy assignment' operator done." << std::endl;
	return *this;
}

void    Bureaucrat::setName(std::string name)
{
	this->_name = name;
}

std::string Bureaucrat::getName(void) const
{
	return (this->_name);
}

void    Bureaucrat::setGrade(int    grade)
{
	this->_grade = grade;
}

int     Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::signForm(AForm &a)
{
	try
	{
		a.beSigned(*this);
		std::cout << this->_name << " signed " << a.getName() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << this->_name << " couldn't sign " << a.getName() << " because " << e.what() << std::endl;
	}
}

const char *Bureaucrat::GradeTooHighException::what() const _NOEXCEPT
{
	return ("Grade is too HIGH!");
}

const char *Bureaucrat::GradeTooLowException::what() const _NOEXCEPT
{
    return ("Grade is too LOW!");
}

void	Bureaucrat::gradeUp(void)
{
	this->setGrade(this->getGrade() - 3);
	if (_grade < 1)
        throw (Bureaucrat::GradeTooHighException());
}

void    Bureaucrat::gradeDown(void)
{
    this->setGrade(this->getGrade() + 3);
    if (_grade > 150)
        throw (Bureaucrat::GradeTooLowException());
}

std::ostream & operator<<(std::ostream &o, Bureaucrat &s)
{
	o << s.getName() << ", bureaucrat grade " << s.getGrade() << std::endl;
	return o;
}
