#include <iostream>

int	main()
{
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPRT = &string;
	std::string	&stringREF = string;

	std::cout << "The memory address of string    ==> " << &string << std::endl;
	std::cout << "The memory address of stringPRT ==> " << stringPRT << std::endl;
	std::cout << "The memory address of stringREF ==> " << &stringREF << std::endl;

	std::cout << "The value of string    ==> " << string << std::endl;
	std::cout << "The value of stringPRT ==> " << *stringPRT << std::endl;
	std::cout << "The value of stringREF ==> " << stringREF << std::endl;

	return (0);
}
