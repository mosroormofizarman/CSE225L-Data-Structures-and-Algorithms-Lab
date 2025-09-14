#include "queue.h"
#include "list.h"
#include<bits/stdc++.h>
using namespace std;

template<class T>
QueueLL<T>::QueueLL(){}

template<class T>
QueueLL<T>::~QueueLL(){}

template<class T>
void QueueLL<T>::enqueue(T val)
{
    ls.insertAtEnd(val);
}

template<class T>
T QueueLL<T>::dequeue()
{
    T val = ls.getValue(1);
    ls.deleteStart();
    return val;
}

template<class T>
T QueueLL<T>::frontItem()
{
    T val = ls.getValue(1);
    return val;
}

template<class T>
bool QueueLL<T>::isEmpty()
{
    return ls.isEmpty();
}

template<class T>
void QueueLL<T>::display()
{
    cout<<"The queue is : ";
    while(!isEmpty()){
        cout<<dequeue()<<"\t";
        //T v = dequeue();
    }
    cout<<endl;
}
