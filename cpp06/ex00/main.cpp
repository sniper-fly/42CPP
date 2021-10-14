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
    try {
        Converter   converted_num(str_number);
        converted_num.print();
    } catch (std::runtime_error &e) {
        std::cerr << e.what() << std::endl;
        return 2;
    }
    return 0;
}
