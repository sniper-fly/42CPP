#include <cstdlib>
#include <string>
#include <iostream>
#include <float.h>

int main()
{
    char fmin[] = "-3.402823e+38";
    char fmax[] = "3.402823e+38";
    char fmin_over[] = "-3.402825e+38";
    char fmax_over[] = "3.402824e+38";
    char dmin[] = "-1.797693e+308";
    char dmax[] = "1.797693e+308";
    char dmin_over[] = "-1.797694e+308";
    char dmax_over[] = "1.797694e+308";
    char imax[] = "2147483647";
    char imin[] = "-2147483648";
    char imax_over[] = "2147483648";
    char imin_over[] = "-2147483649";

    std::cout << strtof(fmin, NULL) << std::endl;
    std::cout << strtof(fmax, NULL) << std::endl;
    std::cout << strtof(fmin_over, NULL) << std::endl;
    std::cout << strtof(fmax_over, NULL) << std::endl;

    std::cout << strtod(dmin, NULL) << std::endl;
    std::cout << strtod(dmax, NULL) << std::endl;
    std::cout << strtod(dmin_over, NULL) << std::endl;
    std::cout << strtod(dmax_over, NULL) << std::endl;
    std::cout << "=====================" << std::endl;
    std::cout << strtod(imax_over, NULL) << std::endl;
    std::cout << strtod(imin_over, NULL) << std::endl;
    std::cout << "=====================" << std::endl;

    std::cout << strtol(imin, NULL, 10) << std::endl;
    std::cout << strtol(imax, NULL, 10) << std::endl;
    std::cout << strtol(imin_over, NULL, 10) << std::endl;
    std::cout << strtol(imax_over, NULL, 10) << std::endl;

    const int len = 14;
    char special_char[len][30] = {
        "in",
        "a",
        "f",
        "42.0f",
        "nan",
        "nanf",
        "nanf",
        "-nan",
        "-nanf",
        "inf",
        "+inf",
        "-inf",
        "+inff",
        "-inff"
    };
    std::cout << "------------------------------" << std::endl;
    for (int i = 0; i < len; ++i) {
        std::cout << "----[" << special_char[i] << "]----" << std::endl;
        float f = static_cast<float>(strtof(special_char[i], NULL));
        std::cout << "float:" << f << std::endl;
        double d = static_cast<double>(strtod(special_char[i], NULL));
        std::cout << "doubl:" << d << std::endl;
        int in = static_cast<int>(strtol(special_char[i], NULL, 10));
        std::cout << "long :" << in << std::endl;
    }
}
