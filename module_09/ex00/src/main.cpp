/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 14:30:15 by anguil-l         #+#    #+#             */
/*   Updated: 2025/09/26 17:35:42 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Error: could not open file." << std::endl;
		return 1;
	}

	try
	{
		BitcoinExchange exchange("data.csv");
		exchange.processInput(av[1]);
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
		return 1;
	}

	return 0;
}
