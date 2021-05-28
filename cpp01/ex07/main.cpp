#include "Replace.hpp"
#include <string>
#include <iostream>

int		main(int argc, char **argv)
{
	enum : const int {
		FILE_NAME = 1,
		REPLACED,
		DEST
	};

	if (argc != 4) {
		std::cout << "Error: Invalid number of argument" << std::endl;
		return (1);
	}
	if (argv[REPLACED][0] == '\0') {
		std::cout << "Error: Empty value to search" << std::endl;
		return (1);
	}
	Replace::ft_sed(argv[FILE_NAME], argv[REPLACED], argv[DEST]);
	return (0);
}
