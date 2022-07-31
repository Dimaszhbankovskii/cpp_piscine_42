#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string const name);
	FragTrap(FragTrap const &src);
	~FragTrap();

	void	highFivesGuys();
};

std::ostream	& operator << (std::ostream &outStream, FragTrap const &fragtrap);

#endif