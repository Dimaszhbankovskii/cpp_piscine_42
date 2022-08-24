#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(Dog const &src);
	Dog& operator=(Dog const &src);
	virtual ~Dog();

	Brain			&getBrain() const;
	virtual void	makeSound() const;
	void			showIdeaFromBrain(unsigned int index) const;
	void			setIdeaInBrain(std::string idea, unsigned int index);
private:
	Brain	*_brain;
};

#endif