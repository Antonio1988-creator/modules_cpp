/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 16:22:51 by anguil-l         #+#    #+#             */
/*   Updated: 2025/09/26 19:28:34 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PmergeMe.hpp"

PmergeMe::PmergeMe(std::vector<int> & input) :
	_vector(input),
	_deque(input.begin(), input.end()),
	_size(input.size())
{
	std::cout << "Before: ";
	for (int i = 0; i < _size; i++)
	{
		if (i > 0)
			std::cout << " ";
		std::cout << input[i];
	}
	std::cout << std::endl;

	_sortVector();
	_sortDeque();
}

PmergeMe::PmergeMe(const PmergeMe & src) :
	_vector(src._vector),
	_deque(src._deque),
	_size(src._size)
{
}

PmergeMe::~PmergeMe()
{
}

PmergeMe & PmergeMe::operator=(const PmergeMe & rhs)
{
	if (this != &rhs)
	{
		_vector = rhs._vector;
		_deque = rhs._deque;
		_size = rhs._size;
	}
	return *this;
}

void PmergeMe::_sortVector()
{
	clock_t start = clock();

	_mergeInsertSort(_vector);

	clock_t end = clock();
	double duration = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000000;

	std::cout << "After: ";
	for (int i = 0; i < _size; i++)
	{
		if (i > 0)
			std::cout << " ";
		std::cout << _vector[i];
	}
	std::cout << std::endl;

	std::cout << "Time to process a range of " << _size
		<< " elements with std::vector<int> : " << std::fixed << std::setprecision(4)
		<< duration << " us" << std::endl;
}

void PmergeMe::_sortDeque()
{
	clock_t start = clock();

	_mergeInsertSort(_deque);

	clock_t end = clock();
	double duration = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000000;

	std::cout << "Time to process a range of " << _size
		<< " elements with std::deque<int> : " << std::fixed << std::setprecision(4)
		<< duration << " us" << std::endl;
}
