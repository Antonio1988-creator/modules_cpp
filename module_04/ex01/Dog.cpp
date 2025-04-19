#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal() {
    type = "Dog";
    _brain = new Brain();
    std::cout << "Dog constructor called!" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
    _brain = new Brain(*other._brain); // Copia profunda
    std::cout << "Dog copy constructor called!" << std::endl;
}

Dog::~Dog() {
    delete _brain;
    std::cout << "Dog destructor called!" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
    if (this != &other) {
        Animal::operator=(other);
        delete _brain;
        _brain = new Brain(*other._brain); // Copia profunda
    }
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Woof woof!" << std::endl;
}
