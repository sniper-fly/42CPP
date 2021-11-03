#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
public:
    using iterator = typename std::stack<T>::container_type::iterator;
    using const_iterator =
        typename std::stack<T>::container_type::const_iterator;
    using reverse_iterator =
        typename std::stack<T>::container_type::reverse_iterator;
    using const_reverse_iterator =
        typename std::stack<T>::container_type::const_reverse_iterator;

    Mutantstack() : std::stack<T>() {}
    virtual ~Mutantstack() {}
    Mutantstack(Mutantstack const& other) {
        // TODO 何かしら実装
    }
    Mutantstack<T>& operator=(Mutantstack const& other) {
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
