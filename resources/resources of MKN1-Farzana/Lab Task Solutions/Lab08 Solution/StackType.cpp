#include <iostream>
#include "StackType.h"
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
    if(IsEmpty())throw EmptyStack();
    else{
      return (topPtr->info);
    }

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
//Write the code
     NodeType *temp = new NodeType;
     temp->info = newItem;
     temp->next = topPtr;
     topPtr = temp;
}
template <class ItemType>
void StackType<ItemType>::Pop()
{
    NodeType *temp ;
    temp = topPtr;
    topPtr = topPtr->next;
    delete temp;
//Write the code here
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
