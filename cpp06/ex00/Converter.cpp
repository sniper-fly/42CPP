#include "Converter.hpp"

Converter::Converter() { }

Converter::Converter(const char* str_number)
{
    setChar(str_number);
    setInt(str_number);
    setFloat(str_number);
    setDouble(str_number);
}

Converter::~Converter() { }

Converter::Converter(Converter const &other)
{
    *this = other;
}

Converter &Converter::operator=(Converter const &other)
{
    if (this != &other)
    {
        ch = other.ch;
        int_num = other.int_num;
        float_num = other.float_num;
        double_num = other.double_num;
    }
    return *this;
}

char    Converter::getChar() const { return ch; }
int     Converter::getInt() const { return int_num; }
float   Converter::getFloat() const { return float_num; }
double  Converter::getDouble() const { return double_num; }

void    Converter::setChar(const char* str_num)
{
    const long ascii_ch = strtol(str_num, NULL, 10);
    //TODO: strtolがオーバーフローしたら？
    const bool is_char_overflow = !(-128 <= ascii_ch && ascii_ch <= 127);
    const bool is_displayable = (32 <= ascii_ch && ascii_ch <= 126);

    if (is_char_overflow) {
        ch = OVERFLOW_ERR;
    } else if (!is_displayable) {
        ch = NON_DISPLAYABLE_ERR;
    }
    ch = ascii_ch;
}

void    Converter::setInt(const char* str_num) {}
void    Converter::setFloat(const char* str_num) {}
void    Converter::setDouble(const char* str_num) {}
