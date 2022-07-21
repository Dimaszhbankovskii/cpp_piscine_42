#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

# define DEBAG_LEVEL 0
# define INFO_LEVEL 1
# define WARNING_LEVEL 2
# define ERROR_LEVEL 3

# define DEBAG_MESS "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
# define INFO_MESS "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!"
# define WARNING_MESS "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month."
# define ERROR_MESS "This is unacceptable! I want to speak to the manager now."
# define DEFAULT_MESS "[ Probably complaining about insignificant problems ]"

class Harl
{
private:
	void	debug();
	void	info();
	void	warning();
	void	error();

public:
	Harl();
	~Harl();

	void	complain(std::string level);
};

#endif