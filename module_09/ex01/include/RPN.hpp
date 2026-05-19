/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 15:40:22 by anguil-l         #+#    #+#             */
/*   Updated: 2025/09/26 18:05:33 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <string>
#include <stack>
#include <cctype>
#include <cstdlib>
#include <stdexcept>
#include <sstream>

typedef std::string str;

class RPN
{
	public:
		RPN();
		RPN(const str & expression);
		RPN(const RPN & src);
		~RPN();

		RPN & operator=(const RPN & rhs);

	private:
		std::stack<int>	_stack;

		bool	_isOperator(char c) const;
		int		_applyOperator(int first, int second, char op) const;
};

#endif
