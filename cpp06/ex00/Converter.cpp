#include "Converter.hpp"

Converter::Converter() { }

Converter::Converter(const char* str_number)
{
    this->str_number = str_number;
    if (!(isNormalNumber(str_number) || isSpecialNumber(str_number))) {
        throw std::runtime_error("Invalid argument");
    }
    setChar();
    setInt();
    setFloat();
    setDouble();
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
        str_number = other.str_number;
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

void    Converter::setChar()
{
    const long ascii_ch = strtol(str_number, NULL, 10);
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

void    Converter::setInt()
{
    const long      num = strtol(str_number, NULL, 10);
    const bool      is_overflow = !(INT_MIN <= num && num <= INT_MAX);

    int_num = 0;
    int_status = 0;
    if (is_overflow) {
        int_status = OVERFLOW_ERR;
        return ;
    }
    int_num = num;
}

void    Converter::setFloat()
{
    float_num = strtof(str_number, NULL);
}

void    Converter::setDouble()
{
    double_num = strtod(str_number, NULL);
}

void    Converter::putChar() const
{
    std::cout << "char: ";
    if (ch_status == OVERFLOW_ERR) {
        std::cout << "impossible" << std::endl;
        return ;
    } else if (ch_status == NON_DISPLAYABLE_ERR) {
        std::cout << "Non displayable" << std::endl;
        return ;
    }
    std::cout << "'" << ch << "'" << std::endl;
}

void    Converter::putInt() const
{
    std::cout << "int: ";
    if (int_status == OVERFLOW_ERR) {
        std::cout << "impossible" << std::endl;
    }
    std::cout << int_num << std::endl;
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

bool    Converter::isNormalNumber(const char* str_number) const
{
    const char* normal_num_chars = "0123456789-+f.";
    for (int i = 0; str_number[i]; ++i) {
        const bool has_normal_num = strchr(normal_num_chars, str_number[i]);
        if (!has_normal_num) {
            return false;
        }
    } 
    return true;
}

bool    Converter::isSpecialNumber(const char* str_number) const
{
    const int TOTAL = 12;
    std::string special_numbers[] = {
        "nan",
        "+nan",
        "-nan",
        "nanf",
        "+nanf",
        "-nanf",
        "inf",
        "+inf",
        "-inf",
        "inff",
        "+inff",
        "-inff"
    };
    for (int i = 0; i < TOTAL; ++i) {
        if (special_numbers[i] == str_number) {
            return true;
        }
    }
    return false;
}
