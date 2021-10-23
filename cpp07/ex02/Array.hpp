#ifndef ARRAY_HPP
# define ARRAY_HPP
#include <cstddef>

template <typename T>
class Array
{
private:
    unsigned int      length;
public:
    Array();
    Array(unsigned int n);
    virtual ~Array();
    Array(Array<T> const &other);

    Array<T>&       operator=(Array<T> const &other);
    T&              operator[](unsigned int idx);
    unsigned int    size(void) const;
};

template <typename T>
Array<T>::Array() { }

template <typename T>
Array<T>::Array(unsigned int n) { }

template <typename T>
Array<T>::~Array() { }

template <typename T>
Array<T>::Array(Array<T> const &other) { }

template <typename T>
Array<T>&          Array<T>::operator=(Array<T> const &other)
{
    ;
}

template <typename T>
T&              Array<T>::operator[](unsigned int idx)
{
    ;
}

template <typename T>
unsigned int    Array<T>::size(void) const
{
    ;
}

#endif
