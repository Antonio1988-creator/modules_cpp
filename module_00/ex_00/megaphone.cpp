#include <iostream>
#include <cctype>

int	main(int argc, char **argv)
{
	int i = 1, j = 0;

	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	while (i < argc){
		while (argv[i][j] != '\0')
		{
			std::cout << (char)std::toupper(argv[i][j]);
			j++;
		}
		j = 0;
		i++;
	}
	std::cout << std::endl;
	return 0;
}
