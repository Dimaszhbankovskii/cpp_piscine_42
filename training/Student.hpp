#ifndef STUDENT_HPP
# define STUDENT_HPP

#include <iostream>

class Student
{
public:
	Student(std::string name, int age);

	void		move();
	void		setName(std::string name);
	void		setAge(int age);
	std::string	getName();
	int			getAge();

private:
	std::string	name;
	int			age;
};

#endif