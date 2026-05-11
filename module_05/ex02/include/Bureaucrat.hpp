/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 18:12:13 by anguil-l          #+#    #+#             */
/*   Updated: 2025/04/26 18:12:24 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BUREAUCRAT_HPP_
#define _BUREAUCRAT_HPP_

#include <iostream>
#include <string>
#include <stdexcept>
#include <climits>

typedef std::string str;

class AForm;

class Bureaucrat {
	public:
		Bureaucrat(str name, int grade);
		Bureaucrat();
		Bureaucrat(Bureaucrat const &src);
		~Bureaucrat();

		Bureaucrat&	operator=(Bureaucrat const &rSym);
		str				getName() const;
		int				getGrade() const;

		void			promote();
		void			demote();

		void			signForm(AForm &form);
		void			executeForm(AForm const &form) const;


		class GradeTooHighException : public std::exception {
			public:
				virtual const char *	what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char *	what() const throw();
		};
	private:
		str const	_name;
		int			_grade;
};

std::ostream &	operator<<(std::ostream & o, Bureaucrat const &rSym);

#endif