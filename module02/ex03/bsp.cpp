#include "Point.hpp"

static float	getCoefficient(Point const point, Point const a1, Point const a2)
{
	float	d;

	d = (point.getFloatX() - a2.getFloatX()) * (a1.getFloatY() - a2.getFloatY())
	- (a1.getFloatX() - a2.getFloatX()) * (point.getFloatY() - a2.getFloatY());
	return (d);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	float	d1, d2, d3;
	bool	res;

	d1 = getCoefficient(point, a, b);
	d2 = getCoefficient(point, b, c);
	d3 = getCoefficient(point, c, a);

	res = (d1 > 0) && (d2 > 0) && (d3 > 0);
    return (res);
}
