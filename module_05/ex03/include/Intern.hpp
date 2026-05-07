#ifndef _INTERN_HPP_
#define _INTERN_HPP_

#include <iostream>
#include <string>
#include "AForm.hpp"

typedef std::string str;

class Intern {
	public:
		Intern();
		Intern(Intern const &src);
		~Intern();

		Intern &	operator=(Intern const &rSym);

		AForm *		makeForm(str form_name, str target);

	private:
		AForm *		_makeShrubberyCreationForm(str target);
		AForm *		_makeRobotomyRequestForm(str target);
		AForm *		_makePresidentialPardonForm(str target);
};

#endif
