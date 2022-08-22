#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string const name);
	ScavTrap(ScavTrap const &src);
	ScavTrap& operator=(ScavTrap const &src);
	~ScavTrap();

	void	attack(std::string const &target);
	void	guardGate();
};

std::ostream& operator<<(std::ostream &outStream, ScavTrap const &scavtrap);

#endif