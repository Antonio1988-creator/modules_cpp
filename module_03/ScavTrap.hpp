#ifndef SCAVTRAP_H
# define SCAVTRA_H

#include "ClapTrap.hpp"

#include <string>

class	ScavTrap: public ClapTrap {
	public:
		ScavTrap();
		ScavTrap( std::string name);
		ScavTrap(const ScavTrap& other);
		~ScavTrap();

		ScavTrap&	operator=(const ScavTrap& other);

		void	attack(const std:string& target);
		void	guardGate();
	private:
}

#endif
