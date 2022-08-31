#include <iostream>
#include <cstdlib>
#include "../includes/A.hpp"
#include "../includes/B.hpp"
#include "../includes/C.hpp"

Base	*generate()
{
	int	randValue = rand() % 10;

	if (randValue >= 0 && randValue <= 2)
		return (new A());
	else if (randValue >= 3 && randValue <= 6)
		return (new B());
	else
		return (new C());	
}

void	identify(Base *p)
{
	A	*prtA;
	B	*prtB;
	C	*prtC;

	std::cout << "Generate class ==> ";
	if ((prtA = dynamic_cast<A *>(p)))
		std::cout << "A";
	if ((prtB = dynamic_cast<B *>(p)))
		std::cout << "B";
	if ((prtC = dynamic_cast<C *>(p)))
		std::cout << "C";
	std::cout << std::endl;	
}

void	identify(Base &p)
{
	std::cout << "Generate class ==> ";
	try
	{
		A	&refA = dynamic_cast<A &>(p);
		(void) refA;
		std::cout << "A" << std::endl;
		return ;
	}
	catch(const std::exception &exc)
	{
		(void) exc;
	}
	try
	{
		B	&refB = dynamic_cast<B &>(p);
		(void) refB;
		std::cout << "B" << std::endl;
		return ;
	}
	catch(const std::exception &exc)
	{
		(void) exc;
	}
	try
	{
		C	&refC = dynamic_cast<C &>(p);
		(void) refC;
		std::cout << "C" << std::endl;
		return ;
	}
	catch(const std::exception &exc)
	{
		(void) exc;
	}
}

int	main()
{
	Base	*prt;

	std::cout << "------------------------------------------\n";
	std::cout << "-----     Test identify(Base *p)     -----\n";
	std::cout << "------------------------------------------" << std::endl;

	for (int i = 0; i < 21; i++)
	{
		prt = generate();
		identify(prt);
		delete prt;
	}

	std::cout << "------------------------------------------\n";
	std::cout << "-----     Test identify(Base &p)     -----\n";
	std::cout << "------------------------------------------" << std::endl;

	for (int i = 0; i < 21; i++)
	{
		prt = generate();
		identify(*prt);
		delete prt;
	}

	return (0);
}
