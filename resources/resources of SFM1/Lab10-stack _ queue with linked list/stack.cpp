#include<bits/stdc++.h>
#include "stack.h"
#include "list.h"
using namespace std;

template<class T>
StackLL<T>::StackLL(){}

template<class T>
StackLL<T>::~StackLL(){}

template<class T>
void StackLL<T>::push(T val)
{
    ls.insertAtStart(val);
}

template<class T>
T StackLL<T>::pop()
{
    T val = ls.getValue(1);
    ls.deleteStart();
    return val;
}

template<class T>
T StackLL<T>::top()
{
    T val = ls.getValue(1);
    return val;
}

template<class T>
bool StackLL<T>::isEmpty()
{
    return ls.isEmpty();
}

template<class T>
void StackLL<T>::display()
{
    cout<<"The Stack is : ";
    while(!isEmpty()){
        cout<<top()<<"\t";
        pop();
    }
    cout<<endl;
}
