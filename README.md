🧱 README.md – C++ Modules (C++98)
🇪🇸 Introducción
Bienvenido a tu recorrido por la programación orientada a objetos en C++ bajo el estándar C++98. Este repositorio contiene ejercicios prácticos organizados en módulos diseñados para introducirte de manera progresiva a conceptos fundamentales del lenguaje como clases, objetos, constructores, destructores, referencias, punteros, entre otros.
C++ es un lenguaje poderoso y versátil, derivado de C, que permite construir software de alto rendimiento. A lo largo de estos módulos, no solo aprenderás a dominar sus aspectos básicos, sino que también adquirirás buenas prácticas de diseño orientado a objetos.
🛠️ Reglas generales
Compilación: c++ -Wall -Wextra -Werror -std=c++98
Prohibido: C++11 o superior, Boost, printf, malloc, free.
Permitido: Todo lo incluido en la STL solo a partir del módulo 08.
Normas de formato y nombres: UpperCamelCase para clases, snake_case o lowerCamelCase para funciones.
Se debe usar Makefile en todos los ejercicios.
No se permite using namespace.
🇬🇧 Introduction
Welcome to your journey into object-oriented programming using C++98. This repository includes a series of hands-on modules that introduce core C++ concepts progressively: classes, objects, constructors, destructors, references, pointers, and more.
C++ is a powerful and flexible language derived from C, ideal for developing high-performance applications. Through these exercises, you will not only gain a foundational understanding of the language but also adopt strong object-oriented design practices.
🛠️ General Rules
Compile with: c++ -Wall -Wextra -Werror -std=c++98
Forbidden: C++11 and later, Boost, printf, malloc, free.
STL usage is only allowed from Module 08 onwards.
Naming: UpperCamelCase for classes; methods and functions use snake_case or lowerCamelCase.
All exercises must use a Makefile.
using namespace is not allowed.
📦 Módulo 00 / Module 00
🇪🇸 Descripción
Este módulo se centra en los fundamentos de C++: espacios de nombres, clases, métodos, streams, listas de inicialización, variables static y const, etc. Es el punto de partida para comprender cómo se estructura un programa en C++ orientado a objetos.
Ejercicios
🔊 ex00 - Megaphone
Crea un programa que tome argumentos y los convierta en mayúsculas. Si no se recibe ningún argumento, debe imprimir * LOUD AND UNBEARABLE FEEDBACK NOISE *.
☎️ ex01 - My Awesome PhoneBook
Simula una agenda telefónica de 8 contactos. Soporta los comandos ADD, SEARCH y EXIT. Aplica truncamiento de texto y formato de columnas para mostrar los datos correctamente.
🏦 ex02 - The Job Of Your Dreams
Restaura el archivo perdido Account.cpp utilizando el archivo de cabecera y un archivo de log. Este ejercicio pone a prueba tu comprensión de la implementación de clases y la orientación a objetos.
🇬🇧 Description
This module covers the basics of C++: namespaces, classes, methods, streams, initialization lists, static and const variables, etc. It is the starting point for learning how object-oriented programming works in C++.
Exercises
🔊 ex00 - Megaphone
Create a program that converts all arguments to uppercase. If no arguments are passed, it should output: * LOUD AND UNBEARABLE FEEDBACK NOISE *.
☎️ ex01 - My Awesome PhoneBook
Simulate a simple phonebook storing up to 8 contacts. Supports ADD, SEARCH, and EXIT commands. Implements text truncation and formatting for clean display.
🏦 ex02 - The Job Of Your Dreams
Rebuild the missing Account.cpp file using the provided header and log file. A great exercise to practice class implementation and object-oriented principles.
🧟 Módulo 01 / Module 01
🇪🇸 Descripción
Este módulo introduce la gestión de memoria en C++, punteros, referencias y el uso del switch. Aprende a manejar objetos dinámicamente, referencias y punteros a miembros.
Ejercicios
🧠 ex00 - BraiiiiiiinnnzzzZ
Implementa una clase Zombie con un método announce() y funciones auxiliares para crear zombies en heap y stack. Incluye destrucción con mensajes para depuración.
🧟 ex01 - Moar brainz!
Crea una horda de zombies con una única asignación dinámica. Prueba la inicialización y destrucción adecuada de todos los objetos.
🧠 ex02 - HI THIS IS BRAIN
Demuestra el uso de punteros y referencias a variables. Imprime direcciones de memoria y valores asociados.
⚔️ ex03 - Unnecessary violence
Crea clases Weapon, HumanA, y HumanB para mostrar diferencias entre referencias y punteros. Evalúa qué estrategia conviene en cada caso.
📝 ex04 - Sed is for losers
Escribe un programa que reemplace todas las ocurrencias de una cadena en un archivo, sin usar std::string::replace.
🤬 ex05 - Harl 2.0
Implementa la clase Harl con mensajes clasificados por niveles de gravedad (DEBUG, INFO, etc.). Usa punteros a métodos en lugar de if/else.
🔇 ex06 - Harl filter
Filtra los mensajes de Harl según el nivel de gravedad proporcionado como argumento. Usa switch para decidir qué mensajes imprimir.
🇬🇧 Description
This module introduces memory management in C++, pointers, references, and usage of the switch statement. You'll learn how to dynamically handle objects and use pointers to members.
Exercises
🧠 ex00 - BraiiiiiiinnnzzzZ
Implement a Zombie class with an announce() method and functions to create zombies on the heap and stack. Include destruction messages for debugging.
🧟 ex01 - Moar brainz!
Create a horde of zombies with a single allocation. Test initialization and destruction of all zombies.
🧠 ex02 - HI THIS IS BRAIN
Demonstrate pointer and reference usage. Print memory addresses and associated values.
⚔️ ex03 - Unnecessary violence
Create Weapon, HumanA, and HumanB classes to show the differences between references and pointers. Evaluate when each is appropriate.
📝 ex04 - Sed is for losers
Write a program that replaces all occurrences of a string in a file, without using std::string::replace.
🤬 ex05 - Harl 2.0
Implement the Harl class with complaints grouped by severity levels. Use pointers to member functions instead of if/else.
🔇 ex06 - Harl filter
Filter Harl's messages based on a provided severity level using a switch statement.


