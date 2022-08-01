#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << this->_name << " are dying!!!" << std::endl;
}

void	Zombie::setZombieName(std::string name)
{
	this->_name = name;
	return ;
}

void	Zombie::announce() const
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
