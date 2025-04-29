#include "Animal.hpp"
#include <iostream>

Animal::Animal() : type("Animal") {
    std::cout << "Animal constructor called!" << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type) {
    std::cout << "Animal copy constructor called!" << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal destructor called!" << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
    if (this != &other) {
        type = other.type;
    }
    return *this;
}

void Animal::makeSound() const {
    std::cout << "Animal sound!" << std::endl;
}

std::string Animal::getType() const {
    return type;
}
