#include "Point.hpp"

Fixed	get_the_area(Point const a, Point const b, Point const c)
{
	Fixed 	area((	( (a.GetPX()*b.GetPY()) + (b.GetPX()*c.GetPY()) + (c.GetPX()*a.GetPY()) ) -
			( (b.GetPX()*a.GetPY()) + (c.GetPX()*b.GetPY()) + (a.GetPX()*c.GetPY()) )) / 2);

	if (area < 0)
		return (area * -1);
	return area;
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed abcA = get_the_area(a, b, c);
	Fixed abpA = get_the_area(a, b, point);
	Fixed apcA = get_the_area(a, point, c);
	Fixed pbcA = get_the_area(point, b, c);
	
	return (abcA == (abpA + apcA + pbcA));
}
