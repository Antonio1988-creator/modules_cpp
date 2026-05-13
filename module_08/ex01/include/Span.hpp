/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 14:46:36 by anguil-l          #+#    #+#             */
/*   Updated: 2025/09/25 14:46:59 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SPAN_HPP_
#define _SPAN_HPP_

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <climits>

class Span {
	public:
		Span();
		Span(unsigned int N);
		Span(Span const &src);
		~Span();

		Span &	operator=(Span const &rSym);

		void	addNumber(int n);
		
		template<typename Iterator>
		void	addRange(Iterator begin, Iterator end);
		// Convenience overload: add numbers from start (inclusive) to end (exclusive)
		// with given step (like Python range). Example: addRange(0, 10, 2) adds 0,2,4,6,8
		void	addRange(int start, int end, int step = 1);

		int		shortestSpan() const;
		int		longestSpan() const;

		class MaxNumbersException : public std::exception {
			public:
				virtual const char *	what() const throw();
		};
		class NoNumberException : public std::exception {
			public:
				virtual const char *	what() const throw();
		};
		class OneNumberException : public std::exception {
			public:
				virtual const char *	what() const throw();
		};
	private:
		std::vector<int>	_array;
		unsigned int		_maxSize;
		unsigned int		_size;
};

#include "Span.tpp"

#endif