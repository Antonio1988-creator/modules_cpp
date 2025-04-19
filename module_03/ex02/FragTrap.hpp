#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
    FragTrap(const std::string& name);
    ~FragTrap();

    void attack(const std::string& target); // Sobrescribe el método de ClapTrap
    void highFivesGuys(); // Método exclusivo de FragTrap
};

#endif
