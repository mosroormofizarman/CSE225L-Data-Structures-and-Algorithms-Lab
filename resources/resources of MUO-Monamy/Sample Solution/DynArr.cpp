#include "dynarr.h"
#include <iostream>
using namespace std;
template <class jakhushi>
dynArr<jakhushi>::dynArr(int s)
{
    data = new jakhushi[s];
    size = s;
}
template <class jakhushi>
dynArr<jakhushi>::~dynArr()
{
    delete [] data;
}
template <class jakhushi>
jakhushi dynArr<jakhushi>::getValue(int index)
{
    return data[index];
}
template <class jakhushi>
void dynArr<jakhushi>::setValue(int index, jakhushi value)
{
    data[index] = value;
}
