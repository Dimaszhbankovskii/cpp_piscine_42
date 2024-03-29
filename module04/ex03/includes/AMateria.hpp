#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

# define NORMAL	"\033[0m"
# define BLACK	"\033[1;30m"
# define RED	"\033[1;31m"
# define GREEN	"\033[1;32m"
# define YELLOW	"\033[1;33m"
# define BLUE	"\033[1;34m"
# define VIOLET	"\033[1;35m"
# define CYAN	"\033[1;36m"
# define WHITE	"\033[1;37m"

class ICharacter;

class AMateria
{
public:
	AMateria();
	AMateria(std::string const &type);
	AMateria(AMateria const &src);
	AMateria&	operator=(AMateria const &src);
	virtual	~AMateria();

	std::string const	&getType() const;

	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter &target);

protected:
	std::string	_type;
};

#endif