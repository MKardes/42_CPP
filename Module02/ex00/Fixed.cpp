#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructer has been called." << std::endl;
	this->value = 0;
}

Fixed::Fixed(const Fixed& old)
{
	std::cout << "Copy constructer has been called." << std::endl;
	this->setRawBits(old.getRawBits());
}

Fixed::~Fixed(void)
{
	std::cout << "Destructer has been called." << std::endl;
}

Fixed& Fixed::operator=(const Fixed& t)
{
	std::cout << "Copy assignment operator has been called" << std::endl;
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
