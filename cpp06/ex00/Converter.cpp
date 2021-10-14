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
        ch_status = other.ch_status;
        int_status = other.int_status;
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
    //strtolがオーバーフローしても最大値か最小値が変えるだけなので影響なし
    const bool is_overflow = !(CHAR_MIN <= ascii_ch && ascii_ch <= CHAR_MAX);
    const bool is_displayable = (32 <= ascii_ch && ascii_ch <= 126);

    ch = 0;
    ch_status = 0;
    if (is_overflow) {
        ch_status = OVERFLOW_ERR;
        return ;
    } else if (!is_displayable) {
        ch_status = NON_DISPLAYABLE_ERR;
        return ;
    }
    ch = ascii_ch;
}

void    Converter::setInt(const char* str_num)
{
    const long      num = strtol(str_num, NULL, 10);
    const bool      is_overflow = !(INT_MIN <= num && num <= INT_MAX);

    int_num = 0;
    int_status = 0;
    if (is_overflow) {
        int_status = OVERFLOW_ERR;
        return ;
    }
    int_num = num;
}

void    Converter::setFloat(const char* str_num)
{
    float_num = strtof(str_num, NULL);
}

void    Converter::setDouble(const char* str_num)
{
    double_num = strtod(str_num, NULL);
}

void    Converter::putChar() const
{
    std::cout << "char: '" << ch << "'" << std::endl;
}

void    Converter::putInt() const
{
    std::cout << "int: " << int_num << std::endl;
}

void    Converter::putFloat() const {}
void    Converter::putDouble() const {}

void    Converter::print() const
{
    putChar();
    putInt();
    putFloat();
    putDouble();
}
