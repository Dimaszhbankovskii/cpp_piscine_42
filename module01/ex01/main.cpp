#include "Zombie.hpp"

int	main()
{
	Zombie	*horde;
	int		numZombie;

	numZombie = 6;
	std::cout << "Creating a horde of zombie... There are "<< numZombie;
	std::cout << " zombies in horde." << std::endl;
	horde = zombieHorde(numZombie, "Gribabas");
	for (int i = 0; i < numZombie; i++)
	{
		std::cout << ">> " << i + 1 << ". " << std::ends;
		horde[i].announce();
	}
	delete [] horde;

	numZombie = 3;
	std::cout << "Creating a horde of zombie... There are "<< numZombie;
	std::cout << " zombies in horde." << std::endl;
	horde = zombieHorde(numZombie, "Gribabas");
	for (int i = 0; i < numZombie; i++)
	{
		std::cout << ">> " << i + 1 << ". " << std::ends;
		horde[i].announce();
	}
	delete [] horde;

	numZombie = 1;
	std::cout << "Creating a horde of zombie... There are "<< numZombie;
	std::cout << " zombies in horde." << std::endl;
	horde = zombieHorde(numZombie, "Gribabas");
	for (int i = 0; i < numZombie; i++)
	{
		std::cout << ">> " << i + 1 << ". " << std::ends;
		horde[i].announce();
	}
	delete [] horde;
	return (0);
}
