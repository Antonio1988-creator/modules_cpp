#include "Animal.hpp"

int	main() {
	Animal* A = new Animal();
	Animal* B = new Animal("Dog");
	Animal* C = A;

	A.getType();
	B.getType();
	C.getType();

	A.setType("Cat");
	A.getType();
	
	delete A;
	delete B;
	delete C;

	return (0);
}
