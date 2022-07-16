#include <iostream>
#include "Student.hpp"

Student::Student(std::string name, int age)
{
	this->name = name;
	this->age = age;
}

void	Student::move()
{
	std::cout << name << " is moning" << std::endl;
}

void	Student::setName(std::string name)
{
	this->name = name;
}

void	Student::setAge(int age)
{
	if (age > 0 && age <= 100)
		this->age = age;
}

std::string	Student::getName()
{
	return (name);
}

int	Student::getAge()
{
	return (age);
}
