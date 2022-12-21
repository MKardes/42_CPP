#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructer called." << std::endl;
	this->value = 0;
}

Fixed::Fixed(const Fixed& old)
{
	std::cout << "Copy constructer called." << std::endl;
	this->setRawBits(old.getRawBits());
}

Fixed::~Fixed(void)
{
	std::cout << "Destructer called." << std::endl;
}

Fixed& Fixed::operator=(const Fixed& t)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &t)
		this->value = t.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return ( this->value );
}

void Fixed::setRawBits( int const raw )
{
	this->value = raw;
}
