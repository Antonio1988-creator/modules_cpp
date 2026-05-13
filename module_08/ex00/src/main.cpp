/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 13:47:20 by anguil-l          #+#    #+#             */
/*   Updated: 2025/09/25 14:40:50 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/easyfind.hpp"
#include <vector>
#include <list>

int	main() {
	std::cout << "=== easyfind tests ===" << std::endl;

	// Test 1: List - value found
	try {
		std::cout << "\n--- Test 1: List - value found (6) ---" << std::endl;
		std::list<int>	lst;
		lst.push_back(5);
		lst.push_back(6);
		lst.push_back(32);
		lst.push_back(15);
		
		std::list<int>::iterator it = easyfind(lst, 6);
		std::cout << "Value found: " << *it << std::endl;
	}
	catch(const std::exception& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	// Test 2: List - value not found
	try {
		std::cout << "\n--- Test 2: List - value not found (99) ---" << std::endl;
		std::list<int>	lst;
		lst.push_back(5);
		lst.push_back(6);
		lst.push_back(32);
		lst.push_back(15);
		
		std::list<int>::iterator it = easyfind(lst, 99);
		std::cout << "Value found: " << *it << std::endl;
	}
	catch(const std::exception& e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	// Test 3: Vector - value found
	try {
		std::cout << "\n--- Test 3: Vector - value found (32) ---" << std::endl;
		std::vector<int>	vec;
		vec.push_back(5);
		vec.push_back(6);
		vec.push_back(32);
		vec.push_back(15);
		
		std::vector<int>::iterator it = easyfind(vec, 32);
		std::cout << "Value found: " << *it << std::endl;
	}
	catch(const std::exception& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	// Test 4: Vector - value not found
	try {
		std::cout << "\n--- Test 4: Vector - value not found (100) ---" << std::endl;
		std::vector<int>	vec;
		vec.push_back(5);
		vec.push_back(6);
		vec.push_back(32);
		vec.push_back(15);
		
		std::vector<int>::iterator it = easyfind(vec, 100);
		std::cout << "Value found: " << *it << std::endl;
	}
	catch(const std::exception& e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	// Test 5: Vector - first element
	try {
		std::cout << "\n--- Test 5: Vector - find first element (5) ---" << std::endl;
		std::vector<int>	vec;
		vec.push_back(5);
		vec.push_back(6);
		vec.push_back(32);
		vec.push_back(15);
		
		std::vector<int>::iterator it = easyfind(vec, 5);
		std::cout << "Value found: " << *it << std::endl;
	}
	catch(const std::exception& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	// Test 6: List - last element
	try {
		std::cout << "\n--- Test 6: List - find last element (15) ---" << std::endl;
		std::list<int>	lst;
		lst.push_back(5);
		lst.push_back(6);
		lst.push_back(32);
		lst.push_back(15);
		
		std::list<int>::iterator it = easyfind(lst, 15);
		std::cout << "Value found: " << *it << std::endl;
	}
	catch(const std::exception& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << "\n=== All tests completed ===" << std::endl;
	return 0;
}