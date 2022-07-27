#include "Point.hpp"

int	main()
{
	Point	a(1.63, 3);
	Point	b(-4.55, -2.95);
	Point	c(2.38, -1.1);

	Point	*points = new Point[10];

	points[0] = Point(0, 0);
	points[1] = Point(-2, -1);
	points[2] = Point(-4.55, -2.95);
	points[3] = Point(-2, 0);
	points[4] = Point(3.1, 2.01);
	points[5] = Point(2, -1.5);
	points[6] = Point(0, -1.61);
	points[7] = Point(-0.5, 0.5);
	points[8] = Point(1, 1);
	points[9] = Point(-1, -1);

	std::cout << "Triangle ABC: A(1.63, 3), B(-4.55, -2.95), C(2.38, -1.1)\n" << std::endl;

	for (int i = 0; i < 10; i++)
	{
		std::cout << "point" << i + 1;
		std::cout << "(" << points[i].getFloatX() << ", ";
		std::cout << points[i].getFloatY() << ")";
		std::cout << " belongs to triangle ABC ==> ";
		std::cout << ((bsp(a, b, c, points[i]) == true) ? "true" : "false");
		std::cout << "\n" << std::endl;
	}

	delete [] points;
	return (0);
}