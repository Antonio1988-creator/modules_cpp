/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 13:47:13 by anguil-l         #+#    #+#             */
/*   Updated: 2025/09/25 14:40:12 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _EASYFIND_TPP_
#define _EASYFIND_TPP_

#include "easyfind.hpp"

const char *	NoValueException::what() const throw() {
	return "No occurrence found in the container.";
}

template<typename T>
typename T::iterator	easyfind(T & container, int val) {
	typename T::iterator it = std::find(container.begin(), container.end(), val);
	
	if (it == container.end())
		throw NoValueException();
	return it;
}

#endif