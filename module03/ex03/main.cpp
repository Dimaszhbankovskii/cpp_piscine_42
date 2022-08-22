#include "DiamondTrap.hpp"

int	main()
{
	std::cout << "----------------------------------------------------------------------\n";
	std::cout << "----------------------------------------------------------------------\n";
	std::cout << "----------------------------------------------------------------------\n";
	std::cout << "--                  Initiation of DiamondTrap series                   --\n";
	std::cout << "----------------------------------------------------------------------\n";
	std::cout << ">> Initiation DiamondTrap diamondtrap000..." << std::endl;

	DiamondTrap	diamondtrap000("BIO");

	std::cout << "----------------------------------------------------------------------\n";
	std::cout << ">> Initiation DiamondTrap diamondtrap111..." << std::endl;

	DiamondTrap	diamondtrap111("DEATH");

	std::cout << "----------------------------------------------------------------------\n";
	std::cout << ">> Initiation DiamondTrap diamondtrap222..." << std::endl;

	DiamondTrap	diamondtrap222(diamondtrap000);

	std::cout << "----------------------------------------------------------------------\n";
	std::cout << ">> Initiation DiamondTrap diamondtrap333..." << std::endl;

	DiamondTrap	diamondtrap333;

	diamondtrap333 = diamondtrap111;

	std::cout << "----------------------------------------------------------------------\n";
	std::cout << "--                 Manipulation of DiamondTrap series                  --\n";
	std::cout << "----------------------------------------------------------------------" << std::endl;
	std::cout << diamondtrap000 << "\n\n" << diamondtrap111 << "\n\n";
	std::cout << diamondtrap222 << "\n\n" << diamondtrap333 << std::endl;
	std::cout << "----------------------------------------------------------------------" << std::endl;

	diamondtrap000.whoAmI();

	std::cout << "----------------------------------------------------------------------" << std::endl;

	diamondtrap111.whoAmI();

	std::cout << "----------------------------------------------------------------------" << std::endl;

	diamondtrap000.attack(diamondtrap111.getName());
	diamondtrap111.takeDamage(diamondtrap000.getAttackDamage());

	std::cout << "----------------------------------------------------------------------" << std::endl;
	std::cout << diamondtrap000 << "\n\n" << diamondtrap111 << "\n";
	std::cout << "----------------------------------------------------------------------" << std::endl;

	diamondtrap000.beRepaired(10);

	std::cout << "----------------------------------------------------------------------" << std::endl;
	std::cout << diamondtrap000 << "\n\n" << diamondtrap111 << "\n";
	std::cout << "----------------------------------------------------------------------" << std::endl;

	diamondtrap000.guardGate();

	std::cout << "----------------------------------------------------------------------" << std::endl;
	std::cout << diamondtrap000 << "\n";
	std::cout << "----------------------------------------------------------------------" << std::endl;

	diamondtrap000.highFivesGuys();

	std::cout << "----------------------------------------------------------------------" << std::endl;
	std::cout << diamondtrap000 << "\n";
	std::cout << "----------------------------------------------------------------------" << std::endl;

	return (0);
}
