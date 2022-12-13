#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int			value;
		static const int	store = 0;
	public:
		Fixed( void );
		Fixed( const Fixed& old_fix );
		~Fixed( void );
		Fixed& operator=( const Fixed& t );

		int getRawBits(void) const;
		void setRawBits( int const raw );
};

#endif
