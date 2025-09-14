#ifndef WHIMSICALSTORAGE_H_INCLUDED
#define WHIMSICALSTORAGE_H_INCLUDED

#include "pqtype.h"
#include "pqtype.cpp"
#include "stacktype.h"
#include "stacktype.cpp"
#include "quetype.h"
#include "quetype.cpp"
#include "sortedtype.h"
#include "sortedtype.cpp"
#include<bits/stdc++.h>

template<class T>
class WhimsicalStorage
{
public:
    WhimsicalStorage(string);
    ~WhimsicalStorage();
    void insert(T val);
    void Delete(T);
    T firstItem();
    bool search(T);
    void edit(T,T);
    void print();
    void change(string);
private:
    string s;
    StackType<T> st;
    QueType<T> qt;
    PQType<T> pq =PQType<T>(50);
    SortedType<T> lt;
};

#endif // WHIMSICALSTORAGE_H_INCLUDED
