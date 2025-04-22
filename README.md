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


