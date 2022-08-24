#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

# define SIZE_EQUIPMENT 4

class Character : public ICharacter
{
public:
	Character();
	Character(std::string const &name);
	Character(Character const &src);
	Character&	operator=(Character const &src);
	virtual	~Character();

	virtual std::string const	&getName() const;
	virtual void				equip(AMateria *m);
	virtual void				unequip(int idx);
	virtual void				use(int idx, ICharacter &target);

private:
	std::string	_name;
	AMateria	*_materia[SIZE_EQUIPMENT];
	int			_numEquipment;
};

#endif