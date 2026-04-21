#include "../include/Bureaucrat.hpp"
#include "../include/AForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include <iostream>

int main()
{
	std::cout << "=== ex02: Concrete Forms tests ===" << std::endl;

	try {
		std::cout << "\n--- Test 1: ShrubberyCreationForm ---" << std::endl;
		Bureaucrat alice("Alice", 100);
		ShrubberyCreationForm shrubbery("home");
		
		std::cout << "Before signing:" << std::endl;
		std::cout << shrubbery << std::endl;
		
		alice.signForm(shrubbery);
		std::cout << "\nAfter signing:" << std::endl;
		std::cout << shrubbery << std::endl;
		
		alice.executeForm(shrubbery);
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try {
		std::cout << "\n--- Test 2: RobotomyRequestForm (50% success) ---" << std::endl;
		Bureaucrat bob("Bob", 40);
		RobotomyRequestForm robotomy("Subject1");
		
		bob.signForm(robotomy);
		bob.executeForm(robotomy);
		
		std::cout << "\nTrying again..." << std::endl;
		bob.executeForm(robotomy);
		
		std::cout << "\nTrying once more..." << std::endl;
		bob.executeForm(robotomy);
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try {
		std::cout << "\n--- Test 3: PresidentialPardonForm ---" << std::endl;
		Bureaucrat president("President", 3);
		PresidentialPardonForm pardon("Criminal");
		
		std::cout << "Before signing:" << std::endl;
		std::cout << pardon << std::endl;
		
		president.signForm(pardon);
		president.executeForm(pardon);
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try {
		std::cout << "\n--- Test 4: Execute unsigned form ---" << std::endl;
		Bureaucrat charlie("Charlie", 10);
		ShrubberyCreationForm tree("garden");
		
		std::cout << "Trying to execute unsigned form:" << std::endl;
		charlie.executeForm(tree);
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try {
		std::cout << "\n--- Test 5: Grade too low to execute ---" << std::endl;
		Bureaucrat intern("Intern", 150);
		RobotomyRequestForm robot("Target");
		
		intern.signForm(robot);
		std::cout << "Trying to execute with insufficient grade:" << std::endl;
		intern.executeForm(robot);
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try {
		std::cout << "\n--- Test 6: Grade too low to sign ---" << std::endl;
		Bureaucrat lowRank("LowRank", 150);
		PresidentialPardonForm pres("Someone");
		
		std::cout << "Trying to sign with insufficient grade:" << std::endl;
		lowRank.signForm(pres);
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << "\n=== All tests completed ===" << std::endl;
	return 0;
}
