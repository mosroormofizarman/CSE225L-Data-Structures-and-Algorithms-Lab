#include "dynarr.h"
#include<bits/stdc++.h>
using namespace std;

template<class ItemType>
dynArr<ItemType>::dynArr()
{
    data = NULL;
    size = 0;
}

template<class ItemType>
dynArr<ItemType>::dynArr(int s)
{
    data = new ItemType[s];
    size = s;
}

template<class ItemType>
dynArr<ItemType>::~dynArr()
{
    delete [] data;
    //cout<<"destroyed"<<endl;
}

template<class ItemType>
ItemType dynArr<ItemType>::getValue(int index)
{
    return data[index];
}

template<class ItemType>
void dynArr<ItemType>::setValue(int index, ItemType value)
{
    data[index] = value;
}


