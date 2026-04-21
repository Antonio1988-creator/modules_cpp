#ifndef _ROBOTOMYREQUESTFORM_HPP_
#define _ROBOTOMYREQUESTFORM_HPP_

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "AForm.hpp"

typedef std::string str;

class RobotomyRequestForm : public AForm {
	public:
		RobotomyRequestForm(str target);
		RobotomyRequestForm(RobotomyRequestForm const &src);
		~RobotomyRequestForm();

		RobotomyRequestForm &	operator=(RobotomyRequestForm const &rSym);

		void	execute(Bureaucrat const &executor) const;
	private:
		str const	_target;
};

std::ostream &	operator<<(std::ostream & o, RobotomyRequestForm const &rSym);

#endif
