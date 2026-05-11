/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 18:12:13 by anguil-l          #+#    #+#             */
/*   Updated: 2025/04/26 18:12:24 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

template<typename T>
Array<T>::Array(void) : _array(NULL), _size(0)
{
}

template<typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]()), _size(n)
{
}

template<typename T>
Array<T>::Array(const Array &src) : _array(NULL), _size(0)
{
	*this = src;
}

template<typename T>
Array<T>::~Array(void)
{
	delete[] _array;
}

template<typename T>
Array<T>	&Array<T>::operator=(const Array &rhs)
{
	if (this != &rhs)
	{
		delete[] _array;
		_size = rhs._size;
		_array = new T[_size]();
		unsigned int	i;
		i = 0;
		while (i < _size)
		{
			_array[i] = rhs._array[i];
			i++;
		}
	}
	return (*this);
}

template<typename T>
T	&Array<T>::operator[](unsigned int index)
{
	if (index >= _size)
		throw std::out_of_range("Array index out of bounds");
	return (_array[index]);
}

template<typename T>
const T	&Array<T>::operator[](unsigned int index) const
{
	if (index >= _size)
		throw std::out_of_range("Array index out of bounds");
	return (_array[index]);
}

template<typename T>
unsigned int	Array<T>::size(void) const
{
	return (_size);
}

#endif
