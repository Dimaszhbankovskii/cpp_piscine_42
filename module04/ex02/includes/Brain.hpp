#ifndef BRAIN_HPP
# define BRAIN_HPP

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

# define SIZE 100

class Brain
{
public:
	Brain();
	Brain(Brain const &src);
	Brain& operator=(Brain const &src);
	~Brain();

	std::string const	&getIdeaByIndex(unsigned int const index) const;
	void				setIdeaByIndex(std::string idea, unsigned int index);

private:
	std::string	_ideas[SIZE];
};

#endif