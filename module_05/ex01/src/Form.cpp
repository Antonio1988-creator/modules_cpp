#include "../include/Form.hpp"

Form::Form(str name, int signGrade, int executeGrade) : _name(name), _signed(false), _signGrade(signGrade), _executeGrade(executeGrade) {
	std::cout << "[constructor] Form base constructor called." << std::endl;
	if (signGrade < 1 || executeGrade < 1)
		throw Form::GradeTooHighException();
	else if (signGrade > 150 || executeGrade > 150)
		throw Form::GradeTooLowException();
}

Form::Form() : _name("default"), _signed(false), _signGrade(150), _executeGrade(150) {
	std::cout << "[constructor] Form default constructor called." << std::endl;
}

Form::Form(Form const &src) : _name(src.getName()), _signGrade(src.getSignGrade()), _executeGrade(src.getExecuteGrade()) {
	std::cout << "[constructor] Form copy constructor called." << std::endl;
	*this = src;
}

Form::~Form() {
	std::cout << "[destructor] Form default destructor called." << std::endl;
}

Form &	Form::operator=(Form const &rSym) {
	if (this != &rSym) {
		this->_signed = rSym.getSigned();
	}
	return *this;
}

std::ostream &	operator<<(std::ostream& o, Form const &rSym) {
	o << "Form name : " << rSym.getName() << std::endl;
	o << "Signed : ";
	if (rSym.getSigned())
		o << "True" << std::endl;
	else
		o << "False" << std::endl;
	o << "Need to be grade " << rSym.getSignGrade() << " to sign it, and grade " << rSym.getExecuteGrade() << " to execute it.";
	return o;
}

str		Form::getName() const {
	return this->_name;
}

bool	Form::getSigned() const {
	return this->_signed;
}

int		Form::getSignGrade() const {
	return this->_signGrade;
}

int		Form::getExecuteGrade() const {
	return this->_executeGrade;
}

void			Form::beSigned(Bureaucrat &person) {
	if (this->_signed) {
		std::cout << this->_name << " is already signed." << std::endl; 
		return;
	}
	if (person.getGrade() > this->_signGrade) {
		throw Form::GradeTooLowException();
	}
	else {
		this->_signed = true;
	}
}

const char *	Form::GradeTooHighException::what() const throw() {
	return ("The bureaucrat is too senior to do this.");
}

const char *	Form::GradeTooLowException::what() const throw() {
	return ("The bureaucrat don't have the ability to do this.");
}
