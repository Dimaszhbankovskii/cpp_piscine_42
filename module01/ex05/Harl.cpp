#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::_debug() const
{
	std::cout << "[DEBUG]\n" << DEBAG_MESS << std::endl;
	return ;
}

void	Harl::_info() const
{
	std::cout << "[INFO]\n" << INFO_MESS << std::endl;
	return ;
}

void	Harl::_warning() const
{
	std::cout << "[WARNING]\n" << WARNING_MESS << std::endl;
	return ;
}

void	Harl::_error() const
{
	std::cout << "[ERROR]\n" << ERROR_MESS << std::endl;
	return ;
}

void	Harl::complain(std::string level)
{
	std::string		levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	function_prt	ptrs[4] = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	int				i = 0;

	while (level != levels[i])
		(this->*ptrs[i++])();
	(this->*ptrs[i])();
	return ;
}
