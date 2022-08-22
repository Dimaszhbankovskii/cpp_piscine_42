#include "ScavTrap.hpp"

int	main()
{
	std::cout << "----------------------------------------------------------------------\n";
	std::cout << "--                  Initiation of ScavTrap series                   --\n";
	std::cout << "----------------------------------------------------------------------\n";
	std::cout << ">> Initiation ScavTrap scavtrap111..." << std::endl; 

	ScavTrap	scavtrap111("2B");

	std::cout << "----------------------------------------------------------------------\n";
	std::cout << ">> Initiation ScavTrap scavtrap222..." << std::endl; 

	ScavTrap	scavtrap222("CP300");

	std::cout << "----------------------------------------------------------------------\n";
	std::cout << ">> Initiation ScavTrap scavtrap333..." << std::endl; 

	ScavTrap	scavtrap333(scavtrap111);

	std::cout << "----------------------------------------------------------------------\n";
	std::cout << ">> Initiation ScavTrap scavtrap444..." << std::endl; 

	ScavTrap	scavtrap444;

	scavtrap444 = scavtrap222;

	std::cout << "----------------------------------------------------------------------\n";
	std::cout << "--                 Manipulation of ScavTrap series                  --\n";
	std::cout << "----------------------------------------------------------------------" << std::endl;
	std::cout << scavtrap111 << "\n\n" << scavtrap222 << "\n\n";
	std::cout << scavtrap333 << "\n\n" << scavtrap444 << std::endl;
	std::cout << "----------------------------------------------------------------------" << std::endl;

	scavtrap111.attack(scavtrap222.getName());
	scavtrap222.takeDamage(scavtrap111.getAttackDamage());
	
	std::cout << "----------------------------------------------------------------------" << std::endl;
	std::cout << scavtrap111 << "\n\n" << scavtrap222 << "\n\n";
	std::cout << "----------------------------------------------------------------------" << std::endl;
	
	scavtrap222.takeDamage(60);

	std::cout << "----------------------------------------------------------------------" << std::endl;
	std::cout << scavtrap111 << "\n\n" << scavtrap222 << "\n\n";
	std::cout << "----------------------------------------------------------------------" << std::endl;

	scavtrap222.beRepaired(20);

	std::cout << "----------------------------------------------------------------------" << std::endl;
	std::cout << scavtrap111 << "\n\n" << scavtrap222 << "\n\n";
	std::cout << "----------------------------------------------------------------------" << std::endl;

	scavtrap222.takeDamage(60);

	std::cout << "----------------------------------------------------------------------" << std::endl;
	std::cout << scavtrap111 << "\n\n" << scavtrap222 << "\n\n";
	std::cout << "----------------------------------------------------------------------" << std::endl;

	scavtrap222.beRepaired(20);

	std::cout << "----------------------------------------------------------------------" << std::endl;
	std::cout << scavtrap111 << "\n\n" << scavtrap222 << "\n\n";
	std::cout << "----------------------------------------------------------------------" << std::endl;

	scavtrap111.guardGate();
	scavtrap111.guardGate();
	scavtrap111.guardGate();
	scavtrap111.guardGate();
	scavtrap111.guardGate();

	std::cout << "----------------------------------------------------------------------" << std::endl;
	std::cout << scavtrap111 << "\n\n" << scavtrap222 << "\n\n";
	std::cout << "----------------------------------------------------------------------" << std::endl;

	std::cout << "----------------------------------------------------------------------\n";
	std::cout << "--                           Destructor                             --\n";
	std::cout << "----------------------------------------------------------------------" << std::endl;

	return (0);
}
