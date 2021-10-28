#include "span.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>
#include <limits>
#include <exception>

int main()
{
    srand(time(0));
    // normal test
    std::cout << "=================" << std::endl;
    std::cout << "normal test" << std::endl;
    std::cout << "=================" << std::endl;
    {
        Span sp(30);
        for (int i = 0; i < 20; ++i) {
            sp.addNumber(i * 2);
        }
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    std::cout << std::endl;

    // random numbers test
    std::cout << "=================" << std::endl;
    std::cout << "random numbers test" << std::endl;
    std::cout << "=================" << std::endl;
    {
        Span sp = Span(10002);
        std::vector<int> vec;
        for (int i = 0; i < 10000; ++i) {
            vec.push_back(rand() % 100000);
        }
        sp.addNumber(vec.begin(), vec.end());
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;

        // int max - int min
        sp.addNumber(std::numeric_limits<int>::min());
        sp.addNumber(std::numeric_limits<int>::max());
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    std::cout << std::endl;

    std::cout << "=================" << std::endl;
    std::cout << "addNumber test" << std::endl;
    std::cout << "=================" << std::endl;
    {
        Span sp(0);
        try {
            sp.addNumber(1);
            std::cout << "1 added" << std::endl;
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
        Span sp2(1);
        try {
            sp2.addNumber(1);
            std::cout << "1 added" << std::endl;
            sp2.addNumber(2);
            std::cout << "2 added" << std::endl;
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }

        //TODO addNumberのiterator代入のテスト
        Span sp3(6);
        const int arr[] = { 1, 31, 42, 82, 10, 47, 381 };
        try {
            sp3.addNumber(arr, arr + 7);
            sp3.put();
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }
    std::cout << std::endl;

    std::cout << "=================" << std::endl;
    std::cout << "span test with not enough numbers" << std::endl;
    std::cout << "=================" << std::endl;
    {
        //何も値が入っていない状態でのshortest, longestSpan
        Span sp = Span(10000);
        try {
            std::cout << sp.shortestSpan() << std::endl;
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }

        try {
            std::cout << sp.longestSpan() << std::endl;
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }

        //値が１しか入っていない状態でのshortest, longestSpan
        sp.addNumber(1);
        try {
            std::cout << sp.shortestSpan() << std::endl;
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }

        try {
            std::cout << sp.longestSpan() << std::endl;
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }
    std::cout << std::endl;
}
