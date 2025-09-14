#ifndef SORTEDLIST_H_INCLUDED
#define SORTEDLIST_H_INCLUDED

#include<bits/stdc++.h>
#include "list.h"
#include "list.cpp"

using namespace std;

template<class T>
class UnsortedList: protected SinglyLinkedList<T>{
public:
    UnsortedList(){}
    ~UnsortedList(){}

    using SinglyLinkedList<T>::isEmpty;
    using SinglyLinkedList<T>::searchItem;
    using SinglyLinkedList<T>::reset;
    using SinglyLinkedList<T>::nextItem;
    using SinglyLinkedList<T>::hasNext;

    virtual void insertItem(T value);
    virtual void deleteItem(T value);
    virtual void printList();
};

template<class T>
class SortedList: public UnsortedList<T>{
public:
    SortedList(){}
    ~SortedList(){}

    virtual void insertItem(T value);
};


#endif // SORTEDLIST_H_INCLUDED
