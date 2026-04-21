#include "../include/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(str target) : AForm("RobotomyRequestForm", 72, 45), _target(target) {
	std::cout << "[C] RobotomyRequestForm constructor called." << std::endl;
	srand(time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : AForm(src), _target(src._target) {
	std::cout << "[C] RobotomyRequestForm copy constructor called." << std::endl;
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "[D] RobotomyRequestForm destructor called." << std::endl;
}

RobotomyRequestForm &	RobotomyRequestForm::operator=(RobotomyRequestForm const &rSym) {
	if (this != &rSym) {
		// _target is const, cannot reassign
	}
	return *this;
}

std::ostream &	operator<<(std::ostream & o, RobotomyRequestForm const &rSym) {
	o << "Form name : " << rSym.getName() << std::endl;
	o << "Signed : ";
	if (rSym.getSigned())
		o << "True" << std::endl;
	else
		o << "False" << std::endl;
	o << "Need to be grade " << rSym.getSignGrade() << " to sign it, and grade " << rSym.getExecuteGrade() << " to execute it.";
	return o;
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	if (!this->_signed)
		throw AForm::GradeTooLowException();
	if (executor.getGrade() > this->_executeGrade)
		throw AForm::GradeTooLowException();
	
	std::cout << "*bzzzzzzzt* *whirrrr* *click click click*" << std::endl;
	
	if (rand() % 2 == 0) {
		std::cout << this->_target << " has been robotomized successfully!" << std::endl;
	} else {
		std::cout << "Robotomy of " << this->_target << " failed." << std::endl;
	}
}
