#include <cstdlib>
#include <string>
#include <iostream>
#include <float.h>
#include "Converter.hpp"

int main(int argc, char **argv)
{
    if (argc != 2) {
        std::cerr << "Invalid number of arguments." << std::endl;
        return 1;
    }
    const char* str_number = argv[1];
    Converter   converted_num(str_number);
    converted_num.print();
    return 0;
}
