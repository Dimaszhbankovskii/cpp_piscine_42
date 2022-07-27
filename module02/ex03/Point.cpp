#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
}

Point::Point(float const x, float const y) : _x(x), _y(y)
{
}

Point::Point(Point const &src)
{
	*this = src;
}

Point::~Point()
{
}

Point	& Point::operator = (Point const &src)
{
	Fixed	*x = (Fixed *)&this->_x;
	Fixed	*y = (Fixed *)&this->_y;

	if (this == &src)
		return (*this);
	*x = src._x;
	*y = src._y;
	return (*this);
}

float	Point::getFloatX() const
{
	return (this->_x.toFloat());
}

float	Point::getFloatY() const
{
	return (this->_y.toFloat());
}
