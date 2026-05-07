#include "../include/Intern.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"

Intern::Intern() {
	std::cout << "[C] Intern constructor called." << std::endl;
}

Intern::Intern(Intern const &src) {
	std::cout << "[C] Intern copy constructor called." << std::endl;
	*this = src;
}

Intern::~Intern() {
	std::cout << "[D] Intern destructor called." << std::endl;
}

Intern &	Intern::operator=(Intern const &rSym) {
	(void)rSym;
	return *this;
}

AForm *	Intern::_makeShrubberyCreationForm(str target) {
	return new ShrubberyCreationForm(target);
}

AForm *	Intern::_makeRobotomyRequestForm(str target) {
	return new RobotomyRequestForm(target);
}

AForm *	Intern::_makePresidentialPardonForm(str target) {
	return new PresidentialPardonForm(target);
}

AForm *	Intern::makeForm(str form_name, str target) {
	str form_names[3] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};

	AForm* (Intern::*form_creators[3])(str) = {
		&Intern::_makeShrubberyCreationForm,
		&Intern::_makeRobotomyRequestForm,
		&Intern::_makePresidentialPardonForm
	};

	for (int i = 0; i < 3; i++) {
		if (form_names[i] == form_name) {
			std::cout << "Intern creates " << form_name << std::endl;
			return (this->*form_creators[i])(target);
		}
	}

	std::cout << "Error: Form name \"" << form_name << "\" does not exist." << std::endl;
	return NULL;
}
