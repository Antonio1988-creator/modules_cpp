#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

#include <iostream>

int	main() {
	ClapTrap	*c1 = new ClapTrap();
	ScavTrap	*s1 = new ScavTrap();
	ScavTrap	*s2 = new ScavTrap("manolo");
	
	std::cout << std::endl;

	c1->attack(s1->_name);
	s1->attack(c1->_name);
	s2->attack("payo malo");

	std::cout << std::endl;

	c1->takeDamage(80);
	s1->takeDamage(50);
	s2->takeDamage(50);

	std::cout << std::endl;

	c1->beRepaired(1000);
	s2->beRepaired(1);
	s1->beRepaired(5);

	std::cout << std::endl;

	s2->guardGate();
	s1->guardGate();

	std::cout << std::endl;

	delete s1;
	delete s2;
	delete c1;

}
