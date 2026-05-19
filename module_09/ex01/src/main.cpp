/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 15:50:19 by anguil-l         #+#    #+#             */
/*   Updated: 2025/09/26 18:30:25 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RPN.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Error: Usage: ./RPN \"expression\"" << std::endl;
		return 1;
	}

	try
	{
		RPN rpn(av[1]);
	}
	catch (const std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
