#include "ClapTrap.hpp"

int	main()
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
	std::cout << "--                 Manipulation of ClapTrap series                  --\n";
	std::cout << "----------------------------------------------------------------------" << std::endl;
	std::cout << claptrap001 << "\n\n" << claptrap002 << std::endl;
	std::cout << "----------------------------------------------------------------------" << std::endl;

	claptrap001.attack(claptrap002.getName());
	claptrap002.takeDamage(claptrap001.getAttackDamage());

	std::cout << "----------------------------------------------------------------------" << std::endl;
	std::cout << claptrap001 << "\n\n" << claptrap002 << std::endl;
	std::cout << "----------------------------------------------------------------------" << std::endl;

	claptrap002.takeDamage(8);

	std::cout << "----------------------------------------------------------------------" << std::endl;
	std::cout << claptrap001 << "\n\n" << claptrap002 << std::endl;
	std::cout << "----------------------------------------------------------------------" << std::endl;

	claptrap002.beRepaired(3);

	std::cout << "----------------------------------------------------------------------" << std::endl;
	std::cout << claptrap001 << "\n\n" << claptrap002 << std::endl;
	std::cout << "----------------------------------------------------------------------" << std::endl;

	claptrap002.takeDamage(6);

	std::cout << "----------------------------------------------------------------------" << std::endl;
	std::cout << claptrap001 << "\n\n" << claptrap002 << std::endl;
	std::cout << "----------------------------------------------------------------------" << std::endl;

	claptrap002.attack(claptrap001.getName());
	claptrap002.beRepaired(10);
	claptrap002.takeDamage(1);

	std::cout << "----------------------------------------------------------------------" << std::endl;
	std::cout << claptrap001 << "\n\n" << claptrap002 << std::endl;
	std::cout << "----------------------------------------------------------------------" << std::endl;

	claptrap001.beRepaired(1);

	std::cout << "----------------------------------------------------------------------" << std::endl;
	std::cout << claptrap001 << "\n\n" << claptrap002 << std::endl;
	std::cout << "----------------------------------------------------------------------" << std::endl;

	claptrap001.attack(claptrap004.getName());
	claptrap001.attack(claptrap004.getName());
	claptrap001.attack(claptrap004.getName());
	claptrap001.attack(claptrap004.getName());
	claptrap001.attack(claptrap004.getName());
	claptrap001.attack(claptrap004.getName());
	claptrap001.attack(claptrap004.getName());
	claptrap001.attack(claptrap004.getName());
	claptrap001.attack(claptrap004.getName());
	claptrap001.attack(claptrap004.getName());

	std::cout << "----------------------------------------------------------------------" << std::endl;
	std::cout << claptrap001 << std::endl;
	std::cout << "----------------------------------------------------------------------" << std::endl;

	return (0);
}