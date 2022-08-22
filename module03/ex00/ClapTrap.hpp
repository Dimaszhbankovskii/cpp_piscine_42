#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

# define NORMAL	"\033[0m"
# define BLACK	"\033[1;30m"
# define RED	"\033[1;31m"
# define GREEN	"\033[1;32m"
# define YELLOW	"\033[1;33m"
# define BLUE	"\033[1;34m"
# define VIOLET	"\033[1;35m"
# define CYAN	"\033[1;36m"
# define WHITE	"\033[1;37m"

class ClapTrap
{
public:
	ClapTrap();
	ClapTrap(std::string const name);
	ClapTrap(ClapTrap const &src);
	ClapTrap	& operator = (ClapTrap const &src);
	~ClapTrap();

	std::string		getName() const;
	unsigned int	getHitPoints() const;
	unsigned int	getEnergyPoints() const;
	unsigned int	getAttackDamage() const;

	void	attack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

private:
	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;
};

std::ostream	& operator << (std::ostream &outStream, ClapTrap const &claptrap);

#endif