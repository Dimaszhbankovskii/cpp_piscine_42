#include <iostream>
#include <iomanip>
#include "../includes/whatever.hpp"
#include "../includes/Awesome.hpp"

int	main()
{
	{
		int a = 2;
		int b = 3;

		std::cout << "a = " << a << ", b = " << b << std::endl;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		
		std::string c = "chaine1";
		std::string d = "chaine2";
		
		std::cout << "c = " << c << ", d = " << d << std::endl;
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}

	{
		char		charA = 'a';
		char		charB = 'p';
		int			intA = 3;
		int			intB = 10;
		float		floatA = -3.54f;
		float		floatB = 9.19f;
		double		doubleA = 352.102;
		double		doubleB = -0.123;
		std::string	strA = "str111";
		std::string	strB = "str222";

		std::cout << "-------------------------------------------------\n";
		std::cout << std::setw(12) << "charA = " << std::setw(10) << charA << " | ";
		std::cout << std::setw(12) << "charB = " << std::setw(10) << charB << "\n";
		std::cout << std::setw(12) << "intA = " << std::setw(10) << intA << " | ";
		std::cout << std::setw(12) << "intB = " << std::setw(10) << intB << "\n";
		std::cout << std::setw(12) << "floatA = " << std::setw(10) << floatA << " | ";
		std::cout << std::setw(12) << "floatB = " << std::setw(10) << floatB << "\n";
		std::cout << std::setw(12) << "doubleA = " << std::setw(10) << doubleA << " | ";
		std::cout << std::setw(12) << "doubleB = " << std::setw(10) << doubleB << "\n";
		std::cout << std::setw(12) << "strA = " << std::setw(10) << strA << " | ";
		std::cout << std::setw(12) << "strB = " << std::setw(10) << strB << "\n";
		std::cout << "-------------------------------------------------" << std::endl;

		::swap(charA, charB);
		::swap(intA, intB);
		::swap(floatA, floatB);
		::swap(doubleA, doubleB);
		::swap(strA, strB);

		std::cout << ">> Testing swap()\n"; 
		std::cout << "-------------------------------------------------\n";
		std::cout << std::setw(12) << "charA = " << std::setw(10) << charA << " | ";
		std::cout << std::setw(12) << "charB = " << std::setw(10) << charB << "\n";
		std::cout << std::setw(12) << "intA = " << std::setw(10) << intA << " | ";
		std::cout << std::setw(12) << "intB = " << std::setw(10) << intB << "\n";
		std::cout << std::setw(12) << "floatA = " << std::setw(10) << floatA << " | ";
		std::cout << std::setw(12) << "floatB = " << std::setw(10) << floatB << "\n";
		std::cout << std::setw(12) << "doubleA = " << std::setw(10) << doubleA << " | ";
		std::cout << std::setw(12) << "doubleB = " << std::setw(10) << doubleB << "\n";
		std::cout << std::setw(12) << "strA = " << std::setw(10) << strA << " | ";
		std::cout << std::setw(12) << "strB = " << std::setw(10) << strB << "\n";
		std::cout << "-------------------------------------------------" << std::endl;

		std::cout << std::setw(26) << "min(charA, charB) = " << std::setw(10) << ::min(charA, charB) << std::endl;
		std::cout << std::setw(26) << "max(charA, charB) = " << std::setw(10) << ::max(charA, charB) << std::endl;
		std::cout << std::setw(26) << "min(intA, intB) = " << std::setw(10) << ::min(intA, intB) << std::endl;
		std::cout << std::setw(26) << "max(intA, intB) = " << std::setw(10) << ::max(intA, intB) << std::endl;
		std::cout << std::setw(26) << "min(floatA, floatB) = " << std::setw(10) << ::min(floatA, floatB) << std::endl;
		std::cout << std::setw(26) << "max(floatA, floatB) = " << std::setw(10) << ::max(floatA, floatB) << std::endl;
		std::cout << std::setw(26) << "min(doubleA, doubleB) = " << std::setw(10) << ::min(doubleA, doubleB) << std::endl;
		std::cout << std::setw(26) << "max(doubleA, doubleB) = " << std::setw(10) << ::max(doubleA, doubleB) << std::endl;
		std::cout << std::setw(26) << "min(strA, strB) = " << std::setw(10) << ::min(strA, strB) << std::endl;
		std::cout << std::setw(26) << "max(strA, strB) = " << std::setw(10) << ::max(strA, strB) << std::endl;
	}

	std::cout << "-------------------------------------------------" << std::endl;

	{
		Awesome	a(2), b(4);

		std::cout << "a = " << a << " | " << "b = " << b << std::endl;
		::swap(a, b);
		std::cout << "a = " << a << " | " << "b = " << b << std::endl;
		std::cout << "max(a, b) = " << ::max(a, b) << std::endl;
		std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
	}

	return (0);
}
