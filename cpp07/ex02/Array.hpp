#ifndef ARRAY_HPP
# define ARRAY_HPP
#include <cstddef>
#include <exception>

template <typename T>
class Array
{
private:
    T*                array;
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
Array<T>::Array()
{
    length = 0;
    array = new T[0];
}

template <typename T>
Array<T>::Array(unsigned int n)
{
    length = n;
    array = new T[n];
    if (array == NULL) {
        throw std::exception();
    }
}

template <typename T>
Array<T>::~Array()
{
    delete[] array;
    array = NULL;
}

template <typename T>
Array<T>::Array(Array<T> const &other)
{
    *this = other;
}

template <typename T>
Array<T>&          Array<T>::operator=(Array<T> const &other)
{
    delete[] array;
    length = other.length;
    array = new T[length];
    for (int i = 0; i < other.length; ++i) {
        array[i] = (other.array)[i];
    }
}

template <typename T>
T&              Array<T>::operator[](unsigned int idx)
{
    if (idx >= length) {
        throw std::exception();
    }
    return array[idx];
}

template <typename T>
unsigned int    Array<T>::size(void) const
{
    return length;
}

#endif
