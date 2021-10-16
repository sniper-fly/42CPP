#include <iostream>
#include <cstdlib>

int main(int argc, char** argv)
{
    if (argc == 2) {
        std::cout << (float)strtof(argv[1], NULL) << std::endl;
    }
}
