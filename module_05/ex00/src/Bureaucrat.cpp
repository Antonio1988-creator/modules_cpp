/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 18:12:13 by anguil-l          #+#    #+#             */
/*   Updated: 2025/04/26 18:12:24 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(str name, int grade) : _name(name) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat()
	: _name("default"), _grade(150)
{
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : _name(src.getName()) {
	*this = src;
}

Bureaucrat::~Bureaucrat() {
}

Bureaucrat &	Bureaucrat::operator=(Bureaucrat const &rSym) {
	if (this != &rSym) {
		this->_grade = rSym._grade;
	}
	return *this;
}

std::ostream &	operator<<(std::ostream & o, Bureaucrat const &rSym) {
	o << rSym.getName() << ", bureaucrat grade " << rSym.getGrade() << ".";
	return o;
}

str	Bureaucrat::getName() const {
	return this->_name;
}

int	Bureaucrat::getGrade() const {
	return this->_grade;
}

void			Bureaucrat::promote() {
	if (this->_grade > 1)
		this->_grade--;
	else
		throw Bureaucrat::GradeTooHighException();
}

void			Bureaucrat::demote() {
	if (this->_grade < 150)
		this->_grade++;
	else
		throw Bureaucrat::GradeTooLowException();
}

const char *	Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade is too high";
}

const char *	Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade is too low";
}