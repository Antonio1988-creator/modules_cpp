/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 12:17:38 by anguil-l          #+#    #+#             */
/*   Updated: 2025/04/23 14:52:20 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#include <iostream>

ClapTrap::ClapTrap() 
	: _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0){
	std::cout << this->_name << " ClapTrap created!" << std::endl;
}


ClapTrap::ClapTrap(const std::string& name)
	: _name(name)
	, _hitPoints(10)
	, _energyPoints(10)
	, _attackDamage(0) {
	std::cout << this->_name << " ClapTrap created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
	*this = other;

	std::cout << this->_name << " ClapTrap copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << this->_name << " ClapTrap destroyed" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	if (this == &other)
		return *this;

	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;

	std::cout << this->_name << " = " << other._name << std::endl;

	return *this;
}

void ClapTrap::attack(const std::string& target) {
    if (this->_hitPoints == 0) {
        std::cout << this->_name << " ClapTrap can't attack because it is dead." << std::endl;
        return;
    }
    if (this->_energyPoints == 0) {
        std::cout << this->_name << " ClapTrap has no energy left to attack." << std::endl;
        return;
    }
    this->_energyPoints--;
    std::cout
        << this->_name << " ClapTrap attacks " << target
        << ", causing " << this->_attackDamage << " points of damage!"
        << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hitPoints == 0) {
		std::cout << this->_name << " ClapTrap can't take damage because is dead" << std::endl;
		return;
	}

	if (amount > static_cast<unsigned int>(this->_hitPoints)) {
		amount = this->_hitPoints;
	}
	this->_hitPoints -= amount;
	std::cout << this->_name << " ClapTrap has taken" << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->_hitPoints == 0) {
        std::cout << this->_name << " ClapTrap can't be repaired because it is dead." << std::endl;
        return;
    }
    if (this->_energyPoints == 0) {
        std::cout << this->_name << " ClapTrap has no energy left to repair itself." << std::endl;
        return;
    }

    this->_hitPoints += amount;
    this->_energyPoints--;

    std::cout << this->_name << " ClapTrap has repaired " << amount << " hit points!" << std::endl;
}
