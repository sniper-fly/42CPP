#ifndef CONVERTER_HPP
#define CONVERTER_HPP
#include <cfloat>
#include <cstdlib>

class Converter
{
private:
    char    ch;
    int     int_num;
    float   float_num;
    double  double_num;
    Converter();

    void    setChar(const char* str_num);
    void    setInt(const char* str_num);
    void    setFloat(const char* str_num);
    void    setDouble(const char* str_num);

    void    putChar();
    void    putInt();
    void    putFloat();
    void    putDouble();
public:
    enum : int {
        OVERFLOW_ERR        = -1,
        NON_DISPLAYABLE_ERR = -2,
    };
    Converter(const char* str_number);
    virtual ~Converter();
    Converter(Converter const &other);
    Converter &operator=(Converter const &other);

    char    getChar() const;
    int     getInt() const;
    float   getFloat() const;
    double  getDouble() const;

    void    print() const;
};

#endif
