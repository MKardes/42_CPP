#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

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
		
		bool	operator<( const Fixed& t ) const;
		bool	operator>( const Fixed& t ) const;
		bool	operator<=( const Fixed& t ) const;
		bool	operator>=( const Fixed& t ) const;
		bool	operator==( const Fixed& t ) const;
		bool	operator!=( const Fixed& t ) const;

		Fixed	operator+( const Fixed& t ) const;
		Fixed	operator-( const Fixed& t ) const;
		Fixed	operator*( const Fixed& t ) const;
		Fixed	operator/( const Fixed& t ) const;

		Fixed	operator++( int );// const yok neden?
		Fixed&	operator++( void );// const yok neden?
		Fixed	operator--( int );// const yok neden?
		Fixed&	operator--( void );// const yok neden?

		static Fixed& min(Fixed &a, Fixed &b);
		static const Fixed& min(const Fixed &a, const Fixed &b);
		static Fixed& max(Fixed &a, Fixed &b);
		static const Fixed& max(const Fixed &a, const Fixed &b);
};

std::ostream & operator<<( std::ostream & o, Fixed const & i );

#endif
