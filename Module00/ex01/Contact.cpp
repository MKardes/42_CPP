#include "Contact.hpp"

void	set_name(string s)
{
	name=s;
}

void    set_surname(string s)
{
        surname=s;
}

void    set_nickname(string s)
{
        nickname=s;
}

void    set_num(int n)
{
        number=n;
}

void    set_secret(string s)
{
        dark_scrt=s;
}

string	get_name(void)
{
	return (name);
}

string  get_surname(void)
{
        return (surname);
}

string  get_nickname(void)
{
        return (nickname);
}

string  get_secret(void)
{
        return (dark_scrt);
}

int 	get_num(void)
{
        return (number);
}
