#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructer has been called." << std::endl;
	this->value = 0;
}

Fixed::Fixed( const int n )
{
        std::cout << "Int constructer has been called." << std::endl;
        this->setRawBits( n << this->bits );
}

Fixed::Fixed( const float n )
{
        std::cout << "Float constructer has been called." << std::endl;
        std::cout << "Ilk " << n << " <--> ";
	this->setRawBits( std::roundf(n * (1 << this->bits)));
	 std::cout << this-> getRawBits() << std::endl;
}

Fixed::Fixed( const Fixed& old )
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
	return ( this->value );
}

void Fixed::setRawBits( int const raw )
{
	this->value = raw;
}
// 0000 0001 1000 0000
float Fixed::toFloat( void ) const
{
	std::cout << this->getRawBits() << std::endl;
	std::cout << (float)(this->getRawBits() / ( 1 << this->bits)) << std::endl;
	return (static_cast<float> (this->getRawBits() / ( 1 << this->bits)) );
}

int Fixed::toInt( void ) const
{
        return ( this->getRawBits() >> this->bits );
}

std::ostream & operator<<( std::ostream & o, Fixed const & i ) {
    o << i.toFloat();
    return o;
}
