#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

# define SIZE_LIB 4

class MateriaSource : public IMateriaSource
{
public:
	MateriaSource();
	MateriaSource(MateriaSource const &src);
	MateriaSource& operator=(MateriaSource const &src);
	virtual ~MateriaSource();
	
	virtual void		learnMateria(AMateria	*src);
	virtual AMateria	*createMateria(std::string const &type);

private:
	AMateria	*_materiaLib[SIZE_LIB];
	int			_numLearnedMateria;
};

#endif