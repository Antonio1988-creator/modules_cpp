#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>

class WrongAnimal {
protected:
    std::string type;

public:
    WrongAnimal();
    ~WrongAnimal();
    void makeSound() const; // NO es virtual
    std::string getType() const;
};

#endif
