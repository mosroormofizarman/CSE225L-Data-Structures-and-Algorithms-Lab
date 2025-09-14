#include "sortedtype.h"
#include <bits/stdc++.h>

using namespace std;

template<class ItemType>
SortedType<ItemType>::SortedType()
{
    length = 0;
    currentPosition = -1;
}

template<class ItemType>
void SortedType<ItemType>::makeEmpty()
{
    length = 0;
}

template<class ItemType>
bool SortedType<ItemType>::isFull()
{
    return length==MAX_ITEMS;
}

template<class ItemType>
int SortedType<ItemType>::lengthIs()
{
    return length;
}

template<class ItemType>
void SortedType<ItemType>::insertItem(ItemType item)
{
    int location = 0;
    bool moreToSearch = location<length;

    while(moreToSearch){
        if(item>data[location]){
            location++;
            moreToSearch = location>length;
        }else if(item<data[location]){
            moreToSearch = false;
        }
    }

    for(int index = length; index>location; index--){
        data[index] = data[index-1];
    }

    data[location] = item;
    length++;
}

template<class ItemType>
void SortedType<ItemType>::deleteItem(ItemType item)
{
    int location = 0;
    while(item != data[location]){
        location++;
    }
    for(int index = location+1; index<length; index++){
        data[index-1] = data[index];
    }
    length--;
}

template<class ItemType>
void SortedType<ItemType>::retrieveItem(ItemType &item, bool &found)
{
    int mid, first = 0, last = length -1;
    bool moreToSearch = first<=last;
    found = false;
    while(moreToSearch && !found){
        mid = (first+last)/2;
        if (item==data[mid]){
            last=mid-1;
            moreToSearch = first<=last;
        }else if(item < data[mid]){
            first=mid+1;
            moreToSearch = first<=last;
        }else{
            found = true;
            item = data[mid];
        }
    }
}

template<class ItemType>
void SortedType<ItemType>::resetList()
{
    currentPosition = -1;
}

template<class ItemType>
void SortedType<ItemType>::getNextItem(ItemType &item)
{
    currentPosition++;
    item = data[currentPosition];
}

template<class ItemType>
void SortedType<ItemType>::printList()
{
    resetList();
    cout<<"print the list : ";
    for(int i=0; i<lengthIs(); i++){
        ItemType item;
        getNextItem(item);
        cout<<item<<"\t";
    }
    cout<<endl;
}
