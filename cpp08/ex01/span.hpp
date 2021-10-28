#ifndef SPAN_HPP
# define SPAN_HPP
#include <vector>

class Span
{
private:
    std::vector<int>    numbers;
    unsigned int        max;
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

        numbers.assign(begin, end);
    }

    unsigned int    shortestSpan();
    unsigned int    longestSpan(); //intの最小値と最大値の差も入る？
};

#endif
