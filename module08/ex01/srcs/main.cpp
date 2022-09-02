#include "../includes/Span.hpp"

#define SIZE 10

int	main()
{
	Span	span(SIZE);
	Span	span1(span);
	Span	span2;

	try
	{
		
		for (int i = 0; i < SIZE; i++)
			span.addNumber(i);

		span2 = span;
		span2.addNumber(15);

		std::cout << span << std::endl;
		std::cout << span1 << std::endl;
		std::cout << span2 << std::endl;
	}
	catch(const std::exception &exc)
	{
		std::cout << exc.what() << std::endl;
	}

	std::cout << span << std::endl;
	std::cout << span1 << std::endl;
	std::cout << span2 << std::endl;

	return (0);
}
