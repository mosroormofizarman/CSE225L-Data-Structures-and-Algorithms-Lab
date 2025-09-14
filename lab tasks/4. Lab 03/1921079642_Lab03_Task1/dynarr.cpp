#include "dynarr.h"
#include <iostream>

using namespace std;

template <typename X>

dynArr<X>::dynArr(int s)
{
    data = new X[s];
    size = s;
}

template <typename X>

dynArr<X>::~dynArr()
{
    delete [] data;
}

template <typename X>

X dynArr<X>::getValue(int index)
{
    return data[index];
}

template <typename X>

void dynArr<X>::setValue(int index, X value)
{
    data[index] = value;
}
