#include "../include/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(str target) : AForm("PresidentialPardonForm", 25, 5), _target(target) {
	std::cout << "[C] PresidentialPardonForm constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : AForm(src), _target(src._target) {
	std::cout << "[C] PresidentialPardonForm copy constructor called." << std::endl;
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "[D] PresidentialPardonForm destructor called." << std::endl;
}

PresidentialPardonForm &	PresidentialPardonForm::operator=(PresidentialPardonForm const &rSym) {
	if (this != &rSym) {
		// _target is const, cannot reassign
	}
	return *this;
}

std::ostream &	operator<<(std::ostream & o, PresidentialPardonForm const &rSym) {
	o << "Form name : " << rSym.getName() << std::endl;
	o << "Signed : ";
	if (rSym.getSigned())
		o << "True" << std::endl;
	else
		o << "False" << std::endl;
	o << "Need to be grade " << rSym.getSignGrade() << " to sign it, and grade " << rSym.getExecuteGrade() << " to execute it.";
	return o;
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	if (!this->_signed)
		throw AForm::GradeTooLowException();
	if (executor.getGrade() > this->_executeGrade)
		throw AForm::GradeTooLowException();
	
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
