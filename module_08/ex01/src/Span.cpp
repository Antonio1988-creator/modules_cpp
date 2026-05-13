/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 14:50:11 by anguil-l          #+#    #+#             */
/*   Updated: 2025/09/25 14:50:19 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"

Span::Span() : _maxSize(0), _size(0) {}

Span::Span(unsigned int N) : _maxSize(N), _size(0) {}

Span::Span(Span const &src) {
	this->_array = src._array;
	this->_maxSize = src._maxSize;
	this->_size = src._size;
}

Span::~Span() {
}

Span &	Span::operator=(Span const &rSym) {
	if (this != &rSym) {
		this->_array = rSym._array;
		this->_maxSize = rSym._maxSize;
		this->_size = rSym._size;
	}
	return *this;
}

void	Span::addNumber(int n) {
	if (this->_size == this->_maxSize)
		throw Span::MaxNumbersException();
	this->_array.push_back(n);
	this->_size++;
}

int	Span::shortestSpan() {
	if (_array.size() < 2)
		throw Span::NoNumberException();
	
	std::vector<int>	sorted(_array);
	std::sort(sorted.begin(), sorted.end());
	
	int	min_span = INT_MAX;
	for (size_t i = 0; i + 1 < sorted.size(); ++i) {
		int span = sorted[i + 1] - sorted[i];
		if (span < min_span)
			min_span = span;
	}
	return min_span;
}

int	Span::longestSpan() const {
	if (_array.size() < 2)
		throw Span::NoNumberException();
	
	int max_val = *std::max_element(_array.begin(), _array.end());
	int min_val = *std::min_element(_array.begin(), _array.end());
	
	return max_val - min_val;
}

const char *	Span::MaxNumbersException::what() const throw() {
	return "Can't add a new number to the array: max size reached";
}

const char *	Span::NoNumberException::what() const throw() {
	return "Can't find span: array needs at least 2 numbers";
}

const char *	Span::OneNumberException::what() const throw() {
	return "Can't find span: array needs at least 2 numbers";
}

