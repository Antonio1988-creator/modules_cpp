/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 02:02:45 by anguil-l          #+#    #+#             */
/*   Updated: 2025/09/25 02:25:57 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MutantStack.hpp"
#include <list>

// Test 1: Subject example
int test_subject_example() {
	std::cout << "=== Test 1: Subject example ===" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}

// Test 2: Comparison with std::list
int test_comparison_with_list() {
	std::cout << "\n=== Test 2: Comparison with std::list ===" << std::endl;
	
	std::cout << "--- MutantStack output ---" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	
	std::cout << "\n--- std::list output ---" << std::endl;
	std::list<int> mylist;
	mylist.push_back(5);
	mylist.push_back(17);
	mylist.push_back(3);
	mylist.push_back(5);
	mylist.push_back(737);
	mylist.push_back(0);
	
	std::list<int>::iterator lit = mylist.begin();
	std::list<int>::iterator lite = mylist.end();
	while (lit != lite) {
		std::cout << *lit << std::endl;
		++lit;
	}
	
	return 0;
}

// Test 3: Const iterator
int test_const_iterator() {
	std::cout << "\n=== Test 3: Const iterator ===" << std::endl;
	MutantStack<int> mstack;
	mstack.push(1);
	mstack.push(2);
	mstack.push(3);
	
	const MutantStack<int> const_mstack = mstack;
	MutantStack<int>::const_iterator cit = const_mstack.begin();
	MutantStack<int>::const_iterator cite = const_mstack.end();
	
	while (cit != cite) {
		std::cout << *cit << std::endl;
		++cit;
	}
	
	return 0;
}

// Test 4: Reverse iterator
int test_reverse_iterator() {
	std::cout << "\n=== Test 4: Reverse iterator ===" << std::endl;
	MutantStack<int> mstack;
	mstack.push(10);
	mstack.push(20);
	mstack.push(30);
	mstack.push(40);
	
	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();
	
	std::cout << "Reverse iteration: ";
	while (rit != rite) {
		std::cout << *rit << " ";
		++rit;
	}
	std::cout << std::endl;
	
	return 0;
}

// Test 5: Assignment operator
int test_assignment_operator() {
	std::cout << "\n=== Test 5: Assignment operator ===" << std::endl;
	MutantStack<int> mstack1;
	mstack1.push(100);
	mstack1.push(200);
	
	MutantStack<int> mstack2;
	mstack2 = mstack1;
	
	std::cout << "mstack2 after assignment: ";
	MutantStack<int>::iterator it = mstack2.begin();
	MutantStack<int>::iterator ite = mstack2.end();
	while (it != ite) {
		std::cout << *it << " ";
		++it;
	}
	std::cout << std::endl;
	
	return 0;
}

// Test 6: Multiple data types
int test_multiple_types() {
	std::cout << "\n=== Test 6: Multiple data types ===" << std::endl;
	
	// Test with double
	MutantStack<double> dstack;
	dstack.push(1.5);
	dstack.push(2.7);
	dstack.push(3.14);
	
	std::cout << "Double stack: ";
	MutantStack<double>::iterator dit = dstack.begin();
	MutantStack<double>::iterator dite = dstack.end();
	while (dit != dite) {
		std::cout << *dit << " ";
		++dit;
	}
	std::cout << std::endl;
	
	// Test with char
	MutantStack<char> cstack;
	cstack.push('a');
	cstack.push('b');
	cstack.push('c');
	
	std::cout << "Char stack: ";
	MutantStack<char>::iterator cit = cstack.begin();
	MutantStack<char>::iterator cite = cstack.end();
	while (cit != cite) {
		std::cout << *cit << " ";
		++cit;
	}
	std::cout << std::endl;
	
	return 0;
}

// Test 7: Empty stack and edge cases
int test_edge_cases() {
	std::cout << "\n=== Test 7: Edge cases ===" << std::endl;
	
	MutantStack<int> mstack;
	std::cout << "Empty stack size: " << mstack.size() << std::endl;
	
	mstack.push(42);
	std::cout << "After push(42): size = " << mstack.size() << ", top = " << mstack.top() << std::endl;
	
	mstack.pop();
	std::cout << "After pop(): size = " << mstack.size() << std::endl;
	
	// Test with single element
	mstack.push(999);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	std::cout << "Single element: " << *it << std::endl;
	std::cout << "Iterator validation (ite != it): " << (ite != it ? "true" : "false") << std::endl;
	
	return 0;
}

int main() {
	std::cout << "=== MutantStack comprehensive tests ===" << std::endl;
	
	test_subject_example();
	test_comparison_with_list();
	test_const_iterator();
	test_reverse_iterator();
	test_assignment_operator();
	test_multiple_types();
	test_edge_cases();
	
	std::cout << "\n=== All tests completed ===" << std::endl;
	return 0;
}