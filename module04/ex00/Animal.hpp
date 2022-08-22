#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

# define NORMAL	"\033[0m"
# define BLACK	"\033[1;30m"
# define RED	"\033[1;31m"
# define GREEN	"\033[1;32m"
# define YELLOW	"\033[1;33m"
# define BLUE	"\033[1;34m"
# define VIOLET	"\033[1;35m"
# define CYAN	"\033[1;36m"
# define WHITE	"\033[1;37m"

class Animal
{
public:
	Animal();
	Animal(Animal const &src);
	Animal& operator=(Animal const &src);
	virtual ~Animal();

	std::string 	getType() const;
	virtual void	makeSound() const;

protected:
	std::string	_type;
};

#endif