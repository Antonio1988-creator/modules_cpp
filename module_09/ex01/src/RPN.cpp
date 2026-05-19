/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 15:42:08 by anguil-l         #+#    #+#             */
/*   Updated: 2025/09/26 18:15:47 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RPN.hpp"

RPN::RPN()
{
}

RPN::RPN(const str & expression)
{
	std::istringstream iss(expression);
	str token;
	int digitCount = 0;
	int operatorCount = 0;

	// First pass: validate structure
	while (iss >> token)
	{
		if (token.length() != 1)
			throw std::runtime_error("Error");

		if (isdigit(token[0]))
			digitCount++;
		else if (_isOperator(token[0]))
			operatorCount++;
		else
			throw std::runtime_error("Error");
	}

	// RPN must have exactly one more digit than operators
	if (digitCount != operatorCount + 1 || digitCount == 0)
		throw std::runtime_error("Error");

	// Second pass: evaluate
	iss.clear();
	iss.seekg(0);

	while (iss >> token)
	{
		if (isdigit(token[0]))
		{
			_stack.push(token[0] - '0');
		}
		else if (_isOperator(token[0]))
		{
			if (_stack.size() < 2)
				throw std::runtime_error("Error");

			int second = _stack.top();
			_stack.pop();
			int first = _stack.top();
			_stack.pop();

			int result = _applyOperator(first, second, token[0]);
			_stack.push(result);
		}
	}

	if (_stack.size() != 1)
		throw std::runtime_error("Error");

	std::cout << _stack.top() << std::endl;
}

RPN::RPN(const RPN & src) :
	_stack(src._stack)
{
}

RPN::~RPN()
{
}

RPN & RPN::operator=(const RPN & rhs)
{
	if (this != &rhs)
		_stack = rhs._stack;
	return *this;
}

bool RPN::_isOperator(char c) const
{
	return (c == '+' || c == '-' || c == '*' || c == '/');
}

int RPN::_applyOperator(int first, int second, char op) const
{
	switch (op)
	{
		case '+':
			return first + second;
		case '-':
			return first - second;
		case '*':
			return first * second;
		case '/':
			if (second == 0)
				throw std::runtime_error("Error");
			return first / second;
		default:
			throw std::runtime_error("Error");
	}
}
