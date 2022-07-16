#include <iostream>
#include "Person.hpp"

// Первый конструктор
Person::Person(std::string name, int age)
{
	this->name = name;
	this->age = age;
	std::cout << "Fisrt constructor" << std::endl;
}

// Второй конструктор (вызывает первый конструктор)
Person::Person(std::string name) : Person(name, 18)
{
	std::cout << "Second constructor" << std::endl;
}

// Третий конструктор (вызывает второй конструктор)
Person::Person() : Person("Ivan")
{
	std::cout << "Third constructor" << std::endl;
}

void	Person::move()
{
	std::cout << name << " is moving" << std::endl;
}
