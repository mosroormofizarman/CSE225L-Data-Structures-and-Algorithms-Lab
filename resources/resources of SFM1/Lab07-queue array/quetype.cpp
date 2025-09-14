#include "quetype.h"
#include<bits/stdc++.h>

using namespace std;

template<class ItemType>
QueueType<ItemType>::QueueType()
{
    maxQueue = 501;
    front = maxQueue-1;
    rear = maxQueue-1;
    items = new ItemType[maxQueue];
}

template<class ItemType>
QueueType<ItemType>::QueueType(int max)
{
    maxQueue = max+1;
    front = maxQueue-1;
    rear = maxQueue-1;
    items = new ItemType[maxQueue];
}

template<class ItemType>
QueueType<ItemType>::~QueueType()
{
    delete[] items;
}

template<class ItemType>
void QueueType<ItemType>::makeEmpty()
{
    front = maxQueue-1;
    rear = maxQueue-1;
}

template<class ItemType>
bool QueueType<ItemType>::isEmpty()
{
    return rear==front;
}

template<class ItemType>
bool QueueType<ItemType>::isFull()
{
    return (rear+1)%maxQueue==front;
}

template<class ItemType>
void QueueType<ItemType>::enqueue(ItemType item)
{
    if(isFull()){
        throw FullQueue();
    }else{
        rear = (rear+1)%maxQueue;
        items[rear] = item;
    }
}

template<class ItemType>
void QueueType<ItemType>::dequeue(ItemType &item)
{
    if(isEmpty()){
        throw EmptyQueue();
    }else{
        front = (front+1)%maxQueue;
        item = items[front];
    }
}

template<class ItemType>
void QueueType<ItemType>::printQueue()
{
    cout<<"Print the queue : ";
    ItemType item;
    while(!isEmpty()){
        dequeue(item);
        cout<<item<<"\t";
    }
    cout<<endl;
}
