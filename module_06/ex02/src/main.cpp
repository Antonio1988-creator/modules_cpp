#include "../include/Base.hpp"
#include "../include/A.hpp"
#include "../include/B.hpp"
#include "../include/C.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

// Generate a random instance of A, B, or C
Base* generate(void) {
	int random_type = rand() % 3;
	
	if (random_type == 0)
		return new A();
	else if (random_type == 1)
		return new B();
	else
		return new C();
}

// Identify the actual type of the object pointed to by p
void identify(Base* p) {
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "C" << std::endl;
}

// Identify the actual type of the object referenced by p (no pointer allowed)
void identify(Base& p) {
	if (dynamic_cast<A*>(&p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(&p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(&p) != NULL)
		std::cout << "C" << std::endl;
}

int main(void) {
	srand(time(NULL));

	std::cout << "Generating and identifying 10 random instances:" << std::endl;
	
	for (int i = 0; i < 10; i++) {
		Base*	ptr = generate();
		
		std::cout << "Instance " << (i + 1) << " (via pointer): ";
		identify(ptr);
		
		std::cout << "Instance " << (i + 1) << " (via reference): ";
		identify(*ptr);
		
		delete ptr;
	}

	return 0;
}
