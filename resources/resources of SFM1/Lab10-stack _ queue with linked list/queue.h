#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#include<bits/stdc++.h>
#include "list.h"
using namespace std;

template<class T>
class QueueLL{
private:
    SinglyLinkedListWithTail<T> ls;
public:
    QueueLL();
    ~QueueLL();
    virtual void enqueue(T);
    virtual T dequeue();
    virtual T frontItem();
    virtual bool isEmpty();
    virtual void display();
};

#endif // QUEUE_H_INCLUDED
