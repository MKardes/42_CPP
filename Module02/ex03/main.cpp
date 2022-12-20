#include "Point.hpp"

int main( void ) {
	/*
	Point	a( 0.1f, -1 );
	Point	b( 3,  0 );
	Point	c( 2,  3 );
	Point	p( 0.1f,  -1 );
	if (bsp (a, b, c, p))
		std::cout << "İçinde";
	else
		std::cout << "Maalesef";*/
    if ( bsp( Point(0, 0), Point(10, 30), Point(20, 0), Point(30, 15) ) == true ) {
        std::cout << "Point is in the triangle" << std::endl;
    } else {
        std::cout << "Point is not in the triangle" << std::endl;
    }
	return 0;
}
