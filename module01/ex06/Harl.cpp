#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::debug()
{
	std::cout << "[DEBUG]\n" << DEBAG_MESS << std::endl;
	return ;
}

void	Harl::info()
{
	std::cout << "[INFO]\n" << INFO_MESS << std::endl;
	return ;
}

void	Harl::warning()
{
	std::cout << "[WARNING]\n" << WARNING_MESS << std::endl;
	return ;
}

void	Harl::error()
{
	std::cout << "[ERROR]\n" << ERROR_MESS << std::endl;
	return ;
}

void	Harl::complain(std::string level)
{
	std::string		levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int				index = 0;

	while (level != levels[index])
		index++;

	switch (index)
	{
		case DEBAG_LEVEL:
			this->debug();
		case INFO_LEVEL:
			this->info();
		case WARNING_LEVEL:
			this->warning();
		case ERROR_LEVEL:
			this->error();
			break;		
		default:
			std::cout << DEFAULT_MESS << std::endl;
			break;
	}
	return ;
}
