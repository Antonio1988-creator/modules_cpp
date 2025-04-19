#include "FragTrap.hpp"
#include <iostream>

// Constructor: Inicializa ClapTrap primero, luego ajusta atributos de FragTrap
FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap " << _name << " constructor called!" << std::endl;
}

// Destructor
FragTrap::~FragTrap() {
    std::cout << "FragTrap " << _name << " destructor called!" << std::endl;
}

// Sobrescribe attack() con mensaje específico
void FragTrap::attack(const std::string& target) {
    if (_energyPoints == 0 || _hitPoints == 0) {
        std::cout << "FragTrap " << _name << " can't attack!" << std::endl;
        return;
    }
    _energyPoints--;
    std::cout << "FragTrap " << _name << " attacks " << target 
              << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

// Método exclusivo de FragTrap
void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << _name << " requests a positive high-five! ✋" << std::endl;
}
