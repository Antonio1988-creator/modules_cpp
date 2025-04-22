# 🧱 README.md – C++ Modules (C++98)

## 🇪🇸 Introducción

Bienvenido a tu recorrido por la programación orientada a objetos en C++ bajo el estándar C++98. Este repositorio contiene ejercicios prácticos organizados en módulos diseñados para introducirte de manera progresiva a conceptos fundamentales del lenguaje como clases, objetos, constructores, destructores, referencias, punteros, entre otros.

C++ es un lenguaje poderoso y versátil, derivado de C, que permite construir software de alto rendimiento. A lo largo de estos módulos, no solo aprenderás a dominar sus aspectos básicos, sino que también adquirirás buenas prácticas de diseño orientado a objetos.

## 🛠️ Reglas generales

- **Compilación**: `c++ -Wall -Wextra -Werror -std=c++98`
- **Prohibido**: C++11 o superior, Boost, `printf`, `malloc`, `free`
- **Permitido**: STL solo a partir del módulo 08
- **Formato y nombres**:
  - Clases: `UpperCamelCase`
  - Funciones: `snake_case` o `lowerCamelCase`
- **Uso obligatorio de Makefile**
- **No se permite** `using namespace`

---

## 🇬🇧 Introduction

Welcome to your journey into object-oriented programming using C++98. This repository includes a series of hands-on modules that introduce core C++ concepts progressively: classes, objects, constructors, destructors, references, pointers, and more.

C++ is a powerful and flexible language derived from C, ideal for developing high-performance applications. Through these exercises, you will not only gain a foundational understanding of the language but also adopt strong object-oriented design practices.

## 🛠️ General Rules

- **Compile with**: `c++ -Wall -Wextra -Werror -std=c++98`
- **Forbidden**: C++11 and later, Boost, `printf`, `malloc`, `free`
- **STL usage**: only allowed from Module 08 onwards
- **Naming**:
  - Classes: `UpperCamelCase`
  - Functions: `snake_case` or `lowerCamelCase`
- **Must use Makefile**
- **Do not use** `using namespace`

---

# 📦 Módulo 00 / Module 00

## 🇪🇸 Descripción

Este módulo se centra en los fundamentos de C++: espacios de nombres, clases, métodos, streams, listas de inicialización, variables `static` y `const`, etc. Es el punto de partida para comprender cómo se estructura un programa en C++ orientado a objetos.

### Ejercicios

- 🔊 **ex00 - Megaphone**  
  Crea un programa que tome argumentos y los convierta en mayúsculas. Si no se recibe ningún argumento, debe imprimir:  
  `* LOUD AND UNBEARABLE FEEDBACK NOISE *`

- ☎️ **ex01 - My Awesome PhoneBook**  
  Simula una agenda telefónica de 8 contactos. Soporta los comandos `ADD`, `SEARCH` y `EXIT`. Aplica truncamiento de texto y formato de columnas para mostrar los datos correctamente.

- 🏦 **ex02 - The Job Of Your Dreams**  
  Restaura el archivo perdido `Account.cpp` utilizando el archivo de cabecera y un archivo de log.

## 🇬🇧 Description

This module covers the basics of C++: namespaces, classes, methods, streams, initialization lists, `static` and `const` variables, etc.

### Exercises

- 🔊 **ex00 - Megaphone**  
  Converts all arguments to uppercase. If none are passed:  
  `* LOUD AND UNBEARABLE FEEDBACK NOISE *`

- ☎️ **ex01 - My Awesome PhoneBook**  
  Simulates a phonebook with up to 8 contacts. Supports `ADD`, `SEARCH`, and `EXIT`.

- 🏦 **ex02 - The Job Of Your Dreams**  
  Rebuild `Account.cpp` using the header and log file. Practice class implementation and OOP.

---

# 🧟 Módulo 01 / Module 01

## 🇪🇸 Descripción

Este módulo introduce la gestión de memoria en C++, punteros, referencias y el uso del `switch`. Aprende a manejar objetos dinámicamente, referencias y punteros a miembros.

### Ejercicios

- 🧠 **ex00 - BraiiiiiiinnnzzzZ**  
  Clase `Zombie` con método `announce()` y funciones auxiliares para crear en heap y stack.

- 🧟 **ex01 - Moar brainz!**  
  Horda de zombies con una única asignación dinámica.

- 🧠 **ex02 - HI THIS IS BRAIN**  
  Uso de punteros y referencias. Imprime direcciones y valores.

- ⚔️ **ex03 - Unnecessary violence**  
  Clases `Weapon`, `HumanA`, y `HumanB` para comparar referencias vs punteros.

