#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
public:
	DiamondTrap();
	DiamondTrap(std::string const name);
	DiamondTrap(DiamondTrap const &src);
	DiamondTrap& operator=(DiamondTrap const &src);
	~DiamondTrap();

	std::string		getName() const;
	unsigned int	getHitPoints() const;
	unsigned int	getEnergyPoints() const;
	unsigned int	getAttackDamage() const;

	void	whoAmI() const;

private:
	std::string	_name;
};

std::ostream& operator<<(std::ostream &outStream, DiamondTrap const &diamondtrap);

#endif