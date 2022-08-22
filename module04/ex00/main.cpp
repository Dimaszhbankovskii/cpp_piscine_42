#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal const	*meta = new Animal();
	Animal const	*j = new Dog();
	Animal const	*i = new Cat();

	std::cout << "--------------------------------------------------" << std::endl;

	std::cout << j->getType() << " " << std::ends;
	j->makeSound();
	
	std::cout << i->getType() << " " << std::ends;
	i->makeSound();

	meta->makeSound();

	std::cout << "--------------------------------------------------" << std::endl;

	delete meta;
	delete i;
	delete j;
	return (0);
}