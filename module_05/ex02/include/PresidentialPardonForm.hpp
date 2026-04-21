#ifndef _PRESIDENTIALPARDONFORM_HPP_
#define _PRESIDENTIALPARDONFORM_HPP_

#include <iostream>
#include <string>
#include "AForm.hpp"

typedef std::string str;

class PresidentialPardonForm : public AForm {
	public:
		PresidentialPardonForm(str target);
		PresidentialPardonForm(PresidentialPardonForm const &src);
		~PresidentialPardonForm();

		PresidentialPardonForm &	operator=(PresidentialPardonForm const &rSym);

		void	execute(Bureaucrat const &executor) const;
	private:
		str const	_target;
};

std::ostream &	operator<<(std::ostream & o, PresidentialPardonForm const &rSym);

#endif
