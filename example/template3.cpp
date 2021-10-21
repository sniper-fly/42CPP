#include "template3.hpp"
#include <string>

// プロトタイプ
template <typename TYPE> void Disp(TYPE value);

int main()
{
    std::string a = "hoge";
    Disp(a);
    return 0;
}
