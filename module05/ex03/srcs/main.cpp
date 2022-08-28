#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/Intern.hpp"

#define SEP "-----------------------------------------------------------------------------------------------"

static void	freeData(Bureaucrat **bureaucrat, Form **form)
{
	if (*bureaucrat)
	{
		delete *bureaucrat;
		*bureaucrat = NULL;
	}
	if (*form)
	{
		delete *form;
		*form = NULL;
	}
}

int	main()
{
	Intern		someIntern;
	Bureaucrat	*bureaucrat;
	Form		*form;

	std::cout << SEP << std::endl;

	form = someIntern.makeForm("presidential pardon form", "ClapTrap");

	std::cout << SEP << std::endl;

	try
	{
		bureaucrat = new Bureaucrat("Bob", 3);

		std::cout << SEP << std::endl;

		bureaucrat->signForm(*form);
		
		std::cout << SEP << std::endl;
		
		bureaucrat->executeForm(*form);

		std::cout << SEP << std::endl;
	}
	catch(const std::exception &exc)
	{
		std::cout << exc.what() << std::endl;
	}

	std::cout << SEP << std::endl;
	freeData(&bureaucrat, &form);
	
	std::cout << SEP << std::endl;
	std::cout << SEP << std::endl;
	std::cout << SEP << std::endl;
	std::cout << SEP << std::endl;

	form = someIntern.makeForm("robotomy request form", "ScavTrap111");

	std::cout << SEP << std::endl;

	try
	{
		bureaucrat = new Bureaucrat("Jack", 46);

		std::cout << SEP << std::endl;

		bureaucrat->signForm(*form);
		
		std::cout << SEP << std::endl;
		
		bureaucrat->executeForm(*form);

		std::cout << SEP << std::endl;

		bureaucrat->incrementGrade();

		std::cout << SEP << std::endl;

		std::cout << *bureaucrat << std::endl;
		std::cout << *form << std::endl;

		std::cout << SEP << std::endl;

		bureaucrat->executeForm(*form);

		std::cout << SEP << std::endl;
	}
	catch(const std::exception &exc)
	{
		std::cout << exc.what() << std::endl;
	}

	std::cout << SEP << std::endl;
	freeData(&bureaucrat, &form);
	std::cout << SEP << std::endl;
	std::cout << SEP << std::endl;
	std::cout << SEP << std::endl;
	std::cout << SEP << std::endl;

	form = someIntern.makeForm("unknown form", "***111****");

	std::cout << SEP << std::endl;
	freeData(&bureaucrat, &form);
	std::cout << SEP << std::endl;

	return (0);
}