#include <iostream>
#include "whatever.hpp"

class Awesome {
public:
    Awesome()
    {
        _n = 0;
    }
    Awesome( int n ) : _n( n ) {}
    bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
    bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
    bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
    bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
    bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
    bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }

    int get_n() { return _n; }
    Awesome& operator=(Awesome &other)
    {
        _n = other._n;
        return *this;
    }

private:
    int _n;
};

int main()
{
    Awesome a(3);
    Awesome b(2);
    swap(a, b);
    std::cout << "a = " << a.get_n()  << std::endl;
    std::cout << "b = " << b.get_n()  << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ).get_n() << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ).get_n() << std::endl;
}
