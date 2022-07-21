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
	function_prt	ptrs[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int				i = 0;

	while (level != levels[i])
		(this->*ptrs[i++])();
	(this->*ptrs[i])();
	return ;
}