📦 Módulo 02 / Module 02
🇪🇸 Descripción
Este módulo introduce el formato canónico ortodoxo, un patrón para asegurar que las clases tengan un comportamiento correcto al copiar, asignar y destruir objetos. Además, se trabaja con un tipo de dato especial: números en punto fijo, y se sobrecargan operadores aritméticos y de comparación.
Ejercicios
📏 ex00 - Fixed Point Basics
Implementa la clase Fixed con constructores, destructor y operadores necesarios para convertir entre int, float y un valor interno en punto fijo.
🧮 ex01 - More Fixed
Agrega operadores de comparación (>, <, >=, <=, ==, !=) y aritméticos (+, -, *, /). También se implementan operadores de incremento y decremento en pre y post.
🧠 ex02 - Fixed Factory
Agrega funciones estáticas min() y max() (sobrecargadas para const y no-const). Se completa el comportamiento de la clase Fixed para comparaciones y cálculos.
🇬🇧 Description
This module introduces the Orthodox Canonical Form, a standard for ensuring correct object copy, assignment, and destruction. It also works with a special numeric type: fixed-point numbers, and implements operator overloading.
Exercises
📏 ex00 - Fixed Point Basics
Implement the Fixed class with constructors, destructor, and operators to convert between int, float, and an internal fixed value.
🧮 ex01 - More Fixed
Add comparison operators (>, <, >=, <=, ==, !=) and arithmetic operators (+, -, *, /). Also includes pre/post increment and decrement.
🧠 ex02 - Fixed Factory
Add static min() and max() methods (overloaded for const and non-const). Completes the behavior of the Fixed class for comparisons and calculations.
🦾 Módulo 03 / Module 03
🇪🇸 Descripción
Este módulo se enfoca en la herencia, un pilar de la programación orientada a objetos. Se comienza con una clase base (ClapTrap) y se crean clases derivadas que amplían sus capacidades (ScavTrap y FragTrap).
Ejercicios
🤖 ex00 - ClapTrap Basics
Implementa la clase base ClapTrap, que representa un robot con puntos de vida, energía y daño. Métodos para atacar, recibir daño y curarse.
🛡️ ex01 - ScavTrap: El Guardián
ScavTrap hereda de ClapTrap y añade el modo guardGate(). Modifica su constructor, destructor y comportamiento sin romper la clase base.
🎉 ex02 - FragTrap: Fiesta de Poder
FragTrap también hereda de ClapTrap y añade el método highFivesGuys(). Se manejan correctamente constructores y destructores virtuales.
🇬🇧 Description
This module focuses on inheritance, a core concept in object-oriented programming. You begin with a base class (ClapTrap) and create derived classes that extend its behavior (ScavTrap and FragTrap).
Exercises
🤖 ex00 - ClapTrap Basics
Implement the base class ClapTrap, representing a robot with hit points, energy, and attack damage. Includes methods to attack, take damage, and repair.
🛡️ ex01 - ScavTrap: The Gatekeeper
ScavTrap inherits from ClapTrap and adds the guardGate() mode. Adjusts constructor/destructor while keeping base class integrity.
🎉 ex02 - FragTrap: High Five Power
FragTrap inherits from ClapTrap and adds the highFivesGuys() method. Demonstrates proper use of virtual destructors and constructors.
🐶 Módulo 04 / Module 04
🇪🇸 Descripción
Este módulo introduce uno de los conceptos más poderosos del paradigma orientado a objetos: el polimorfismo. También se presenta la composición (clase Brain) y las clases abstractas con métodos virtuales puros.
Ejercicios
🐾 ex00 - Animal Kingdom
Clases Animal, Dog y Cat usando herencia. Implementa métodos virtuales como makeSound(). Crea un array de punteros a Animal y prueba polimorfismo.
🧠 ex01 - Deep Copy Brain
Agrega la clase Brain, utilizada por Dog y Cat mediante composición. Asegura que se implementen copias profundas (deep copy), evitando errores de punteros compartidos.
⛔ ex02 - Abstract Animals
Convierte Animal en una clase abstracta con métodos virtuales puros. Prohíbe su instanciación directa. Refuerza el uso correcto del polimorfismo.
🇬🇧 Description
This module introduces one of the most powerful object-oriented principles: polymorphism. It also introduces composition (the Brain class) and abstract classes with pure virtual methods.
Exercises
🐾 ex00 - Animal Kingdom
Classes Animal, Dog, and Cat using inheritance. Implements virtual methods like makeSound(). Creates an array of Animal* to test polymorphism.
🧠 ex01 - Deep Copy Brain
Add a Brain class used by Dog and Cat via composition. Ensure deep copies are implemented to prevent shallow pointer issues.
⛔ ex02 - Abstract Animals
Make Animal an abstract class with pure virtual methods. Prevent direct instantiation and enforce proper use of polymorphism.



