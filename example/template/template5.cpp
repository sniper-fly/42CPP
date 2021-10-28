#include "template5.hpp"
#include <iostream>

template < >
inline char* max<char*>(char *a, char *b)
{
    std::cout << "char*" << std::endl;
    return (strcmp(a, b) > 0) ? a : b;
}

template < >
inline const char* max<const char*>(const char *a, const char *b)
{
    std::cout << "const char*" << std::endl;
    return (strcmp(a, b) > 0) ? a : b;
}

int main()
{
    int a = max(3, 4);
    std::cout << a << std::endl;
    char hoge[][3] = {
        "aa",
        "bb"
    };
    std::cout << max(hoge[0], hoge[1]) << std::endl;
    std::cout << max<const char*>("aa", hoge[1]) << std::endl;
}

/*
テンプレートオーバーロードはヘッダに書く必要は無い
""で囲まれたリテラルはconst char*扱い
*/