- 📝 **ex04 - Sed is for losers**  
  Reemplaza ocurrencias de una cadena en un archivo (sin `std::string::replace`).

- 🤬 **ex05 - Harl 2.0**  
  Clase `Harl` con niveles de mensaje. Usa punteros a métodos.

- 🔇 **ex06 - Harl filter**  
  Filtra mensajes según nivel usando `switch`.

## 🇬🇧 Description

This module introduces memory management, pointers, references, and `switch` usage.

### Exercises

- 🧠 **ex00 - BraiiiiiiinnnzzzZ**  
  `Zombie` class with `announce()` and heap/stack creation functions.

- 🧟 **ex01 - Moar brainz!**  
  Zombie horde via dynamic allocation.

- 🧠 **ex02 - HI THIS IS BRAIN**  
  Show pointer and reference use. Print addresses and values.

- ⚔️ **ex03 - Unnecessary violence**  
  Classes to explore reference vs pointer behavior.

- 📝 **ex04 - Sed is for losers**  
  Replace strings in a file without using `std::string::replace`.

- 🤬 **ex05 - Harl 2.0**  
  Message levels with pointer to member functions.

- 🔇 **ex06 - Harl filter**  
  Filter messages by severity using `switch`.

---

# 📦 Módulo 02 / Module 02

## 🇪🇸 Descripción

Este módulo introduce el formato canónico ortodoxo y el tipo punto fijo, junto con sobrecarga de operadores.

### Ejercicios

- 📏 **ex00 - Fixed Point Basics**  
  Clase `Fixed` con conversión entre `int`, `float` y valor interno.

- 🧮 **ex01 - More Fixed**  
  Operadores de comparación y aritméticos. Pre y post increment/decrement.

- 🧠 **ex02 - Fixed Factory**  
  Métodos `min()` y `max()` estáticos. Comparación completa de `Fixed`.

## 🇬🇧 Description

Introduces Orthodox Canonical Form and fixed-point type with operator overloading.

### Exercises

- 📏 **ex00 - Fixed Point Basics**  
  Class with constructors, destructor and type conversion.

- 🧮 **ex01 - More Fixed**  
  Comparison and arithmetic operators. Pre/post increment/decrement.

- 🧠 **ex02 - Fixed Factory**  
  Static `min()`/`max()` methods (const and non-const versions).

---

# 🦾 Módulo 03 / Module 03

## 🇪🇸 Descripción

Enfocado en la **herencia**. Se parte de `ClapTrap` y se derivan `ScavTrap` y `FragTrap`.

### Ejercicios

- 🤖 **ex00 - ClapTrap Basics**  
  Clase base `ClapTrap`. Ataque, daño y reparación.

- 🛡️ **ex01 - ScavTrap: El Guardián**  
  Hereda de `ClapTrap`, añade `guardGate()`.

- 🎉 **ex02 - FragTrap: Fiesta de Poder**  
  Hereda de `ClapTrap`, añade `highFivesGuys()`.

## 🇬🇧 Description

Focuses on **inheritance**. Starting with base class `ClapTrap`, deriving `ScavTrap` and `FragTrap`.

### Exercises

- 🤖 **ex00 - ClapTrap Basics**  
  Robot with HP, energy, and attack. Includes damage and repair methods.

- 🛡️ **ex01 - ScavTrap: The Gatekeeper**  
  Inherits from `ClapTrap`. Adds `guardGate()`.

- 🎉 **ex02 - FragTrap: High Five Power**  
  Inherits from `ClapTrap`. Adds `highFivesGuys()`.

---

# 🐶 Módulo 04 / Module 04

## 🇪🇸 Descripción

Este módulo trata **polimorfismo**, clases abstractas y composición.

### Ejercicios

- 🐾 **ex00 - Animal Kingdom**  
  Clases `Animal`, `Dog`, `Cat` con método `makeSound()`. Polimorfismo con array de punteros.

- 🧠 **ex01 - Deep Copy Brain**  
  Clase `Brain`, usada por `Dog` y `Cat`. Implementa copia profunda.

- ⛔ **ex02 - Abstract Animals**  
  Convierte `Animal` en clase abstracta. Métodos virtuales puros.

## 🇬🇧 Description

Focuses on **polymorphism**, abstract classes, and composition.

### Exercises

- 🐾 **ex00 - Animal Kingdom**  
  Classes using inheritance. Virtual `makeSound()`. Polymorphic array.

- 🧠 **ex01 - Deep Copy Brain**  
  `Brain` class with deep copy for `Dog` and `Cat`.

- ⛔ **ex02 - Abstract Animals**  
  Make `Animal` abstract with pure virtual methods. No direct instantiation.

