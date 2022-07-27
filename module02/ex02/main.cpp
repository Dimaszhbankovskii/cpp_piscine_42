#include "Fixed.hpp"

int	main()
{
	Fixed		a;
	Fixed const	b(Fixed(5.05f) * Fixed(2));
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;

	std::cout << "------------------------------------------------------------" << std::endl;
	std::cout << "--    The 6 comparison operators: >, <, >=, <=, ==, !=    --" << std::endl;
	std::cout << "------------------------------------------------------------" << std::endl;

	{
		Fixed const f1(4.052f);
		Fixed const	f2(6.25f);
		Fixed const f3(6.25f);
		Fixed const	f5(1);

		std::cout << "------------------------------------------------------------" << std::endl;
		std::cout << "\tf1 = " << f1 << std::endl;
		std::cout << "\tf2 = " << f2 << std::endl;
		std::cout << "\tf3 = " << f3 << std::endl;
		std::cout << "\tf5 = " << f5 << std::endl;
		std::cout << "------------------------------------------------------------" << std::endl;

		std::cout << "\tOperator '>':" << std::endl;
		std::cout << "    >>  f1(" << f1 << ") > f2(" << f2 << ") ==> ";
		if (f1 > f2)
			std::cout << "True" << std::endl;
		else
			std::cout << "False" << std::endl;
		std::cout << "    >>  f2(" << f2 << ") > f3(" << f3 << ") ==> ";
		if (f2 > f3)
			std::cout << "True" << std::endl;
		else
			std::cout << "False" << std::endl;
		std::cout << "    >>  f3(" << f3 << ") > f5(" << f5 << ") ==> ";
		if (f3 > f5)
			std::cout << "True" << std::endl;
		else
			std::cout << "False" << std::endl;

		std::cout << "------------------------------------------------------------" << std::endl;

		std::cout << "\tOperator '<':" << std::endl;
		std::cout << "    >>  f1(" << f1 << ") < f2(" << f2 << ") ==> ";
		if (f1 < f2)
			std::cout << "True" << std::endl;
		else
			std::cout << "False" << std::endl;
		std::cout << "    >>  f2(" << f2 << ") < f3(" << f3 << ") ==> ";
		if (f2 < f3)
			std::cout << "True" << std::endl;
		else
			std::cout << "False" << std::endl;
		std::cout << "    >>  f3(" << f3 << ") < f5(" << f5 << ") ==> ";
		if (f3 < f5)
			std::cout << "True" << std::endl;
		else
			std::cout << "False" << std::endl;

		std::cout << "------------------------------------------------------------" << std::endl;

		std::cout << "\tOperator '<=':" << std::endl;
		std::cout << "    >>  f1(" << f1 << ") <= f2(" << f2 << ") ==> ";
		if (f1 <= f2)
			std::cout << "True" << std::endl;
		else
			std::cout << "False" << std::endl;
		std::cout << "    >>  f2(" << f2 << ") <= f3(" << f3 << ") ==> ";
		if (f2 <= f3)
			std::cout << "True" << std::endl;
		else
			std::cout << "False" << std::endl;
		std::cout << "    >>  f3(" << f3 << ") <= f5(" << f5 << ") ==> ";
		if (f3 <= f5)
			std::cout << "True" << std::endl;
		else
			std::cout << "False" << std::endl;

		std::cout << "------------------------------------------------------------" << std::endl;

		std::cout << "\tOperator '>=':" << std::endl;
		std::cout << "    >>  f1(" << f1 << ") >= f2(" << f2 << ") ==> ";
		if (f1 >= f2)
			std::cout << "True" << std::endl;
		else
			std::cout << "False" << std::endl;
		std::cout << "    >>  f2(" << f2 << ") >= f3(" << f3 << ") ==> ";
		if (f2 >= f3)
			std::cout << "True" << std::endl;
		else
			std::cout << "False" << std::endl;
		std::cout << "    >>  f3(" << f3 << ") >= f5(" << f5 << ") ==> ";
		if (f3 >= f5)
			std::cout << "True" << std::endl;
		else
			std::cout << "False" << std::endl;

		std::cout << "------------------------------------------------------------" << std::endl;

		std::cout << "\tOperator '==':" << std::endl;
		std::cout << "    >>  f1(" << f1 << ") == f2(" << f2 << ") ==> ";
		if (f1 == f2)
			std::cout << "True" << std::endl;
		else
			std::cout << "False" << std::endl;
		std::cout << "    >>  f2(" << f2 << ") == f3(" << f3 << ") ==> ";
		if (f2 == f3)
			std::cout << "True" << std::endl;
		else
			std::cout << "False" << std::endl;
		std::cout << "    >>  f3(" << f3 << ") == f5(" << f5 << ") ==> ";
		if (f3 == f5)
			std::cout << "True" << std::endl;
		else
			std::cout << "False" << std::endl;

		std::cout << "------------------------------------------------------------" << std::endl;
	
		std::cout << "\tOperator '!=':" << std::endl;
		std::cout << "    >>  f1(" << f1 << ") != f2(" << f2 << ") ==> ";
		if (f1 != f2)
			std::cout << "True" << std::endl;
		else
			std::cout << "False" << std::endl;
		std::cout << "    >>  f2(" << f2 << ") != f3(" << f3 << ") ==> ";
		if (f2 != f3)
			std::cout << "True" << std::endl;
		else
			std::cout << "False" << std::endl;
		std::cout << "    >>  f3(" << f3 << ") != f5(" << f5 << ") ==> ";
		if (f3 != f5)
			std::cout << "True" << std::endl;
		else
			std::cout << "False" << std::endl;
	}

	std::cout << "------------------------------------------------------------" << std::endl;
	std::cout << "--    The 4 arithmetic operators: +, -, *, /              --" << std::endl;
	std::cout << "------------------------------------------------------------" << std::endl;

	{
		Fixed const f1(4.052f);
		Fixed const	f2(6.25f);
		Fixed const f3(6.25f);
		Fixed const f4;
		Fixed const	f5(1);
		Fixed const f6(1.21f);

		std::cout << "------------------------------------------------------------" << std::endl;
		std::cout << "\tf1 = " << f1 << std::endl;
		std::cout << "\tf2 = " << f2 << std::endl;
		std::cout << "\tf3 = " << f3 << std::endl;
		std::cout << "\tf4 = " << f4 << std::endl;
		std::cout << "\tf5 = " << f5 << std::endl;
		std::cout << "\tf6 = " << f6 << std::endl;
		std::cout << "------------------------------------------------------------" << std::endl;

		std::cout << "\tOperator '+':" << std::endl;
		std::cout << "    >>  f1(" << f1 << ") + f5(" << f5 << ") = ";
		std::cout << f1 + f5 << std::endl;

		std::cout << "    >>  f1(" << f1 << ") + f3(" << f3 << ") = ";
		std::cout << f1 + f3 << std::endl;

		std::cout << "    >>  f4(" << f4 << ") + f6(" << f6 << ") = ";
		std::cout << f4 + f6 << std::endl;

		std::cout << "------------------------------------------------------------" << std::endl;

		std::cout << "\tOperator '-':" << std::endl;
		std::cout << "    >>  f1(" << f1 << ") - f5(" << f5 << ") = ";
		std::cout << f1 - f5 << std::endl;

		std::cout << "    >>  f1(" << f1 << ") - f3(" << f3 << ") = ";
		std::cout << f1 - f3 << std::endl;

		std::cout << "    >>  f4(" << f4 << ") - f6(" << f6 << ") = ";
		std::cout << f4 - f6 << std::endl;

		std::cout << "------------------------------------------------------------" << std::endl;

		std::cout << "\tOperator '*':" << std::endl;
		std::cout << "    >>  f1(" << f1 << ") * f5(" << f5 << ") = ";
		std::cout << f1 * f5 << std::endl;

		std::cout << "    >>  f1(" << f1 << ") * f3(" << f3 << ") = ";
		std::cout << f1 * f3 << std::endl;

		std::cout << "    >>  f4(" << f4 << ") * f6(" << f6 << ") = ";
		std::cout << f4 * f6 << std::endl;

		std::cout << "------------------------------------------------------------" << std::endl;

		std::cout << "\tOperator '/':" << std::endl;
		std::cout << "    >>  f1(" << f1 << ") / f5(" << f5 << ") = ";
		std::cout << f1 / f5 << std::endl;

		std::cout << "    >>  f1(" << f1 << ") / f3(" << f3 << ") = ";
		std::cout << f1 / f3 << std::endl;

		std::cout << "    >>  f4(" << f4 << ") / f6(" << f6 << ") = ";
		std::cout << f4 / f6 << std::endl;

		std::cout << "    >>  f6(" << f6 << ") / f4(" << f4 << ") = ";
		std::cout << f6 / f4 << std::endl;

		std::cout << "------------------------------------------------------------" << std::endl;

	}

	std::cout << "------------------------------------------------------------" << std::endl;
	std::cout << "--  The 4 increment/decrement operators: pre- and post-   --" << std::endl;
	std::cout << "------------------------------------------------------------" << std::endl;

	{
		Fixed	f4;
		Fixed	f6(1.21f);

		std::cout << "------------------------------------------------------------" << std::endl;
		std::cout << "\tf4 = " << f4 << std::endl;
		std::cout << "\tf6 = " << f6 << std::endl;
		std::cout << "------------------------------------------------------------" << std::endl;

		std::cout << "\tOperator '++a':" << std::endl;
		std::cout << "    >>  ++f4(" << f4 << ") = ";
		std::cout << ++f4 << std::endl;
		std::cout << "    >>  ++f4(" << f4 << ") = ";
		std::cout << ++f4 << std::endl;
		std::cout << "    >>  ++f4(" << f4 << ") = ";
		std::cout << ++f4 << std::endl;

		std::cout << "    >>  ++f6(" << f6 << ") = ";
		std::cout << ++f6 << std::endl;
		std::cout << "    >>  ++f6(" << f6 << ") = ";
		std::cout << ++f6 << std::endl;
		std::cout << "    >>  ++f6(" << f6 << ") = ";
		std::cout << ++f6 << std::endl;

		std::cout << "------------------------------------------------------------" << std::endl;

		std::cout << "------------------------------------------------------------" << std::endl;
		std::cout << "\tf4 = " << f4 << std::endl;
		std::cout << "\tf6 = " << f6 << std::endl;
		std::cout << "------------------------------------------------------------" << std::endl;

		std::cout << "\tOperator '--a':" << std::endl;
		std::cout << "    >>  --f4(" << f4 << ") = ";
		std::cout << --f4 << std::endl;
		std::cout << "    >>  --f4(" << f4 << ") = ";
		std::cout << --f4 << std::endl;
		std::cout << "    >>  --f4(" << f4 << ") = ";
		std::cout << --f4 << std::endl;
		std::cout << "    >>  --f4(" << f4 << ") = ";
		std::cout << --f4 << std::endl;

		std::cout << "    >>  --f6(" << f6 << ") = ";
		std::cout << --f6 << std::endl;
		std::cout << "    >>  --f6(" << f6 << ") = ";
		std::cout << --f6 << std::endl;
		std::cout << "    >>  --f6(" << f6 << ") = ";
		std::cout << --f6 << std::endl;

		std::cout << "------------------------------------------------------------" << std::endl;

		std::cout << "------------------------------------------------------------" << std::endl;
		std::cout << "\tf4 = " << f4 << std::endl;
		std::cout << "\tf6 = " << f6 << std::endl;
		std::cout << "------------------------------------------------------------" << std::endl;

		std::cout << "\tOperator 'a++':" << std::endl;
		std::cout << "    >>  f4++(" << f4 << ") = ";
		std::cout << f4++ << std::endl;
		std::cout << "    >>  f4++(" << f4 << ") = ";
		std::cout << f4++ << std::endl;
		std::cout << "    >>  f4++(" << f4 << ") = ";
		std::cout << f4++ << std::endl;
		std::cout << "    >>  f4++(" << f4 << ") = ";
		std::cout << f4++ << std::endl;
		std::cout << "    >>  f4 = " << f4 << std::endl;

		std::cout << "    >>  f6++(" << f6 << ") = ";
		std::cout << f6++ << std::endl;
		std::cout << "    >>  f6++(" << f6 << ") = ";
		std::cout << f6++ << std::endl;
		std::cout << "    >>  f6++(" << f6 << ") = ";
		std::cout << f6++ << std::endl;
		std::cout << "    >>  f6 = " << f6 << std::endl;

		std::cout << "------------------------------------------------------------" << std::endl;

		std::cout << "------------------------------------------------------------" << std::endl;
		std::cout << "\tf4 = " << f4 << std::endl;
		std::cout << "\tf6 = " << f6 << std::endl;
		std::cout << "------------------------------------------------------------" << std::endl;

		std::cout << "\tOperator 'a--':" << std::endl;
		std::cout << "    >>  f4--(" << f4 << ") = ";
		std::cout << f4-- << std::endl;
		std::cout << "    >>  f4--(" << f4 << ") = ";
		std::cout << f4-- << std::endl;
		std::cout << "    >>  f4--(" << f4 << ") = ";
		std::cout << f4-- << std::endl;
		std::cout << "    >>  f4--(" << f4 << ") = ";
		std::cout << f4-- << std::endl;
		std::cout << "    >>  f4 = " << f4 << std::endl;

		std::cout << "    >>  f6--(" << f6 << ") = ";
		std::cout << f6-- << std::endl;
		std::cout << "    >>  f6--(" << f6 << ") = ";
		std::cout << f6-- << std::endl;
		std::cout << "    >>  f6--(" << f6 << ") = ";
		std::cout << f6-- << std::endl;
		std::cout << "    >>  f6 = " << f6 << std::endl;

		std::cout << "------------------------------------------------------------" << std::endl;
	}

	return (0);
}
