#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include <cstdlib>
# include <ctime>

# define GRADE_SIGN_ROBOTOMY 72
# define GRADE_EXECUTE_ROBOTOMY 45

class RobotomyRequestForm : public Form
{
private:
	std::string const	_target;

	void				_setTarget(std::string target);

public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string const target);
	RobotomyRequestForm(RobotomyRequestForm const &src);
	RobotomyRequestForm	&operator=(RobotomyRequestForm const &src);
	virtual	~RobotomyRequestForm();

	std::string const	&getTarget() const;
	virtual void		execute(Bureaucrat const &executor) const;
};

#endif