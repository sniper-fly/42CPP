#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <stack>
#include <iostream>

template<typename T>
class MutantStack : public std::stack<T>
{
public:
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef
        typename std::stack<T>::container_type::const_iterator const_iterator;
    typedef typename std::stack<T>::container_type::reverse_iterator
        reverse_iterator;
    typedef typename std::stack<T>::container_type::const_reverse_iterator
        const_reverse_iterator;

    MutantStack() : std::stack<T>() {}
    virtual ~MutantStack() {}
    MutantStack(MutantStack const& other) {
        // TODO 何かしら実装
    }
    MutantStack<T>& operator=(MutantStack const& other) {
        this->c = other.c;
        return *this;
    }

    iterator               begin() { return c.begin(); }
    const_iterator         begin() const { return c.begin(); }
    reverse_iterator       rbegin() { return c.rbegin(); }
    const_reverse_iterator rbegin() const { return c.rbegin(); }
    iterator               end() { return c.end(); }
    const_iterator         end() const { return c.end(); }
    reverse_iterator       rend() { return c.rend(); }
    const_reverse_iterator rend() const { return c.rend(); }
};

#endif
