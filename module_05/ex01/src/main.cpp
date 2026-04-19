#include "../include/Bureaucrat.hpp"
#include "../include/Form.hpp"
#include <iostream>

int main()
{
	std::cout << "=== ex01: Form tests ===" << std::endl;

	try {
		std::cout << "\n--- Test 1: Form creation with valid grades ---" << std::endl;
		Form taxForm("Tax Declaration", 50, 30);
		std::cout << taxForm << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try {
		std::cout << "\n--- Test 2: Form creation with invalid sign grade (too high) ---" << std::endl;
		Form badForm("Bad Form", 0, 50);
		(void)badForm;
	}
	catch (std::exception &e) {
		std::cout << "Expected error: " << e.what() << std::endl;
	}

	try {
		std::cout << "\n--- Test 3: Form creation with invalid execute grade (too low) ---" << std::endl;
		Form badForm2("Bad Form 2", 50, 151);
		(void)badForm2;
	}
	catch (std::exception &e) {
		std::cout << "Expected error: " << e.what() << std::endl;
	}

	try {
		std::cout << "\n--- Test 4: Bureaucrat with sufficient grade signs form ---" << std::endl;
		Bureaucrat alice("Alice", 40);
		Form taxForm("Tax Declaration", 50, 30);
		std::cout << "Before signing:" << std::endl;
		std::cout << taxForm << std::endl;
		alice.signForm(taxForm);
		std::cout << "After signing:" << std::endl;
		std::cout << taxForm << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try {
		std::cout << "\n--- Test 5: Bureaucrat with insufficient grade tries to sign ---" << std::endl;
		Bureaucrat bob("Bob", 100);
		Form licenseFee("License Fee", 50, 30);
		std::cout << "Before signing attempt:" << std::endl;
		std::cout << licenseFee << std::endl;
		bob.signForm(licenseFee);
		std::cout << "After signing attempt:" << std::endl;
		std::cout << licenseFee << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try {
		std::cout << "\n--- Test 6: Edge case - bureaucrat grade 1 signs form requiring grade 1 ---" << std::endl;
		Bureaucrat president("President", 1);
		Form decree("Presidential Decree", 1, 1);
		std::cout << "Before signing:" << std::endl;
		std::cout << decree << std::endl;
		president.signForm(decree);
		std::cout << "After signing:" << std::endl;
		std::cout << decree << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try {
		std::cout << "\n--- Test 7: Copy and assign Form ---" << std::endl;
		Form original("Original", 60, 40);
		Form copy = original;
		std::cout << "Original:" << std::endl;
		std::cout << original << std::endl;
		std::cout << "\nCopy:" << std::endl;
		std::cout << copy << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try {
		std::cout << "\n--- Test 8: Multiple bureaucrats attempting to sign same form ---" << std::endl;
		Form permit("Building Permit", 45, 25);
		Bureaucrat alice("Alice", 40);
		Bureaucrat bob("Bob", 50);
		
		std::cout << "Alice attempts to sign:" << std::endl;
		alice.signForm(permit);
		std::cout << "\nBob attempts to sign already signed form:" << std::endl;
		bob.signForm(permit);
	}
	catch (std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << "\n=== All tests completed ===" << std::endl;
	return 0;
}
