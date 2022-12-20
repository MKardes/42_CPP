#include "Point.hpp"

Point::Point( void ): x(0), y(0)
{
}

Point::Point( const float px, const float py ): x(px), y(py)
{
}

Point::Point( const Point& src ): x(src.x), y(src.y)
{
}

Point::~Point( void )
{
  //  std::cout << "Point destroyed" << std::endl;
}

Point& Point::operator=( const Point& src )
{
    if (this != &src)
    {
        (Fixed)this->x = src.GetPX();
        (Fixed)this->y = src.GetPY();
    }
    return (*this);
}

Fixed   Point::GetPX( void ) const
{
    return (this->x);
}

Fixed   Point::GetPY( void ) const
{
    return (this->y);
}
