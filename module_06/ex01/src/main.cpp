#include "../include/Serializer.hpp"
#include <iostream>

int main(void) {
	// Create a Data object with some data
	Data		data;
	data.id = 42;
	data.name = "Test Data";
	data.value = 3.14;

	// Get original pointer
	Data*		original_ptr = &data;

	std::cout << "Original pointer: " << original_ptr << std::endl;
	std::cout << "Original data - id: " << original_ptr->id 
		<< ", name: " << original_ptr->name 
		<< ", value: " << original_ptr->value << std::endl;

	// Serialize the pointer
	uintptr_t	serialized = Serializer::serialize(original_ptr);
	std::cout << "\nSerialized value: " << serialized << std::endl;

	// Deserialize back to pointer
	Data*		deserialized_ptr = Serializer::deserialize(serialized);
	std::cout << "Deserialized pointer: " << deserialized_ptr << std::endl;

	// Verify they are equal
	if (original_ptr == deserialized_ptr) {
		std::cout << "\n✓ Pointers are equal!" << std::endl;
		std::cout << "Deserialized data - id: " << deserialized_ptr->id 
			<< ", name: " << deserialized_ptr->name 
			<< ", value: " << deserialized_ptr->value << std::endl;
	} else {
		std::cout << "\n✗ Pointers are NOT equal!" << std::endl;
	}

	return 0;
}
