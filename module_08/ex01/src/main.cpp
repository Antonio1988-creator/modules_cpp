/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 00:30:12 by anguil-l          #+#    #+#             */
/*   Updated: 2025/09/25 01:11:12 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"
#include <list>

int main() {
	std::cout << "=== Span tests ===" << std::endl;

	// Test 1: Subject example
	std::cout << "\n--- Test 1: Subject example (5 numbers) ---" << std::endl;
	try {
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	// Test 2: Empty array
	std::cout << "\n--- Test 2: Empty array exception ---" << std::endl;
	try {
		Span sp2 = Span(5);
		sp2.shortestSpan();
	}
	catch (const std::exception &e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	// Test 3: One element only
	std::cout << "\n--- Test 3: One element only exception ---" << std::endl;
	try {
		Span sp3 = Span(5);
		sp3.addNumber(42);
		sp3.shortestSpan();
	}
	catch (const std::exception &e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	// Test 4: Max size reached
	std::cout << "\n--- Test 4: Max size reached exception ---" << std::endl;
	try {
		Span sp4 = Span(2);
		sp4.addNumber(1);
		sp4.addNumber(2);
		sp4.addNumber(3);
	}
	catch (const std::exception &e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	// Test 5: 10,000 numbers using addRange with vector
	std::cout << "\n--- Test 5: 10,000 numbers with addRange (vector) ---" << std::endl;
	try {
		Span sp5 = Span(10001);
		std::vector<int> numbers;
		for (int i = 0; i < 10000; ++i)
			numbers.push_back(i);
		sp5.addRange(numbers.begin(), numbers.end());
		sp5.addNumber(10000);
		std::cout << "Shortest span (10k numbers): " << sp5.shortestSpan() << std::endl;
		std::cout << "Longest span (10k numbers): " << sp5.longestSpan() << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	// Test 6: 20,000 numbers using addRange with list
	std::cout << "\n--- Test 6: 20,000 numbers with addRange (list) ---" << std::endl;
	try {
		Span sp6 = Span(20001);
		std::list<int> list_numbers;
		for (int i = 0; i < 20000; ++i)
			list_numbers.push_back(i * 2);
		sp6.addRange(list_numbers.begin(), list_numbers.end());
		sp6.addNumber(40000);
		std::cout << "Shortest span (20k numbers): " << sp6.shortestSpan() << std::endl;
		std::cout << "Longest span (20k numbers): " << sp6.longestSpan() << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	// Test 7: Negative numbers and mixed values
	std::cout << "\n--- Test 7: Negative and mixed values ---" << std::endl;
	try {
		Span sp7 = Span(6);
		sp7.addNumber(-5);
		sp7.addNumber(10);
		sp7.addNumber(-3);
		sp7.addNumber(15);
		sp7.addNumber(0);
		sp7.addNumber(5);
		std::cout << "Shortest span (mixed): " << sp7.shortestSpan() << std::endl;
		std::cout << "Longest span (mixed): " << sp7.longestSpan() << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << "\n=== All tests completed ===" << std::endl;
	return 0;
}
