/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 14:18:18 by anguil-l          #+#    #+#             */
/*   Updated: 2025/02/26 14:32:30 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#include <iostream>

int	main(void) {
	ClapTrap *c1 = new ClapTrap();
	ClapTrap *c2 = new ClapTrap("Paco");
	ClapTrap *c3 = new ClapTrap(*c1);

	std::cout << std::endl;

	c1->attack("Petra");
	c2->attack("Geno");
	c3->attack("Trini");

	std::cout << std::endl;

	c1->takeDamage(434);
	c2->takeDamage(5);
	c3->takeDamage(5);
	c3->takeDamage(23);
	c2->takeDamage(5);
	
	std::cout << std::endl;

	c1->beRepaired(1000);
	c2->beRepaired(1);
	c3->beRepaired(5);

	std::cout << std::endl;

	delete c1;
	delete c2;
	delete c3;

	return (0);
}
