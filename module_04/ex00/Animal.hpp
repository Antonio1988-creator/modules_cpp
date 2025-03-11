#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal& other);
		~Animal();

		std::string	makeSound(const std::string t_animal);
		Animal& operator=(const Animal& other);
		void	setType(std::string type);
		std::string	getType() const;
	protected:	
		std::string type;
};

#endif
