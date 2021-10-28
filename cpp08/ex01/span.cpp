#include "span.hpp"
#include <limits>
#include <algorithm>
#include <stdexcept>
#include <iostream>

Span::Span() { }

Span::Span(unsigned int N)
{
    max_length = N;
}

Span::~Span() { }

Span::Span(Span const &other)
{
    *this = other;
}

Span &Span::operator=(Span const &other)
{
    if (this != &other)
    {
        max_length = other.max_length;
        numbers = other.numbers; //要素のディープコピーされる
    }
    return *this;
}

void            Span::addNumber(int num)
{
    //エラー処理
    if (max_length <= numbers.size()) {
        throw std::out_of_range("Not enough length");
    }
    numbers.push_back(num);
}

unsigned int    Span::shortestSpan()
{
    //エラー処理
    if (numbers.size() < 2) {
        throw std::runtime_error("Not enough numbers");
    }

    //ソートする
    std::vector<int> sorted_num(numbers);
    std::sort(sorted_num.begin(), sorted_num.end());

    //差分の最小値を常に取る
    unsigned int min_diff = std::numeric_limits<unsigned int>::max();
    for (unsigned int i = 0; i < sorted_num.size() - 1; ++i) {
        unsigned int diff = numbers.at(i + 1) - numbers.at(i);
        min_diff = std::min(min_diff, diff);
    }
    return min_diff;
}

unsigned int    Span::longestSpan()
{
    //エラー処理
    if (numbers.size() < 2) {
        throw std::runtime_error("Not enough numbers");
    }

    int min = std::numeric_limits<int>::max();
    int max = std::numeric_limits<int>::min();

    std::vector<int>::iterator it = numbers.begin();
    for (; it != numbers.end(); ++it) {
        min = std::min(min, *it);
        max = std::max(max, *it);
    }
    //要素数分比較してmin, maxの差をとる
    return max - min;
}

void            Span::put()
{
    for (size_t i = 0; i < numbers.size(); ++i) {
        std::cout << numbers[i] << std::endl;
    }
}
