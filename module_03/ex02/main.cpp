/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguil-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 18:47:34 by anguil-l          #+#    #+#             */
/*   Updated: 2025/04/16 18:47:39 by anguil-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    std::cout << "\n===== Test ClapTrap =====" << std::endl;
    ClapTrap clap1("CLAPPY");
    clap1.attack("Enemy A");
    clap1.takeDamage(5);
    clap1.beRepaired(3);
    clap1.takeDamage(10);
    clap1.attack("Enemy B");

    std::cout << "\n===== Test ScavTrap =====" << std::endl;
    ScavTrap scav1("SCAVVY");
    scav1.attack("Intruder");
    scav1.guardGate();
    scav1.takeDamage(30);
    scav1.beRepaired(20);

    std::cout << "\n===== Test FragTrap =====" << std::endl;
    FragTrap frag1("FRAGGY");
    frag1.attack("Target");
    frag1.highFivesGuys();
    frag1.takeDamage(90);
    frag1.beRepaired(5);
    frag1.attack("Another Target");

    std::cout << "\n===== Test Canonic Form (Copy and Assignment) =====" << std::endl;
    FragTrap frag2 = frag1; // Copy constructor
    FragTrap frag3;
    frag3 = frag1;          // Assignment operator

    std::cout << "\n===== Test Destructors =====" << std::endl;
    // All objects will be destroyed at the end of main
    return 0;
}

