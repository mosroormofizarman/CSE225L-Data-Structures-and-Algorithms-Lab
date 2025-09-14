#include <iostream>
#include "stacktype.h"
using namespace std;

template <class ItemType>
StackType<ItemType>::StackType()
{
    topPtr = NULL;
}

template <class ItemType>
bool StackType<ItemType>::IsEmpty()
{
    return (topPtr == NULL);
}

template <class ItemType>
ItemType StackType<ItemType>::Top()
{
    if (IsEmpty())
        throw EmptyStack();
    else
        return topPtr->info;
}

template <class ItemType>
bool StackType<ItemType>::IsFull()
{
    NodeType* location;
    try
    {
        location = new NodeType;
        delete location;
        return false;
    }
    catch(bad_alloc& exception)
    {
        return true;
    }
}
template <class ItemType>
void StackType<ItemType>::Push(ItemType newItem)
{
    if (IsFull())
        throw FullStack();
    else
    {
        NodeType* location;
        location = new NodeType;
        location->info = newItem;
        location->next = topPtr;
        topPtr = location;
    }
}
template <class ItemType>
void StackType<ItemType>::Pop()
{
    if (IsEmpty())
        throw EmptyStack();
    else
    {
        NodeType* tempPtr;
        tempPtr = topPtr;
        topPtr = topPtr->next;
        delete tempPtr;
    }

}

template <class ItemType>
StackType<ItemType>::~StackType()
{
    NodeType* tempPtr;
    while (topPtr != NULL)
    {
        tempPtr = topPtr;
        topPtr = topPtr->next;
        delete tempPtr;
    }
}

template <class ItemType>
void StackType<ItemType>::print()
{
    cout<<"Print the stack : ";
    while(!IsEmpty())
    {
        cout<<Top()<<" ";
        Pop();
    }
    cout<<endl;
}

template <class ItemType>
void StackType<ItemType>::MakeEmpty()
{
    NodeType* tempPtr;
    while (topPtr != NULL)
    {
        tempPtr = topPtr;
        topPtr = topPtr->next;
        delete tempPtr;
    }
    topPtr = NULL;
}

template <class ItemType>
bool StackType<ItemType>::search(ItemType item)
{
    NodeType* tmp = topPtr;
    bool found = false;
    while(tmp!=NULL && !found){
        if(tmp->info==item){
            found=true;
            return found;
        }
        tmp=tmp->next;
    }
    return found;
}

template <class ItemType>
void StackType<ItemType>::edit(ItemType a, ItemType b)
{
    if(!search(a)){
        cout<<"Item is not in the list"<<endl;
        return;
    }
    NodeType* tmp = topPtr;
    while(tmp!=NULL){
        if(tmp->info==a){
            tmp->info=b;
            return;
        }
        tmp=tmp->next;
    }

}
