#include <iostream>
#include "Person.hpp"
#include "Student.hpp"

int	main()
{
	int	mode;

	std::cout << "Program modes are available:\n" << "1. Person\n" << "2. Student" << std::endl;
	std::cout << "Input value of mode (Example: 1):" << std::endl;
	std::cin >> mode;

	if (mode == 1)
	{
		Person	person1 = Person("Dimas", 23);
		Person	person2("Nik");
		Person	person3 = Person();
		Person	*prt;

		std::cout << "--------------------------------------------" << std::endl;
		std::cout << "Name: " << person1.name << "\tAge: " << person1.age << std::endl;
		person1.move();
		std::cout << "--------------------------------------------" << std::endl;

		prt = &person2;
		std::cout << "--------------------------------------------" << std::endl;
		std::cout << "Name: " << prt->name << "\tAge: " << prt->age << std::endl;
		prt->move();
		std::cout << "--------------------------------------------" << std::endl;

		prt = &person3;
		std::cout << "--------------------------------------------" << std::endl;
		std::cout << "Name: " << person3.name << "\tAge: " << prt->age << std::endl;
		person3.move();
		std::cout << "--------------------------------------------" << std::endl;
	}
	else if (mode == 2)
	{
		Student student = Student("Max", 25);

		std::cout << "Name: " << student.getName() << "\tAge" << student.getAge() << std::endl;
		student.move();
		student.setName("Peter");
		std::cout << "Name: " << student.getName() << "\tAge" << student.getAge() << std::endl;
		student.move();
		student.setName("Misha");
		student.setAge(35);
		std::cout << "Name: " << student.getName() << "\tAge" << student.getAge() << std::endl;
		student.move();
	}
	return (0);
}
