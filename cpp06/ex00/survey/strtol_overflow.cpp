#include <cstdlib>
#include <iostream>
#include <errno.h>

int main()
{
    char longmax[] = "9223372036854775807";
    long hoge = strtol(longmax, NULL, 10);
    std::cout << hoge << ", errno: " << errno << std::endl;

    char longmin[] = "-9223372036854775808";
    long fuga = strtol(longmin, NULL, 10);
    std::cout << fuga << ", errno: " << errno << std::endl;

    std::cout << "ERANGE: " << ERANGE << std::endl;
}
