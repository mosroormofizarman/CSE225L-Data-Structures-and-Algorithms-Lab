#include "dynarr2.h"
#include<bits/stdc++.h>
using namespace std;

dynArr2::dynArr2()
{
    data = NULL;
    row = col = 0;
}

dynArr2::dynArr2(int r, int c)
{
    data = new int*[r];
    row = r;
    col = c;
    for(int i=0; i<row; i++)
    {
        data[i] = new int[c];
    }
}

dynArr2::~dynArr2()
{
    for(int i = 0; i < row; i++)
    {
        delete[] data[i];
    }
    delete [] data;
}

int dynArr2::getValue(int row, int col)
{
    return data[row][col];
}

void dynArr2::setValue(int row, int col, int value)
{
    data[row][col] = value;
}
