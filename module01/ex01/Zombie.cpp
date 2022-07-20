#include "Zombie.hpp"

Zombie::Zombie()
{
	return ;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << this->name << " are dying!!!" << std::endl;
	return ;
}

void	Zombie::setZombieName(std::string name)
{
	this->name = name;
	return ;
}

void	Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
