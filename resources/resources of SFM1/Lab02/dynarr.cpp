#include "dynarr.h"
#include<bits/stdc++.h>
using namespace std;

dynArr::dynArr()
{
    data = NULL;
    size = 0;
}

dynArr::dynArr(int s)
{
    data = new int[s];
    size = s;
}

dynArr::~dynArr()
{
    delete [] data;
    cout<<"destroyed"<<endl;
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
    data = new int[s];
    size = s;
}
