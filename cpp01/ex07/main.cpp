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
		std::cout << "Error: Invalid number of argument";
		return (1);
	}
	Replace::ft_sed(argv[FILE_NAME], argv[REPLACED], argv[DEST]);
	return (0);
}
