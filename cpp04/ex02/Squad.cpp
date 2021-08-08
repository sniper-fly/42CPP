#include "Squad.hpp"
#include <stddef.h>
#include <iostream>

Squad::Squad()
{
    units_count = 0;
    units = 0;
}

Squad::~Squad()
{
    for (int i = 0; i < units_count; ++i) {
        delete units[i];
    }
    delete[] units;
}

Squad::Squad(Squad const &other)
{
    *this = other;
}

Squad &Squad::operator=(Squad const &other)
{
    //TODO: ここの例外についても吟味すべき
    if (this != &other)
    {
        for (int i = 0; i < other.getCount(); ++i) {
            (this->units)[i] = other.getUnit(i);
        }
    }
    return *this;
    //TODO: アドレスはthisを返すべき？otherにすべき？
}

int             Squad::getCount() const { return units_count; }

ISpaceMarine*   Squad::getUnit(int idx) const { return units[idx]; }

int             Squad::push(ISpaceMarine* new_unit)
{
    //nullがわたされたらなにもしない
    if (new_unit == NULL) {
        return this->units_count;
    }
    //同じunitがはいっていたら何もしない
    for (int i = 0; i < units_count; ++i) {
        if (units[i] == new_unit) {
            return this->units_count;
        }
    }

    //まずunits_countを++して新しいunits配列を用意する
    //末尾にnew_unitsを足す
    ISpaceMarine** copy_units = new ISpaceMarine*[units_count + 1];
    int i;
    for (i = 0; i < units_count; ++i) {
        //ポインタ変数の受け渡し, TacticalMarine等のoperator=ではない
        copy_units[i] = units[i];
    }
    copy_units[i] = new_unit;
    ++units_count;

    delete[] units; //ここではポインタをfreeしているだけなのでデストラクタは呼ばれない
    units = copy_units;

    return this->units_count;
}
