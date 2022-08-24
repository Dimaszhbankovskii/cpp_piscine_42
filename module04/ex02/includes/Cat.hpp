#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
public:
	Cat();
	Cat(Cat const &src);
	Cat& operator=(Cat const &src);
	virtual ~Cat();

	Brain			&getBrain() const;
	virtual void	makeSound() const;
	void			showIdeaFromBrain(unsigned int index) const;
	void			setIdeaInBrain(std::string idea, unsigned int index);

private:
	Brain	*_brain;
};

#endif