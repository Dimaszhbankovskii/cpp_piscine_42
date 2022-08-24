#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"

int main()
{
	std::cout << "-------------------------------------------------------------" << std::endl;
	std::cout << "------------------------- Deep Copy -------------------------" << std::endl;
	std::cout << "-------------------------------------------------------------" << std::endl;
	{
		Cat	cat;

		std::cout << "-------------------------------------------------------------" << std::endl;
		
		cat.showIdeaFromBrain(0);
		cat.showIdeaFromBrain(1);
		cat.setIdeaInBrain("new idea!!!", 1);
		cat.showIdeaFromBrain(1);

		std::cout << "-------------------------------------------------------------" << std::endl;
		{
			Cat	tmp = cat;
			
			std::cout << "tmp ==> " << std::ends;
			tmp.showIdeaFromBrain(0);
			std::cout << "tmp ==> " << std::ends;
			tmp.showIdeaFromBrain(1);
			tmp.setIdeaInBrain("NO IDEA!!!", 1);
			std::cout << "tmp ==> " << std::ends;
			tmp.showIdeaFromBrain(1);

			std::cout << "-------------------------------------------------------------" << std::endl;

			cat.showIdeaFromBrain(1);
		}
		std::cout << "-------------------------------------------------------------" << std::endl;
		
		cat.showIdeaFromBrain(1);

		std::cout << "-------------------------------------------------------------" << std::endl;
	}
	std::cout << "-------------------------------------------------------------" << std::endl;
	std::cout << "-------------------------------------------------------------" << std::endl;
	std::cout << "------------------------- Deep Copy -------------------------" << std::endl;
	std::cout << "-------------------------------------------------------------" << std::endl;
	{
		Dog	dog;

		std::cout << "-------------------------------------------------------------" << std::endl;
		
		dog.showIdeaFromBrain(0);
		dog.showIdeaFromBrain(1);
		dog.setIdeaInBrain("new idea!!!", 1);
		dog.showIdeaFromBrain(1);

		std::cout << "-------------------------------------------------------------" << std::endl;
		{
			Dog	tmp = dog;
			
			std::cout << "tmp ==> " << std::ends;
			tmp.showIdeaFromBrain(0);
			std::cout << "tmp ==> " << std::ends;
			tmp.showIdeaFromBrain(1);
			tmp.setIdeaInBrain("NO IDEA!!!", 1);
			std::cout << "tmp ==> " << std::ends;
			tmp.showIdeaFromBrain(1);

			std::cout << "-------------------------------------------------------------" << std::endl;

			dog.showIdeaFromBrain(1);
		}
		std::cout << "-------------------------------------------------------------" << std::endl;
		
		dog.showIdeaFromBrain(1);

		std::cout << "-------------------------------------------------------------" << std::endl;
	}
	std::cout << "-------------------------------------------------------------" << std::endl;
	std::cout << "-------------------------------------------------------------" << std::endl;
	std::cout << "-------------------------- Test 1 ---------------------------" << std::endl;
	std::cout << "-------------------------------------------------------------" << std::endl;
	{
		Animal const	*cat = new Cat();
		Animal const	*dog = new Dog();

		std::cout << "-------------------------------------------------------------" << std::endl;

		delete cat;
		delete dog;
	}
	std::cout << "-------------------------------------------------------------" << std::endl;
	std::cout << "-------------------------------------------------------------" << std::endl;
	std::cout << "-------------------------- Test 2 ---------------------------" << std::endl;
	std::cout << "-------------------------------------------------------------" << std::endl;
	{
		size_t	size = 6;
		Animal	*animals[size];

		std::cout << ">> Initiation of array animals" << std::endl;
		std::cout << "-------------------------------------------------------------" << std::endl;
		for (size_t i = 0; i < size; i++)
		{
			if (i < size / 2)
				animals[i] = new Cat();
			else
				animals[i] = new Dog();
		std::cout << "-------------------------------------------------------------" << std::endl;
		}

		std::cout << "-------------------------------------------------------------" << std::endl;
		std::cout << ">> Deletion of array animals" << std::endl;
		std::cout << "-------------------------------------------------------------" << std::endl;
		
		for (size_t i = 0; i < size; i++)
		{
			delete animals[i];
			std::cout << "-------------------------------------------------------------" << std::endl;
		}
	}

	return (0);
}