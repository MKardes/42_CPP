#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->value = 0;
}

Fixed::Fixed( const int n )
{
        this->setRawBits( n << this->bits );
}

Fixed::Fixed( const float n )
{
	this->setRawBits( std::roundf(n * (1 << this->bits)));
}

Fixed::Fixed( const Fixed& old )
{
        this->setRawBits(old.getRawBits());
}

Fixed::~Fixed(void)
{
}

Fixed& Fixed::operator=(const Fixed& t)
{
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
	return (float)(this->getRawBits()) / ( 1 << this->bits);
}

int Fixed::toInt( void ) const
{
        return ( this->getRawBits() >> this->bits );
}

std::ostream & operator<<( std::ostream & o, Fixed const & i ) {
    o << i.toFloat();
    return o;
}

//	COMPARISON OPERATORS

bool	Fixed::operator<( const Fixed& t ) const
{
	return (this->getRawBits() < t.getRawBits());
}

bool	Fixed::operator>( const Fixed& t ) const
{
	return (this->getRawBits() > t.getRawBits());
}

bool	Fixed::operator<=( const Fixed& t ) const
{
	return (this->getRawBits() <= t.getRawBits());
}

bool	Fixed::operator>=( const Fixed& t ) const
{
	return (this->getRawBits() >= t.getRawBits());
}

bool	Fixed::operator==( const Fixed& t ) const
{
	return (this->getRawBits() == t.getRawBits());
}

bool	Fixed::operator!=( const Fixed& t ) const
{
	return (this->getRawBits() != t.getRawBits());
}

// ARITMATIC OPERATORS

Fixed	Fixed::operator+( const Fixed& t ) const
{
	return Fixed(this->toFloat() + t.toFloat());
}

Fixed	Fixed::operator-( const Fixed& t ) const
{
	return Fixed(this->toFloat() - t.toFloat());
}

Fixed	Fixed::operator*( const Fixed& t ) const
{
	return Fixed(this->toFloat() * t.toFloat());
}

Fixed	Fixed::operator/( const Fixed& t ) const
{
	return Fixed(this->toFloat() / t.toFloat());
}

// INCREMENT / DECREMENT OPERATORS
 
Fixed&   Fixed::operator++( void ) {
    ++this->value;
    return *this;
}

Fixed   Fixed::operator++( int ) {
    Fixed tmp( *this );
    tmp.value = this->value++;
    return tmp;
}

Fixed& Fixed::operator--( void ) {
    --this->value;
    return *this;
}

Fixed Fixed::operator--( int ) {
    Fixed tmp( *this );
    tmp.value = this->value--;
    return tmp;
}

// MAX MIN

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	return (a.getRawBits() < b.getRawBits()) ? a : b;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a.getRawBits() < b.getRawBits()) ? a : b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	return (a.getRawBits() > b.getRawBits()) ? a : b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a.getRawBits() > b.getRawBits()) ? a : b;
}
