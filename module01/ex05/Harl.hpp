#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

# define DEBAG_MESS "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
# define INFO_MESS "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!"
# define WARNING_MESS "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month."
# define ERROR_MESS "This is unacceptable! I want to speak to the manager now."

class Harl
{
public:
	Harl();
	~Harl();

	void	complain(std::string level);

private:
	void	_debug() const;
	void	_info() const;
	void	_warning() const;
	void	_error() const;
};

typedef void (Harl::*function_prt)(void) const;

#endif