#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongCat.hpp"

int main()
{
	Animal const	*animal = new Animal();
	Animal const	*dog = new Dog();
	Animal const	*cat = new Cat();

	std::cout << "--------------------------------------------------" << std::endl;

	std::cout << dog->getType() << ": " << std::ends;
	dog->makeSound();
	
	std::cout << cat->getType() << ": " << std::ends;
	cat->makeSound();

	std::cout << animal->getType() << ": " << std::ends;
	animal->makeSound();

	std::cout << "--------------------------------------------------" << std::endl;

	delete animal;
	delete dog;
	delete cat;

	std::cout << "--------------------------------------------------\n";
	std::cout << "--------------------------------------------------" << std::endl;

	WrongAnimal const	*wrongAnimal = new WrongAnimal();
	WrongAnimal const	*wrongCat = new WrongCat();

	std::cout << "--------------------------------------------------" << std::endl;

	std::cout << wrongAnimal->getType() << ": " << std::ends;
	wrongAnimal->makeSound();

	std::cout << wrongCat->getType() << ": " << std::ends;
	wrongCat->makeSound();

	std::cout << "--------------------------------------------------" << std::endl;

	delete wrongAnimal;
	delete wrongCat;

	return (0);
}