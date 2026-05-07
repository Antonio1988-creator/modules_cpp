/*
** EPITECH PROJECT, 2026
** Module 07 - ex01
** File description:
** Test iter template function
*/

#include "../include/iter.hpp"

template<typename T, typename F>
void	iter(T *array, size_t len, F func)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		func(array[i]);
		i++;
	}
}

void	print_int(int &x)
{
	std::cout << x << std::endl;
}

void	print_const_int(const int &x)
{
	std::cout << x << std::endl;
}

void	print_char(char &c)
{
	std::cout << c << std::endl;
}

void	print_string(std::string &s)
{
	std::cout << s << std::endl;
}

void	increment_int(int &x)
{
	x++;
}

int	main(void)
{
	int				int_array[5] = {1, 2, 3, 4, 5};
	char			char_array[5] = {'a', 'b', 'c', 'd', 'e'};
	std::string		str_array[3] = {"hello", "world", "42"};
	const int		const_int_array[3] = {10, 20, 30};

	std::cout << "--- Testing iter with int array (non-const reference) ---"
		<< std::endl;
	iter(int_array, 5, print_int);
	std::cout << std::endl;

	std::cout << "--- Testing iter with char array (non-const reference) ---"
		<< std::endl;
	iter(char_array, 5, print_char);
	std::cout << std::endl;

	std::cout << "--- Testing iter with string array (non-const reference) ---"
		<< std::endl;
	iter(str_array, 3, print_string);
	std::cout << std::endl;

	std::cout << "--- Testing iter with const int array (const reference) ---"
		<< std::endl;
	iter(const_int_array, 3, print_const_int);
	std::cout << std::endl;

	std::cout << "--- Testing iter with increment function ---"
		<< std::endl;
	iter(int_array, 5, increment_int);
	iter(int_array, 5, print_int);

	return (0);
}
