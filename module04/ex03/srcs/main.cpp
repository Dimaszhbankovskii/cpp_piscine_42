#include "../includes/Ice.hpp"
#include "../includes/Cure.hpp"
#include "../includes/Character.hpp"
#include "../includes/MateriaSource.hpp"

int	main()
{
	{
		std::cout << "--------------------------------------------------\n";
		std::cout << "-----         Initiation of materia          -----\n";
		std::cout << "--------------------------------------------------" << std::endl;

		AMateria	*iceArrow = new Ice();
		std::cout << "--------------------------------------------------" << std::endl;
		AMateria	*cureWater = new Cure();
		std::cout << "--------------------------------------------------" << std::endl;
		AMateria	*iceAxe = new Ice();
		std::cout << "--------------------------------------------------" << std::endl;
		AMateria	*curePotion = new Cure();
		std::cout << "--------------------------------------------------" << std::endl;
		AMateria	*cureScroll;
		cureScroll = curePotion->clone();

		std::cout << "--------------------------------------------------" << std::endl;
		std::cout << "--------------------------------------------------\n";
		std::cout << "-----         Initiation of character        -----\n";
		std::cout << "--------------------------------------------------" << std::endl;


		ICharacter	*warrior = new Character("Gribabas");
		std::cout << "--------------------------------------------------" << std::endl;
		ICharacter	*archer = new Character("Luan");

		std::cout << "--------------------------------------------------" << std::endl;
		std::cout << "--------------------------------------------------\n";
		std::cout << "-----       Manipulation of character        -----\n";
		std::cout << "--------------------------------------------------" << std::endl;

		warrior->equip(iceArrow);
		warrior->equip(cureWater);
		warrior->equip(iceAxe);
		warrior->equip(curePotion);

		std::cout << "--------------------------------------------------" << std::endl;

		warrior->use(0, *archer);
		warrior->use(1, *archer);
		warrior->use(2, *archer);
		warrior->use(3, *archer);
		warrior->use(4, *archer);

		std::cout << "--------------------------------------------------" << std::endl;

		warrior->equip(cureScroll);
		warrior->unequip(2);
		warrior->equip(cureScroll);

		std::cout << "--------------------------------------------------" << std::endl;

		warrior->use(0, *archer);
		warrior->use(1, *archer);
		warrior->use(2, *archer);
		warrior->use(3, *archer);

		std::cout << "--------------------------------------------------" << std::endl;
		std::cout << "--------------------------------------------------\n";
		std::cout << "-----           Deletion of materia          -----\n";
		std::cout << "--------------------------------------------------" << std::endl;

		delete iceAxe;

		std::cout << "--------------------------------------------------\n";
		std::cout << "-----         Deletion of character          -----\n";
		std::cout << "--------------------------------------------------" << std::endl;

		delete warrior;
		delete archer;
	}

	{
		std::cout << "--------------------------------------------------\n";
		std::cout << "-----         Deep Copy of character         -----\n";
		std::cout << "--------------------------------------------------" << std::endl;

		Character	warrior("Artur");
		Character	berserk;

		std::cout << "--------------------------------------------------" << std::endl;

		Ice			*ice = new Ice();
		Cure		*cure = new Cure();

		std::cout << "--------------------------------------------------" << std::endl;

		warrior.equip(ice);
		warrior.equip(cure);

		std::cout << "--------------------------------------------------" << std::endl;

		berserk = warrior;

		std::cout << "--------------------------------------------------" << std::endl;
	}

	{
		std::cout << "--------------------------------------------------\n";
		std::cout << "-----                  SUBJECT               -----\n";
		std::cout << "--------------------------------------------------" << std::endl;

		IMateriaSource	*src = new MateriaSource();

		std::cout << "--------------------------------------------------" << std::endl;
		
		AMateria	*tmpIce = new Ice();
		AMateria	*tmpCure = new Cure();

		std::cout << "--------------------------------------------------" << std::endl;

		src->learnMateria(tmpIce);
		src->learnMateria(tmpCure);
		
		std::cout << "--------------------------------------------------" << std::endl;

		ICharacter* me = new Character("me");
		
		std::cout << "--------------------------------------------------" << std::endl;

		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		
		std::cout << "--------------------------------------------------" << std::endl;

		ICharacter* bob = new Character("bob");
		
		std::cout << "--------------------------------------------------" << std::endl;

		me->use(0, *bob);
		me->use(1, *bob);
		
		std::cout << "--------------------------------------------------" << std::endl;

		delete tmpIce;
		delete tmpCure;

		std::cout << "--------------------------------------------------" << std::endl;

		delete bob;
		delete me;
		delete src;
	}

	return (0);
}
