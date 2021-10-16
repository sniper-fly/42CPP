#ifndef CONVERTER_HPP
#define CONVERTER_HPP
#include <cfloat>
#include <cstdlib>
#include <climits>
#include <iostream>
#include <cstring>
#include <cmath>

class Converter
{
private:
    char    ch;
    int     int_num;
    float   float_num;
    double  double_num;

    int     ch_status;
    int     int_status;

    bool    is_special_number;
    bool    is_integer_number;
    bool    should_display_as_floating_point_expr;

    const char*   str_number;
    Converter();

    void    setChar();
    void    setInt();
    void    setFloat();
    void    setDouble();

    void    putChar() const;
    void    putInt() const;
    void    putFloat() const;
    void    putDouble() const;

    bool    isSpecialNumber(const char* str_number) const;
    bool    isNormalNumber(const char* str_number) const;
    bool    isIntegerNumber() const;
    bool    shouldDisplayAsFloatingPointExpr() const;
public:
    enum : int {
        OVERFLOW_ERR            = -1,
        NON_DISPLAYABLE_ERR     = -2,
        INCOMPATIBLE_NUM_ERR    = -3
    };
    Converter(const char* str_number);
    virtual ~Converter();
    Converter(Converter const &other);
    Converter &operator=(Converter const &other);

    char    getChar() const;
    int     getInt() const;
    float   getFloat() const;
    double  getDouble() const;
    //TODO: getterいらなそうだから消す

    void    print() const;
};

#endif
