#include "Harl.hpp"

int	main()
{
	Harl		harl;
	std::string	level;

	std::cout << ">> Enter a valid level message [DEBUG, INFO, WARNING, ERROR]:\n>> " << std::ends;
	std::getline(std::cin, level);
	harl.complain(level);

	std::cout << ">> Enter a valid level message [DEBUG, INFO, WARNING, ERROR]:\n>> " << std::ends;
	std::getline(std::cin, level);
	harl.complain(level);

	std::cout << ">> Enter a valid level message [DEBUG, INFO, WARNING, ERROR]:\n>> " << std::ends;
	std::getline(std::cin, level);
	harl.complain(level);

	std::cout << ">> Enter a valid level message [DEBUG, INFO, WARNING, ERROR]:\n>> " << std::ends;
	std::getline(std::cin, level);
	harl.complain(level);

	return (0);
}
