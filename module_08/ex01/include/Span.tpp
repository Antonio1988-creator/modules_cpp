/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 00:46:36 by anguil-l          #+#    #+#             */
/*   Updated: 2025/09/24 00:46:59 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SPAN_TPP_
#define _SPAN_TPP_

#include <iterator>
#include <limits>

template<typename Iterator>
void	Span::addRange(Iterator begin, Iterator end) {
	typename std::iterator_traits<Iterator>::difference_type dist = std::distance(begin, end);
	if (dist <= 0)
		return;

	unsigned int udist;
	try {
		if (static_cast<unsigned long long>(dist) > static_cast<unsigned long long>(std::numeric_limits<unsigned int>::max()))
			throw std::out_of_range("Range too large");
		udist = static_cast<unsigned int>(dist);
		if (this->_size + udist > this->_maxSize)
			throw std::out_of_range("Exceeds Span capacity");
	}
	catch (const std::out_of_range &) {
		throw Span::MaxNumbersException();
	}

	try {
		this->_array.reserve(this->_array.size() + udist);
		this->_array.insert(this->_array.end(), begin, end);
		this->_size += udist;
	}
	catch (const std::bad_alloc &) {
		throw Span::MaxNumbersException();
	}
}

#endif
