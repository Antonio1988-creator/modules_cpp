/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 18:12:13 by anguil-l          #+#    #+#             */
/*   Updated: 2025/04/26 18:12:24 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(str target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {
	std::cout << "[C] ShrubberyCreationForm constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : AForm(src), _target(src._target) {
	std::cout << "[C] ShrubberyCreationForm copy constructor called." << std::endl;
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "[D] ShrubberyCreationForm destructor called." << std::endl;
}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rSym) {
	if (this != &rSym) {
		AForm::operator=(rSym);
	}
	return *this;
}

std::ostream &	operator<<(std::ostream & o, ShrubberyCreationForm const &rSym) {
	o << "Form name : " << rSym.getName() << std::endl;
	o << "Signed : ";
	if (rSym.getSigned())
		o << "True" << std::endl;
	else
		o << "False" << std::endl;
	o << "Need to be grade " << rSym.getSignGrade() << " to sign it, and grade " << rSym.getExecuteGrade() << " to execute it.";
	return o;
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	if (!this->getSigned())
		throw AForm::GradeTooLowException();
	if (executor.getGrade() > this->getExecuteGrade())
		throw AForm::GradeTooLowException();
	
	str				outfile = this->_target + "_shrubbery";
	std::ofstream	output(outfile.c_str());
	
	output << "       _-_" << std::endl;
	output << "    /~~   ~~\\" << std::endl;
	output << " /~~         ~~\\" << std::endl;
	output << "{               }" << std::endl;
	output << " \\  _-     -_  /" << std::endl;
	output << "   ~  \\ //  ~" << std::endl;
	output << "_- -   | | _- _" << std::endl;
	output << "  _ -  | |   -_" << std::endl;
	output << "      // \\\\" << std::endl;
	
	output.close();
}
