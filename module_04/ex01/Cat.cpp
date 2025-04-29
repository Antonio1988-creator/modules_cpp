#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal() {
    type = "Cat";
    _brain = new Brain();
    std::cout << "Cat constructor called!" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
    _brain = new Brain(*other._brain); // Copia profunda
    std::cout << "Cat copy constructor called!" << std::endl;
}

Cat::~Cat() {
    delete _brain;
    std::cout << "Cat destructor called!" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
    if (this != &other) {
        Animal::operator=(other);
        delete _brain;
        _brain = new Brain(*other._brain); // Copia profunda
    }
    return *this;
}

void Cat::makeSound() const {
    std::cout << "Meow meow!" << std::endl;
}
