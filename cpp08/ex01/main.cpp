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
    Span sp = Span(10002);
    std::vector<int> vec;
    for (int i = 0; i < 10000; ++i) {
        vec.push_back(rand() % 100000);
    }
    
    sp.addNumber(vec.begin(), vec.end());
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    sp.addNumber(std::numeric_limits<int>::min());
    sp.addNumber(std::numeric_limits<int>::max());
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    // try {
    //     sp.addNumber(1);
    // } catch (std::exception &e) {
    //     std::cout << e.what() << std::endl;
    // }

    // //何も値が入っていない状態でのshortest, longestSpan
    // Span sp2 = Span(10000);
    // try {
    //     std::cout << sp.shortestSpan() << std::endl;
    // } catch (std::exception &e) {
    //     std::cout << e.what() << std::endl;
    // }

    // try {
    //     std::cout << sp.longestSpan() << std::endl;
    // } catch (std::exception &e) {
    //     std::cout << e.what() << std::endl;
    // }

    // //値が１しか入っていない状態でのshortest, longestSpan
    // sp2.addNumber(1);
    // try {
    //     std::cout << sp.shortestSpan() << std::endl;
    // } catch (std::exception &e) {
    //     std::cout << e.what() << std::endl;
    // }

    // try {
    //     std::cout << sp.longestSpan() << std::endl;
    // } catch (std::exception &e) {
    //     std::cout << e.what() << std::endl;
    // }

}
