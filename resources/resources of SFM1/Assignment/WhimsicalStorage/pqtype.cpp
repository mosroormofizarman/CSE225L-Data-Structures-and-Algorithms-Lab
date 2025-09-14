#include "pqtype.h"

using namespace std;

template<class ItemType>
PQType<ItemType>::PQType(int max)
{
    maxItems = max;
    items.elements=new ItemType[max];
    length = 0;
}

template<class ItemType>
PQType<ItemType>::~PQType()
{
    delete [] items.elements;
}

template<class ItemType>
void PQType<ItemType>::MakeEmpty()
{
    length = 0;
}

template<class ItemType>
bool PQType<ItemType>::IsEmpty()
{
    return length == 0;
}

template<class ItemType>
bool PQType<ItemType>::IsFull()
{
    return length == maxItems;
}

template<class ItemType>
void PQType<ItemType>::Enqueue(ItemType newItem)
{
    if (length == maxItems) throw FullPQ();
    else
    {
        length++;
        items.elements[length-1] = newItem;
        items.ReheapUp(0, length-1);
    }
}

template<class ItemType>
void PQType<ItemType>::Dequeue(ItemType& item)
{
    if (length == 0) throw EmptyPQ();
    else
    {
        item = items.elements[0];
        items.elements[0] = items.elements[length-1];
        length--;
        items.ReheapDown(0, length-1);
    }
}

template<class ItemType>
void PQType<ItemType>::print()
{
    cout<<"Print the priority queue :";
    while(!IsEmpty()){
        ItemType i;
        Dequeue(i);
        cout<<i<<" ";
    }
    cout<<endl;
}

template <class ItemType>
ItemType PQType<ItemType>::Top()
{
    if (IsEmpty())
        throw EmptyPQ();
    else
        return items.elements[0];
}

template <class ItemType>
bool PQType<ItemType>::search(ItemType item)
{
    bool found = false;
    int i=0;
    while(i<length && !found){
        if(items.elements[i]==item){
            found=true;
            return found;
        }
        i++;
    }
    return found;
}

template <class ItemType>
void PQType<ItemType>::edit(ItemType a, ItemType b)
{
    if(!search(a)){
        cout<<"Item is not in the list"<<endl;
        return;
    }
    int i=0;
    while(i<length){
        if(items.elements[i]==a){
            items.elements[i]=b;
            return;
        }
        i++;
    }
}
