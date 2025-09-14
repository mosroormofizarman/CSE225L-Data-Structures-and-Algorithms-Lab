#include "dynarr.h"
#include <iostream>

using namespace std;

dynArr::dynArr()
{
    data = NULL;
    size = 0;

    new_data = NULL;

    twoDdata = NULL;
}
dynArr::dynArr(int s)
{
    data = new int[s];
    size = s;
}
dynArr::~dynArr()
{
    delete [] data;
}
int dynArr::getValue(int index)
{
    return data[index];
}
void dynArr::setValue(int index, int value)
{
    data[index] = value;
}
void dynArr::allocate(int s)
{
    new_data = new int[s];
    size = s;
    data = new_data;
}
void dynArr::twoDarray(int r, int c)
{
    twoDdata = new int*[r];

    for (int i=0; i<r; i++)
    {
        twoDdata[i] = new int[c];
    }
}
int dynArr::gettwoDarrayValue(int first_index, int second_index)
{
    return twoDdata[first_index][second_index];
}
void dynArr::settwoDarrayValue(int first_index, int second_index, int value)
{
    twoDdata[first_index][second_index] = value;
}
