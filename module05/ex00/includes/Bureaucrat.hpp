#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
public:
	Bureaucrat();
	Bureaucrat(std::string const name, int grade);
	Bureaucrat(Bureaucrat const &src);
	Bureaucrat&	operator=(Bureaucrat const &src);
	~Bureaucrat();

	std::string const	getName() const;
	int					getGrade() const;

private:
	std::string const	_name;
	int					_grade;

	void				_setName(std::string name);
};

#endif