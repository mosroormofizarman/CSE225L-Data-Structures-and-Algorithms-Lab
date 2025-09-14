#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include<bits/stdc++.h>
#include "list.h"
#include "list.cpp"
using namespace std;

template<class T>
class StackLL{
private:
    SinglyLinkedList<T> ls;
public:
    StackLL();
    ~StackLL();
    virtual void push(T);
    virtual T pop();
    virtual T top();
    virtual bool isEmpty();
    virtual void display();
};
#endif // STACK_H_INCLUDED
