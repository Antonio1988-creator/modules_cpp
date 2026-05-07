#include "../include/ScalarConverter.hpp"

int	main(int ac, char **av) {
	if (ac != 2)
	{
		std::cout << "Usage: ./convert [string]" << std::endl;
		return (0);
	}
	
	ScalarConverter::convert(av[1]);

	return 0;
}
