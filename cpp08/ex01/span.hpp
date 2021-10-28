#ifndef SPAN_HPP
# define SPAN_HPP
#include <vector>
#include <stdexcept>

class Span
{
private:
    std::vector<int>    numbers;
    unsigned int        max_length;
    Span();

public:
    Span(unsigned int N);
    virtual ~Span();
    Span(Span const &other);
    Span &operator=(Span const &other);

    void            addNumber(int num);
    template <typename InputIterator>
    void            addNumber(InputIterator begin, InputIterator end)
    {
        //エラーチェック
        if (numbers.size() + std::distance(begin, end) > max_length) {
            throw std::out_of_range("Not enough length");
        }
        numbers.insert(numbers.end(), begin, end);
    }

    unsigned int    shortestSpan();
    unsigned int    longestSpan(); //intの最小値と最大値の差も入る？
    void            put();
};

#endif
