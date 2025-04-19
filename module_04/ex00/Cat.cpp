#include "Cat.hpp"
#include <iostream>

Cat::Cat() {
    type = "Cat";
    std::cout << "Cat constructor called!" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat destructor called!" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Meow meow!" << std::endl;
}
