#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(){
	this->_name = "default";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << this->_name << " ScavTrap created" << std:endl;
}

ScavTrap::ScavTrap(const std::string name) {
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << this->_name << " ScavTrap created" << std:endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) {
	*this = other;

	std::cout << this->_name << " Scavtrap copy create" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other){
	this->_name = other._name";
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	std::cout << this->_name << " ScavTrap copy created" << std:endl;

	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout << this->_name << " ScavTrap destroyed" << std::endl; 
}

void	ScavTrap::attack(const std::string& target) {
	if (this->_hitPoints == 0) {
		std::cout << this->_name << " ScavTrap can't attack because is dead" << std::endl;
		return ;
	}
	
	std::cout
		<< this->_name << " ScavTrap attack " << target
		<< ", causing " << this->_attackDamage << " damage"
		<< std::endl;
}

void	ScavTrap::guardGate() {
	if (this->_hitPoints == 0) {
		std::cout << this->_name << " ScavTrap can´t guardgate because is dead" << std:endl;
	}
	
	std::cout << std::_name << " Scavtrap is now guarding the gate" << std::endl;
}
