#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
    ScavTrap(std::string name);
    ~ScavTrap();

    void attack(const std::string& target); // Sobrescribe el método de ClapTrap
    void guardGate(); // Método exclusivo de ScavTrap
};

#endif
