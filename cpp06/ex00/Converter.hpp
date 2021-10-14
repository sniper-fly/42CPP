#ifndef CONVERTER_HPP
#define CONVERTER_HPP
#include <cfloat>
#include <cstdlib>
#include <climits>
#include <iostream>
#include <cstring>

class Converter
{
private:
    char    ch;
    int     int_num;
    float   float_num;
    double  double_num;

    int     ch_status;
    int     int_status;
    Converter();

    void    setChar(const char* str_num);
    void    setInt(const char* str_num);
    void    setFloat(const char* str_num);
    void    setDouble(const char* str_num);

    void    putChar() const;
    void    putInt() const;
    void    putFloat() const;
    void    putDouble() const;

    bool    isSpecialNumber(const char* str_number) const;
    bool    isNormalNumber(const char* str_number) const;
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
