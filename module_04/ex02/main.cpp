	/* ************************************************************************** */
	/*                                                                            */
	/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
	/*                                                    +:+ +:+         +:+     */
	/*   By: anguil-l <marvin@42.fr>                    +#+  +:+       +#+        */
	/*                                                +#+#+#+#+#+   +#+           */
	/*   Created: 2025/04/29 18:22:41 by anguil-l          #+#    #+#             */
/*   Updated: 2025/04/29 19:02:00 by anguil-l         ###   ########.fr       */
	/*                                                                            */
	/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    std::cout << "--- Polymorphic behavior ---" << std::endl;

    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << "Dog type: " << dog->getType() << std::endl;
    std::cout << "Cat type: " << cat->getType() << std::endl;

    dog->makeSound(); // Woof woof!
    cat->makeSound(); // Meow meow!

    delete dog;
    delete cat;

    std::cout << "\n--- Array of Animals ---" << std::endl;

    const int size = 4;
    Animal* animals[size];

    for (int i = 0; i < size; ++i) {
        if (i % 2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    for (int i = 0; i < size; ++i) {
        animals[i]->makeSound();
    }

    for (int i = 0; i < size; ++i) {
        delete animals[i];
    }

    std::cout << "\n--- Trying to instantiate Animal directly (should fail) ---" << std::endl;

     // Animal a; // ❌ Esto no compila: Animal es abstracta

    return 0;
}

