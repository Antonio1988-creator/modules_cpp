#include "Animal.hpp"
#include <iostream>

Animal::Animal () : type("Unknown") {
	std::cout << "Animal created!" << std::endl;
}

Animal::Animal (std::string type) {
	this->type = type; 
	std::cout << "Animal created! It's a " << this->type << std::endl;
}

Animal::Animal (const Animal& other) {
	*this = other;
	std::cout << "Animal is copied!" << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
	this->type = other.getType();
	std::cout << "Animal asigned!" << std::endl;
	return (*this);
}

Animal::~Animal() {
	std::cout << "Animal destroyed!" << std::endl;
}

void	Animal::setType (std::string type){
	this->type = type;
	std::cout << "Set type of animal: " << this->type << std::endl;
}

std::string	getType () const {
	std::cout "return the type of animal!" << std::endl;
	return (this->type);
}
