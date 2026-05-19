/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 16:35:07 by anguil-l         #+#    #+#             */
/*   Updated: 2025/09/26 19:45:21 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PmergeMe.hpp"

int main(int ac, char **av)
{
	if (ac < 3)
	{
		std::cerr << "Error: Usage: ./PmergeMe [int sequence]" << std::endl;
		return 1;
	}

	std::vector<int> input;

	for (int i = 1; av[i] != NULL; i++)
	{
		for (int j = 0; av[i][j] != '\0'; j++)
		{
			if (!isdigit(av[i][j]))
			{
				std::cerr << "Error: invalid input" << std::endl;
				return 1;
			}
		}

		int nb = atoi(av[i]);
		if (nb < 0)
		{
			std::cerr << "Error: negative numbers not allowed" << std::endl;
			return 1;
		}

		input.push_back(nb);
	}

	try
	{
		PmergeMe sorter(input);
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
		return 1;
	}

	return 0;
}
