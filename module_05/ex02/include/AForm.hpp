#ifndef _AFORM_HPP_
#define _AFORM_HPP_

#include <iostream>
#include <string>
#include <stdexcept>

typedef std::string str;

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
	public:
		AForm(str name, int signGrade, int executeGrade);
		AForm();
		AForm(AForm const &src);
		virtual ~AForm();

		AForm &	operator=(AForm const &rSym);
		str		getName() const;
		bool	getSigned() const;
		int		getSignGrade() const;
		int		getExecuteGrade() const;

		void			beSigned(Bureaucrat &person);
		virtual void	execute(Bureaucrat const &executor) const = 0;

		class GradeTooHighException : public std::exception {
			public:
				virtual const char *	what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char *	what() const throw();
		};
	protected:
		str const	_name;
		bool		_signed;
		int const	_signGrade;
		int const	_executeGrade;
};

std::ostream &	operator<<(std::ostream & o, AForm const &rSym);

#endif
