#include <vector>
#include <iostream>

int main()
{
    const int hoge[] = {31, 21, 34, 80, 11, 9};
    std::vector<int> vec(hoge, hoge + 6);
    std::vector<int> vec_clone;
    vec_clone = vec;
    for (size_t i = 0; i < vec.size(); ++i) {
        vec_clone[i] = i;
        std::cout <<  "vec[i]: " << vec[i] << std::endl;
        std::cout << "vec_clone[i]: " << vec_clone[i] << std::endl;
    }
    // 結論 ディープコピーされている
}
