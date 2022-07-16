#ifndef PERSON_HPP
# define PERSON_HPP

# include <string>

class Person
{
public:
	Person(std::string name, int age);
	Person(std::string);
	Person();

	std::string	name;
	int			age;

	void		move();
};

#endif
