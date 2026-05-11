/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 18:12:13 by anguil-l          #+#    #+#             */
/*   Updated: 2025/04/26 18:12:24 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <cstddef>
# include <stdexcept>

template<typename T>
class Array
{
	public:
		Array(void);
		Array(unsigned int n);
		Array(const Array &src);
		~Array(void);

		Array	&operator=(const Array &rhs);
		T		&operator[](unsigned int index);
		const T	&operator[](unsigned int index) const;

		unsigned int	size(void) const;

	private:
		T				*_array;
		unsigned int	_size;
};

#include "Array.tpp"

#endif
