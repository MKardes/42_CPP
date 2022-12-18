#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class   Point
{
    private:
        const Fixed x;
        const Fixed y;

    public:
        Point( void );
        Point( const float px, const float py );
        Point( const Point& src );
        ~Point( void );
        Point& operator=( const Point& src );

        Fixed GetPX( void ) const ;
        Fixed GetPY( void ) const ;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif