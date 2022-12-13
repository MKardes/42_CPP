#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int			value;
		static const int	bits = 8;
	public:
		Fixed( void );
		Fixed( const Fixed& old_fix );
		Fixed( const int integer );
		Fixed( const float floating_point );
		~Fixed( void );
		Fixed& operator=( const Fixed& t );

		int getRawBits( void ) const;
		void setRawBits( int const raw );

		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream & operator<<( std::ostream & o, Fixed const & i );

#endif
