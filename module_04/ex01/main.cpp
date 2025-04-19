#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    const int SIZE = 4;
    Animal* animals[SIZE];

    // Crear mitad Dog, mitad Cat
    for (int i = 0; i < SIZE; i++) {
        if (i < SIZE / 2) animals[i] = new Dog();
        else animals[i] = new Cat();
    }

    // Liberar memoria
    for (int i = 0; i < SIZE; i++) {
        delete animals[i];
    }

    // Test copia profunda
    Dog dog1;
    Dog dog2 = dog1; // Copia

    return 0;
}
