#include "quetype.h"
#include <iostream>
using namespace std;

template <class ItemType>
QueType<ItemType>::QueType()
{
    front = NULL;
    rear = NULL;
}

template <class ItemType>
ItemType QueType<ItemType>::Top()
{
    if (IsEmpty())
        throw EmptyQueue();
    else
        return front->info;
}

template <class ItemType>
bool QueType<ItemType>::IsEmpty()
{
    return (front == NULL);
}

template<class ItemType>
bool QueType<ItemType>::IsFull()
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
void QueType<ItemType>::Enqueue(ItemType newItem)
{
    if (IsFull())
        throw FullQueue();
    else
    {
        NodeType* newNode;
        newNode = new NodeType;
        newNode->info = newItem;
        newNode->next = NULL;
        if (rear == NULL) front = newNode;
        else
            rear->next = newNode;
        rear = newNode;
    }
}

template <class ItemType>
void QueType<ItemType>::Dequeue(ItemType& item)
{
    if (IsEmpty())
        throw EmptyQueue();
    else
    {
        NodeType* tempPtr;
        tempPtr = front;
        item = front->info;
        front = front->next;
        if (front == NULL)
            rear = NULL;
        delete tempPtr;
    }
}

template <class ItemType>
void QueType<ItemType>::MakeEmpty()
{
    NodeType* tempPtr;
    while (front != NULL)
    {
        tempPtr = front;
        front = front->next;
        delete tempPtr;
    }
    rear = NULL;
}

template <class ItemType>
void QueType<ItemType>::print()
{
    cout<<"Print the queue : ";
    ItemType t;
    while(!IsEmpty())
    {
        Dequeue(t);
        cout<<t<<" ";
    }
    cout<<endl;
}

template <class ItemType>
QueType<ItemType>::~QueType()
{
    MakeEmpty();
}

template <class ItemType>
bool QueType<ItemType>::search(ItemType item)
{
    NodeType* tmp = front;
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
void QueType<ItemType>::edit(ItemType a, ItemType b)
{
    if(!search(a)){
        cout<<"Item is not in the list"<<endl;
        return;
    }
    NodeType* tmp = front;
    while(tmp!=NULL){
        if(tmp->info==a){
            tmp->info=b;
            return;
        }
        tmp=tmp->next;
    }

}
