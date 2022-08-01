#include "Zombie.hpp"

int	main()
{	
	std::cout << "----------------------------------------------------------------------\n";
	std::cout << "Creating the first Zombie John through the class Constructor" << std::endl;

	Zombie	john("John");
	john.announce();

	std::cout << "----------------------------------------------------------------------" << std::endl;

	std::cout << "----------------------------------------------------------------------\n";
	std::cout << "Creating the second Zombie Gribabas through function newZombie()" << std::endl;

	Zombie	*gribabas = newZombie("Gribabas");
	gribabas->announce();
	delete (gribabas);

	std::cout << "----------------------------------------------------------------------" << std::endl;

	std::cout << "----------------------------------------------------------------------\n";
	std::cout << "Creating the third Zombie Klucker through function randomChump()" << std::endl;
	
	randomChump("Klucker");
	
	std::cout << "----------------------------------------------------------------------" <<std::endl;
	return (0);
}
