#include "Array.hpp"
#include <iostream>

int main()
{
    // コンストラクタと引数コンストラクタで範囲内の挙動
    Array<int> arr1;
    std::cout << arr1.size() << std::endl;
    Array<float> arr2(10);
    for (int i = 0; i < 10; ++i) {
        arr2[i] = i;
    }
    std::cout << "===========================" << std::endl;
    for (int i = 0; i < 10; ++i) {
        std::cout << arr2[i] << std::endl;
    }

    // 範囲外で例外を出すか
    // string型で動作するか
    // コピーコンストラクタや=オペレータはディープコピーなのか メモリリークはないか
    
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
