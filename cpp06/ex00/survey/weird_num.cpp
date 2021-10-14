#include <cstdlib>
#include <string>
#include <iostream>
int main(void)
{
    std::string weird_ch[] = {
        "123..2",
        "+-42",
        "f24f",
        "34.f",
        "341f.",
        "24ff",
        "4242.",
        "42..",
        "42+",
        "42-",
        "..12"
    };
    int TOTAL = 11;
    for (int i = 0; i < TOTAL; ++i) {
        std::cout << "----[" << weird_ch[i] << "]----" << std::endl;
        float f = static_cast<float>(strtof(weird_ch[i].c_str(), NULL));
        std::cout << "float:" << f << std::endl;
        double d = static_cast<double>(strtod(weird_ch[i].c_str(), NULL));
        std::cout << "doubl:" << d << std::endl;
        int in = static_cast<int>(strtol(weird_ch[i].c_str(), NULL, 10));
        std::cout << "long :" << in << std::endl;
    }
}

/*NOTE:
[+-0-9.f]が来たら普通の数字
特殊解釈数字のいずれか
*/
