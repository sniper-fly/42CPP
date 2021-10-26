#include "Array.hpp"
#include <iostream>
#include <exception>

int main()
{
    // コンストラクタと引数コンストラクタで範囲内の挙動
    // usual range test
    Array<float> arr2(10);
    for (int i = 0; i < 10; ++i) {
        arr2[i] = i;
        if (arr2[i] != i) {
            std::cerr << "float error" << std::endl;
            return 1;
        }
    }
    std::cout << "===========================" << std::endl;
    for (int i = 0; i < 10; ++i) {
        std::cout << arr2[i] << std::endl;
    }
    std::cout << "===========================" << std::endl;


    // 範囲外で例外を出すか
    // test if output output range error
    try {
        arr2[9] = 10;
        std::cout << 9 << std::endl;
        arr2[10] = 10;
        std::cout << 10 << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    Array<int> arr1;
    std::cout << arr1.size() << std::endl;
    try {
        arr1[0] = 10;
        std::cout << 0 << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }


    // string型で動作するか
    // work properly with string
    std::cout << "===========================" << std::endl;
    const std::string strs[5] = {
        "apple",
        "banana",
        "candy",
        "does",
        "egg"
    };
    Array<std::string> arr_str(5);
    for (unsigned int i = 0; i < arr_str.size(); ++i) {
        arr_str[i] = strs[i];
        if (arr_str[i] != strs[i]) {
            std::cerr << "string array failure" << std::endl;
            return 1;
        }
        std::cout << arr_str[i] << std::endl;
    }


    std::cout << "===========================" << std::endl;
    //memory leak check
    Array<std::string> clone2(2109);
    clone2 = arr_str;


    // コピーコンストラクタや=オペレータはディープコピーなのか
    // deep copy check for copy constructor and = operator
    std::cout << "===========================" << std::endl;
    Array<std::string> clone;
    clone = arr_str;
    for (unsigned int i = 0; i < clone.size(); ++i) {
        clone[i] += "hoge"; // append "hoge" at the end of every elem
        if (clone[i] == arr_str[i]) {
            std::cout << "assignment: deep copy failure" << std::endl;
            return 1;
        }
        std::cout << clone[i] << std::endl;
    }
    std::cout << "===========================" << std::endl;
    Array<std::string> clone3(arr_str);
    for (unsigned int i = 0; i < clone3.size(); ++i) {
        clone3[i] += "hoge";
        if (clone3[i] == arr_str[i]) {
            std::cerr << "copy constructor: deep copy failure" << std::endl;
            return 1;
        }
        std::cout << clone3[i] << std::endl;
        // std::cout << clone[i] << std::endl;
    }


    //constオブジェクトでも機能するか
    // works as intended with const
    std::cout << "===========================" << std::endl;
    const Array<float> constant(arr2);
    for (int i = 0; i < 3; ++i) {
        // constant[i] = 10;
        std::cout << constant[i] << std::endl;
    }
}

/*
デフォルトコンストラクタ 空の配列を作る
unsigned int n の引数コンストラクタｎ個の要素
コピーコンストラクタと＝オペレータ。ディープコピー。
new[]をアロケーションで使う。事前にでかい配列確保はダメ
operator[]で要素にアクセス可能に
もし範囲外にアクセスしたらstd::exceptionを投げる
sizeメソッド。const。
*/
