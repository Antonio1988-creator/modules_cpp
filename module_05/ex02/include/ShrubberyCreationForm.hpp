#ifndef _SHRUBBERYCREATIONFORM_HPP_
#define _SHRUBBERYCREATIONFORM_HPP_

#include <iostream>
#include <string>
#include <fstream>
#include "AForm.hpp"

typedef std::string str;

class ShrubberyCreationForm : public AForm {
	public:
		ShrubberyCreationForm(str target);
		ShrubberyCreationForm(ShrubberyCreationForm const &src);
		~ShrubberyCreationForm();

		ShrubberyCreationForm &	operator=(ShrubberyCreationForm const &rSym);

		void	execute(Bureaucrat const &executor) const;
	private:
		str const	_target;
};

std::ostream &	operator<<(std::ostream & o, ShrubberyCreationForm const &rSym);

#endif
