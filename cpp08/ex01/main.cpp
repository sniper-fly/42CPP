#include "span.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>
#include <limits>
#include <exception>

#ifndef my_test
int main()
{
    Span sp = Span(5);
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}
#endif

#ifdef my_test

void print_test_title(const std::string& title)
{
    std::cout << std::endl;
    std::cout << "=================" << std::endl;
    std::cout << title << std::endl;
    std::cout << "=================" << std::endl;
}

void print_shortest_span(Span& sp)
{
    std::cout << "shortest span: ";
    std::cout << sp.shortestSpan() << std::endl;
}

void print_longest_span(Span& sp)
{
    std::cout << "longest span: ";
    std::cout << sp.longestSpan() << std::endl;
}

void print_adding_num(Span& sp, int num)
{
    std::cout << "going to add " << num << ", ";
    sp.addNumber(num);
    std::cout << num << " added" << std::endl;
}

void print_adding_numbers(Span& sp, int* begin, int size)
{
    std::cout << "going to add ";
    for (int i = 0; i < size; ++i) {
        std::cout << begin[i] << ", ";
    }
    std::cout << std::endl;
    sp.addNumber(begin, begin + size);
    std::cout << "all of them added" << std::endl;
}

int main()
{
    srand(time(0));

    print_test_title("normal test");
    {
        Span sp(30);
        for (int i = 0; i < 20; ++i) {
            sp.addNumber(i * 2);
        }
        print_shortest_span(sp);
        print_longest_span(sp);
    }

    print_test_title("random large numbers test");
    {
        Span sp = Span(10002);
        std::vector<int> vec;
        for (int i = 0; i < 10000; ++i) {
            vec.push_back(rand() % 100000);
        }
        sp.addNumber(vec.begin(), vec.end());
        // sp.put();
        print_shortest_span(sp);
        print_longest_span(sp);

        // int max - int min
        sp.addNumber(std::numeric_limits<int>::min());
        sp.addNumber(std::numeric_limits<int>::max());

        print_shortest_span(sp);
        print_longest_span(sp);
    }

    print_test_title("addNumber test");
    {
        Span sp(0);
        try {
            print_adding_num(sp, 1);
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
        Span sp2(1);
        try {
            print_adding_num(sp2, 1);
            print_adding_num(sp2, 2);
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }

        //addNumberのiterator代入のテスト
        Span sp3(6);
        int arr[] = { 1, 31, 42, 82, 10, 47, 381 };
        try {
            print_adding_numbers(sp3, arr, 3);
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
        try {
            print_adding_numbers(sp3, arr, 7);
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }

    print_test_title("span test with not enough numbers");
    {
        //何も値が入っていない状態でのshortest, longestSpan
        Span sp = Span(10000);
        try {
            print_shortest_span(sp);
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }

        try {
            print_longest_span(sp);
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }

        //値が１しか入っていない状態でのshortest, longestSpan
        sp.addNumber(1);
        try {
            print_shortest_span(sp);
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }

        try {
            print_longest_span(sp);
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }
}

#endif
