/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 13:46:58 by anguil-l         #+#    #+#             */
/*   Updated: 2025/09/25 14:40:54 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _EASYFIND_HPP_
#define _EASYFIND_HPP_

#include <iostream>
#include <algorithm>
#include <stdexcept>

class NoValueException : public std::exception {
	public:
		virtual const char *	what() const throw();
};

template<typename T>
typename T::iterator	easyfind(T & container, int val);

#include "easyfind.tpp"

#endif