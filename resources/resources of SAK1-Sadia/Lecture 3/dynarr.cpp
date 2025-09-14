#include "dynarr.h"
#include <iostream>

DynArr::DynArr() //ClassName::ConstructorName
{                //return type(method return type) ClassName::MethodName()
    data = NULL;
    length = 0;
}
DynArr::DynArr(int s)
{
    data = new int[s];
    length = s;
}
DynArr::~DynArr()
{
    delete [] data;
}
void DynArr::setValue(int index, int value)
{
    data[index] = value;
}
int DynArr::getValue(int index)
{
    return data[index];
}
