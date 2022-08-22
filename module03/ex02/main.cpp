#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	{
		std::cout << "----------------------------------------------------------------------\n";
		std::cout << "--                  Initiation of ClapTrap series                   --\n";
		std::cout << "----------------------------------------------------------------------\n";
		std::cout << ">> Initiation ClapTrap claptrap001..." << std::endl; 

		ClapTrap	claptrap001("CL4P-TP");

		std::cout << "----------------------------------------------------------------------\n";
		std::cout << ">> Initiation ClapTrap claptrap002..." << std::endl; 

		ClapTrap	claptrap002("B2B");

		std::cout << "----------------------------------------------------------------------\n";
		std::cout << ">> Initiation ClapTrap claptrap003..." << std::endl; 

		ClapTrap	claptrap003(claptrap001);

		std::cout << "----------------------------------------------------------------------\n";
		std::cout << ">> Initiation ClapTrap claptrap004..." << std::endl; 

		ClapTrap	claptrap004;

		claptrap004 = claptrap002;

		std::cout << "----------------------------------------------------------------------\n";
		std::cout << "--                           Destructor                             --\n";
		std::cout << "----------------------------------------------------------------------" << std::endl;
	}

	{
		std::cout << "----------------------------------------------------------------------\n";
		std::cout << "----------------------------------------------------------------------\n";
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
		std::cout << "--                           Destructor                             --\n";
		std::cout << "----------------------------------------------------------------------" << std::endl;
	}

	std::cout << "----------------------------------------------------------------------\n";
	std::cout << "----------------------------------------------------------------------\n";
	std::cout << "----------------------------------------------------------------------\n";
	std::cout << "--                  Initiation of FragTrap series                   --\n";
	std::cout << "----------------------------------------------------------------------\n";
	std::cout << ">> Initiation FragTrap fragtrap77..." << std::endl;

	FragTrap	fragtrap77("ZH-300");

	std::cout << "----------------------------------------------------------------------\n";
	std::cout << ">> Initiation ScavTrap scavtrap88..." << std::endl; 

	FragTrap	fragtrap88("JJ-199");

	std::cout << "----------------------------------------------------------------------\n";
	std::cout << ">> Initiation ScavTrap scavtrap99..." << std::endl; 

	FragTrap	fragtrap99("RT-001");

	std::cout << "----------------------------------------------------------------------\n";
	std::cout << "--                 Manipulation of FragTrap series                  --\n";
	std::cout << "----------------------------------------------------------------------" << std::endl;
	std::cout << fragtrap77 << "\n\n" << fragtrap88 << "\n\n" << fragtrap99 << std::endl;
	std::cout << "----------------------------------------------------------------------" << std::endl;

	fragtrap77.attack(fragtrap88.getName());
	fragtrap88.takeDamage(fragtrap77.getAttackDamage());
	
	std::cout << "----------------------------------------------------------------------" << std::endl;
	std::cout << fragtrap77 << "\n\n" << fragtrap88 << "\n\n";
	std::cout << "----------------------------------------------------------------------" << std::endl;
	
	fragtrap88.takeDamage(60);

	std::cout << "----------------------------------------------------------------------" << std::endl;
	std::cout << fragtrap77 << "\n\n" << fragtrap88 << "\n\n";
	std::cout << "----------------------------------------------------------------------" << std::endl;

	fragtrap88.beRepaired(20);

	std::cout << "----------------------------------------------------------------------" << std::endl;
	std::cout << fragtrap77 << "\n\n" << fragtrap88 << "\n\n";
	std::cout << "----------------------------------------------------------------------" << std::endl;

	fragtrap88.takeDamage(60);

	std::cout << "----------------------------------------------------------------------" << std::endl;
	std::cout << fragtrap77 << "\n\n" << fragtrap88 << "\n\n";
	std::cout << "----------------------------------------------------------------------" << std::endl;

	fragtrap88.beRepaired(20);

	std::cout << "----------------------------------------------------------------------" << std::endl;
	std::cout << fragtrap77 << "\n\n" << fragtrap88 << "\n\n";
	std::cout << "----------------------------------------------------------------------" << std::endl;

	fragtrap77.highFivesGuys();
	fragtrap77.highFivesGuys();
	fragtrap88.highFivesGuys();

	std::cout << "----------------------------------------------------------------------" << std::endl;
	std::cout << fragtrap77 << "\n\n" << fragtrap88 << "\n\n";
	std::cout << "----------------------------------------------------------------------" << std::endl;

	std::cout << "----------------------------------------------------------------------\n";
	std::cout << "--                           Destructor                             --\n";
	std::cout << "----------------------------------------------------------------------" << std::endl;

	return (0);
}
