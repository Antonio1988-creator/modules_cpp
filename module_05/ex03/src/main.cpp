#include "../include/Bureaucrat.hpp"
#include "../include/AForm.hpp"
#include "../include/Intern.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include <iostream>

int main()
{
	std::cout << "=== ex03: Intern tests ===" << std::endl;

	try {
		std::cout << "\n--- Test 1: Create valid forms ---" << std::endl;
		Intern intern;
		Bureaucrat bob("Bob", 1);
		
		std::cout << "\nCreating ShrubberyCreationForm:" << std::endl;
		AForm *form1 = intern.makeForm("shrubbery creation", "backyard");
		if (form1) {
			bob.signForm(*form1);
			bob.executeForm(*form1);
			delete form1;
		}
		
		std::cout << "\nCreating RobotomyRequestForm:" << std::endl;
		AForm *form2 = intern.makeForm("robotomy request", "target1");
		if (form2) {
			bob.signForm(*form2);
			bob.executeForm(*form2);
			delete form2;
		}
		
		std::cout << "\nCreating PresidentialPardonForm:" << std::endl;
		AForm *form3 = intern.makeForm("presidential pardon", "criminal1");
		if (form3) {
			bob.signForm(*form3);
			bob.executeForm(*form3);
			delete form3;
		}
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try {
		std::cout << "\n--- Test 2: Invalid form name ---" << std::endl;
		Intern intern2;
		
		AForm *invalid_form = intern2.makeForm("invalid form", "target");
		if (invalid_form == NULL) {
			std::cout << "Form creation returned NULL (as expected)" << std::endl;
		}
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try {
		std::cout << "\n--- Test 3: Multiple forms from same intern ---" << std::endl;
		Intern intern3;
		Bureaucrat alice("Alice", 1);
		
		AForm *form_a = intern3.makeForm("shrubbery creation", "garden");
		AForm *form_b = intern3.makeForm("robotomy request", "subject");
		AForm *form_c = intern3.makeForm("presidential pardon", "person");
		
		if (form_a && form_b && form_c) {
			alice.signForm(*form_a);
			alice.signForm(*form_b);
			alice.signForm(*form_c);
			
			alice.executeForm(*form_a);
			alice.executeForm(*form_b);
			alice.executeForm(*form_c);
			
			delete form_a;
			delete form_b;
			delete form_c;
		}
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try {
		std::cout << "\n--- Test 4: Typo in form name ---" << std::endl;
		Intern intern4;
		
		AForm *typo_form = intern4.makeForm("shrubbery creatoin", "park");  // Typo: creatoin
		if (typo_form == NULL) {
			std::cout << "Typo form returned NULL (as expected)" << std::endl;
		}
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try {
		std::cout << "\n--- Test 5: Bureaucrat with grade 1 using intern forms ---" << std::endl;
		Intern intern5;
		Bureaucrat boss("Boss", 1);
		
		AForm *form = intern5.makeForm("robotomy request", "robot_target");
		if (form) {
			boss.signForm(*form);
			boss.executeForm(*form);
			delete form;
		}
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try {
		std::cout << "\n--- Test 6: Grade too low to sign ---" << std::endl;
		Intern intern6;
		Bureaucrat lowRank("LowRank", 150);
		
		AForm *form = intern6.makeForm("presidential pardon", "someone");
		if (form) {
			lowRank.signForm(*form);
			delete form;
		}
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << "\n=== All tests completed ===" << std::endl;
	return 0;
}
