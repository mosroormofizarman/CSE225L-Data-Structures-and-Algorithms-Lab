#include <bits/stdc++.h>
#include "pqtype.h"
#include "quetype.h"
#include "stacktype.h"
#include "sortedtype.h"
#include "WhimsicalStorage.h"
using namespace std;

template<class T>
WhimsicalStorage<T>::WhimsicalStorage(string val)
{
    s=val;
}

template<class T>
WhimsicalStorage<T>::~WhimsicalStorage()
{
    st.MakeEmpty();
    qt.MakeEmpty();
    pq.MakeEmpty();
    lt.MakeEmpty();
}

template<class T>
void WhimsicalStorage<T>::change(string val)
{
    s=val;
    st.MakeEmpty();
    qt.MakeEmpty();
    pq.MakeEmpty();
    lt.MakeEmpty();
}

template<class T>
void WhimsicalStorage<T>::insert(T val)
{
    if(s=="S"){
        st.Push(val);
    }else if(s=="Q"){
        qt.Enqueue(val);
    }else if(s=="P"){
        pq.Enqueue(val);
    }else if(s=="L"){
        lt.InsertItem(val);
    }
}

template<class T>
void WhimsicalStorage<T>::Delete(T val)
{
    if(s=="S"){
        st.Pop();
    }else if(s=="Q"){
        qt.Dequeue(val);
    }else if(s=="P"){
        pq.Dequeue(val);
    }else if(s=="L"){
        lt.DeleteItem(val);
    }
}

template<class T>
void WhimsicalStorage<T>::print()
{
    if(s=="S"){
        st.print();
    }else if(s=="Q"){
        qt.print();
    }else if(s=="P"){
        pq.print();
    }else if(s=="L"){
        lt.print();
    }
}

template<class T>
T WhimsicalStorage<T>::firstItem()
{
    if(s=="S"){
        return st.Top();
    }else if(s=="Q"){
        return qt.Top();
    }else if(s=="P"){
        return pq.Top();
    }else if(s=="L"){
        return lt.Top();
    }
}

template<class T>
bool WhimsicalStorage<T>::search(T t)
{
    if(s=="S"){
        return st.search(t);
    }else if(s=="Q"){
        return qt.search(t);
    }else if(s=="P"){
        return pq.search(t);
    }else if(s=="L"){
        return lt.search(t);
    }
}

template<class T>
void WhimsicalStorage<T>::edit(T a, T b)
{
    if(s=="S"){
        st.edit(a, b);
    }else if(s=="Q"){
        qt.edit(a, b);
    }else if(s=="P"){
        pq.edit(a, b);
    }else if(s=="L"){
        lt.edit(a, b);
    }
}
