#include "Contact.hpp"

void	Contact::set_name(std::string s)
{
	this->name=s;
}

void    Contact::set_surname(std::string s)
{
	this->surname=s;
}

void    Contact::set_nickname(std::string s)
{
	this->nickname=s;
}

void    Contact::set_num(std::string s)
{
	this->number=s;
}

void    Contact::set_secret(std::string s)
{
	this->dark_scrt=s;
}

std::string	Contact::get_name(void)
{
	return (this->name);
}

std::string  Contact::get_surname(void)
{
	return (this->surname);
}

std::string  Contact::get_nickname(void)
{
	return (this->nickname);
}

std::string  Contact::get_secret(void)
{
	return (this->dark_scrt);
}

std::string	Contact::get_num(void)
{
	return (this->number);
}
