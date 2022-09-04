#include <ctime>
#include <cstdlib>
#include <climits>
#include "../includes/Span.hpp"

#define SIZE_1 5
#define SIZE_2 20
#define SIZE_3 50000
#define SIZE_4 2
#define SIZE_5 3

int	main()
{
	std::cout << VIOLET;
	std::cout << "--------------------------------------------------\n";
	std::cout << "------------    TEST 1 (SIZE = 5)    -------------\n";
	std::cout << "--------------------------------------------------";
	std::cout << NORMAL << std::endl;

	{
		Span	sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << "--------------------------------------------------" << std::endl;
		std::cout << sp << std::endl;
		std::cout << "--------------------------------------------------" << std::endl;
		std::cout << "shortestSpan => " << sp.shortestSpan() << std::endl;
		std::cout << "longtestSpan => " << sp.longestSpan() << std::endl;
		std::cout << "--------------------------------------------------" << std::endl;
	}


	std::cout << VIOLET;
	std::cout << "--------------------------------------------------\n";
	std::cout << "------------    TEST 2 (SIZE = 20)   -------------\n";
	std::cout << "--------------------------------------------------";
	std::cout << NORMAL << std::endl;

	{
		Span				span(SIZE_2);
		std::vector<int>	srcVector(SIZE_2);

		std::srand(std::time(NULL));
		for (int i = 0; i < SIZE_2; i++)
			srcVector[i] = std::rand() % 100;

		try
		{
			span.addManyNumbers(srcVector.begin(), srcVector.end());

			std::cout << "--------------------------------------------------" << std::endl;
			std::cout << span << std::endl;
			std::cout << "--------------------------------------------------" << std::endl;
			std::cout << "shortestSpan => " << span.shortestSpan() << std::endl;
			std::cout << "longtestSpan => " << span.longestSpan() << std::endl;
			std::cout << "--------------------------------------------------" << std::endl;
		}
		catch(const std::exception &exc)
		{
			std::cout << exc.what() << std::endl;
		}
	}

	std::cout << VIOLET;
	std::cout << "--------------------------------------------------\n";
	std::cout << "----------    TEST 3 (SIZE = 50000)    -----------\n";
	std::cout << "--------------------------------------------------";
	std::cout << NORMAL << std::endl;

	{
		Span				span(SIZE_3);
		std::vector<int>	srcVector(SIZE_3);

		std::srand(std::time(NULL));
		for (int i = 0; i < SIZE_3; i++)
		if (i % 2 == 1)
			srcVector[i] = std::rand();
		else
			srcVector[i] = -std::rand();

		try
		{
			span.addManyNumbers(srcVector.begin(), srcVector.end());

			std::cout << "--------------------------------------------------" << std::endl;
			std::cout << "shortestSpan => " << span.shortestSpan() << std::endl;
			std::cout << "longtestSpan => " << span.longestSpan() << std::endl;
			std::cout << "--------------------------------------------------" << std::endl;
		}
		catch(const std::exception &exc)
		{
			std::cout << exc.what() << std::endl;
		}
	}

	std::cout << VIOLET;
	std::cout << "--------------------------------------------------\n";
	std::cout << "------    TEST 4 (SIZE = 2)(MAX, MIN INT)   ------\n";
	std::cout << "--------------------------------------------------";
	std::cout << NORMAL << std::endl;

	{
		Span	span(SIZE_4);

		try
		{
			span.addNumber(INT_MAX);
			span.addNumber(INT_MIN);

			std::cout << "--------------------------------------------------" << std::endl;
			std::cout << span << std::endl;
			std::cout << "--------------------------------------------------" << std::endl;
			std::cout << "shortestSpan => " << span.shortestSpan() << std::endl;
			std::cout << "longtestSpan => " << span.longestSpan() << std::endl;
			std::cout << "--------------------------------------------------" << std::endl;
		}
		catch(const std::exception &exc)
		{
			std::cout << exc.what() << std::endl;
		}
	}

	std::cout << VIOLET;
	std::cout << "--------------------------------------------------\n";
	std::cout << "------------    TEST 5.1 EXCEPTION   -------------\n";
	std::cout << "--------------------------------------------------";
	std::cout << NORMAL << std::endl;

	{
		Span	span;

		try
		{
			span.addNumber(1);
			span.addNumber(100);

			std::cout << "--------------------------------------------------" << std::endl;
			std::cout << span << std::endl;
			std::cout << "--------------------------------------------------" << std::endl;
			std::cout << "shortestSpan => " << span.shortestSpan() << std::endl;
			std::cout << "longtestSpan => " << span.longestSpan() << std::endl;
			std::cout << "--------------------------------------------------" << std::endl;
		}
		catch(const std::exception &exc)
		{
			std::cout << RED << exc.what() << NORMAL << std::endl;
		}
	}
	
	std::cout << VIOLET;
	std::cout << "--------------------------------------------------\n";
	std::cout << "------------    TEST 5.2 EXCEPTION   -------------\n";
	std::cout << "--------------------------------------------------";
	std::cout << NORMAL << std::endl;

	
	{
		Span	span(1);

		try
		{
			span.addNumber(100);

			std::cout << "--------------------------------------------------" << std::endl;
			std::cout << span << std::endl;
			std::cout << "--------------------------------------------------" << std::endl;
			std::cout << "shortestSpan => " << span.shortestSpan() << std::endl;
			std::cout << "longtestSpan => " << span.longestSpan() << std::endl;
			std::cout << "--------------------------------------------------" << std::endl;
		}
		catch(const std::exception &exc)
		{
			std::cout << RED << exc.what() << NORMAL << std::endl;
		}
	}

	std::cout << VIOLET;
	std::cout << "--------------------------------------------------\n";
	std::cout << "------------    TEST 5.3 EXCEPTION   -------------\n";
	std::cout << "--------------------------------------------------";
	std::cout << NORMAL << std::endl;

	
	{
		Span	span(1);

		try
		{
			span.addNumber(100);

			std::cout << "--------------------------------------------------" << std::endl;
			std::cout << span << std::endl;
			std::cout << "--------------------------------------------------" << std::endl;
			std::cout << "longtestSpan => " << span.longestSpan() << std::endl;
			std::cout << "shortestSpan => " << span.shortestSpan() << std::endl;
			std::cout << "--------------------------------------------------" << std::endl;
		}
		catch(const std::exception &exc)
		{
			std::cout << RED << exc.what() << NORMAL << std::endl;
		}
	}

	std::cout << VIOLET;
	std::cout << "--------------------------------------------------\n";
	std::cout << "------------    TEST 5.4 EXCEPTION   -------------\n";
	std::cout << "--------------------------------------------------";
	std::cout << NORMAL << std::endl;

	
	{
		Span	span(1);

		try
		{
			span.addNumber(100);

			std::cout << "--------------------------------------------------" << std::endl;
			std::cout << "span._intValue[100] => " << span.getElemVector(100) << std::endl;
			std::cout << "--------------------------------------------------" << std::endl;
			std::cout << span << std::endl;
			std::cout << "--------------------------------------------------" << std::endl;
			std::cout << "longtestSpan => " << span.longestSpan() << std::endl;
			std::cout << "shortestSpan => " << span.shortestSpan() << std::endl;
			std::cout << "--------------------------------------------------" << std::endl;
		}
		catch(const std::exception &exc)
		{
			std::cout << RED << exc.what() << NORMAL << std::endl;
		}
	}

	std::cout << VIOLET;
	std::cout << "--------------------------------------------------\n";
	std::cout << "------------    TEST 5.5 EXCEPTION   -------------\n";
	std::cout << "--------------------------------------------------";
	std::cout << NORMAL << std::endl;

	
	{
		Span	span(1);

		try
		{
			span.addNumber(100);

			std::cout << "--------------------------------------------------" << std::endl;
			std::cout << "span._intValue[-100] => " << span.getElemVector(-100) << std::endl;
			std::cout << "--------------------------------------------------" << std::endl;
			std::cout << span << std::endl;
			std::cout << "--------------------------------------------------" << std::endl;
			std::cout << "longtestSpan => " << span.longestSpan() << std::endl;
			std::cout << "shortestSpan => " << span.shortestSpan() << std::endl;
			std::cout << "--------------------------------------------------" << std::endl;
		}
		catch(const std::exception &exc)
		{
			std::cout << RED << exc.what() << NORMAL << std::endl;
		}
	}

	std::cout << VIOLET;
	std::cout << "--------------------------------------------------\n";
	std::cout << "------------    TEST 5.6 EXCEPTION   -------------\n";
	std::cout << "--------------------------------------------------";
	std::cout << NORMAL << std::endl;

	
	{
		Span				span(SIZE_5);
		std::vector<int>	srcVector(SIZE_5 + 10, 99);

		try
		{
			span.addNumber(1);
			span.addNumber(2);

			std::cout << "--------------------------------------------------" << std::endl;
			std::cout << span << std::endl;
			std::cout << "--------------------------------------------------" << std::endl;

			span.addManyNumbers(srcVector.begin(), srcVector.end());

			std::cout << "--------------------------------------------------" << std::endl;
			std::cout << span << std::endl;
			std::cout << "--------------------------------------------------" << std::endl;
			std::cout << "longtestSpan => " << span.longestSpan() << std::endl;
			std::cout << "shortestSpan => " << span.shortestSpan() << std::endl;
			std::cout << "--------------------------------------------------" << std::endl;
		}
		catch(const std::exception &exc)
		{
			std::cout << RED << exc.what() << NORMAL << std::endl;
		}
	}

	return (0);
}
