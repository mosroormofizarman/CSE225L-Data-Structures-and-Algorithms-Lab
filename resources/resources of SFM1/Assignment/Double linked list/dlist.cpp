#include<bits/stdc++.h>
#include "dlist.h"
using namespace std;

template<class T>
DoublyLinkedList<T>::DoublyLinkedList()
{
    head=tail=curptr=NULL;
    length=0;
}

template<class T>
DoublyLinkedList<T>::~DoublyLinkedList()
{
    while(!isEmpty()){
        deleteStart();
    }
}

template<class T>
bool DoublyLinkedList<T>::isEmpty()
{
    return length==0;
}

template<class T>
int DoublyLinkedList<T>::listSize()
{
    return length;
}

template<class T>
void DoublyLinkedList<T>::print()
{
    reset();
    cout<<"Print the list :";
    while(hasNext())
    {
        cout<<nextItem()<<" ";
    }
    cout<<endl;
}

template<class T>
void DoublyLinkedList<T>::printReverse()
{
    curptr=tail;
    cout<<"Print the list in reverse order:";
    //Dnode *curr = tail;
    while(hasPrev())
    {
        cout<<prevItem()<<" ";
    }
    reset();
    cout<<endl;
}

template<class T>
int DoublyLinkedList<T>::searchItem(T key)
{
    reset();
    for(int i=1; hasNext(); i++)
    {
        if(nextItem()==key)
        {
            return i;
        }
    }
    return 0;
}

template<class T>
bool DoublyLinkedList<T>::hasNext()
{
    return curptr!=NULL;
}

template<class T>
bool DoublyLinkedList<T>::hasPrev()
{
    return curptr!=NULL;
}

template<class T>
T DoublyLinkedList<T>::nextItem()
{
    if(isEmpty())
    {
        throw ListEmpty();
    }

    T val = curptr->data;
    curptr = curptr->next;
    return val;
}

template<class T>
T DoublyLinkedList<T>::prevItem()
{
    if(isEmpty())
    {
        throw ListEmpty();
    }

    T val = curptr->data;
    curptr = curptr->prev;
    return val;
}

template<class T>
void DoublyLinkedList<T>::insertAtStart(T value)
{
    Dnode *tmp = new Dnode;
    tmp->data = value;
    tmp->next = NULL;
    tmp->prev = NULL;
    if(head==NULL)
    {
        head = tmp;
        tail=tmp;
        tmp = NULL;
    }
    else
    {
        tmp->next = head;
        head->prev=tmp;
        head = tmp;
    }
    length++;
    curptr = head;
}

template<class T>
void DoublyLinkedList<T>::insertAtEnd(T val)
{
    Dnode *tmp = new Dnode;
    tmp->data = val;
    tmp->next = NULL;
    tmp->prev = NULL;
    if(tail==NULL)
    {
        insertAtStart(val);
    }
    else
    {
        tmp->prev = tail;
        tail->next = tmp;
        tail = tmp;
    }
    length++;
    curptr = tail;
}

template<class T>
void DoublyLinkedList<T>::deleteStart()
{
    if(isEmpty())
    {
        throw ListEmpty();
    }
    Dnode *tmp = head;
    head = head->next;
    delete tmp;
    length--;
    curptr=head;
}

template<class T>
void DoublyLinkedList<T>::deleteEnd()
{
    if(isEmpty())
    {
        throw ListEmpty();
    }
    Dnode *tmp = tail;
    tail = tail->prev;
    delete tmp;
    length--;
    curptr=tail;
}

template<class T>
void DoublyLinkedList<T>::insertAtPointer(Dnode *ptr, T value)
{
    Dnode *tmp2 = new Dnode;
    tmp2->data = value;
    tmp2->next = ptr->next;
    tmp2->prev = ptr;
    ptr->next = tmp2;
    length++;
}

template<class T>
void DoublyLinkedList<T>::deleteAtPointer(Dnode *ptr)
{
    Dnode *tmp = ptr->prev;
    tmp->next = ptr->next;
    ptr->next->prev = tmp;
    delete ptr;
    length--;
}

template<class T>
int DoublyLinkedList<T>::getValue(int pos)
{
    if(pos>length || pos<=0)
    {
        throw PositionOutOfBound();
    }

    Dnode *cur = head;
    for(int i=1; i<pos; i++)
    {
        cur=cur->next;
    }
    return cur->data;
}

template<class T>
void DoublyLinkedList<T>::setValue(int pos, T val)
{
    if(pos>length || pos<=0)
    {
        throw PositionOutOfBound();
    }

    Dnode *cur = head;
    for(int i=1; i<pos; i++)
    {
        cur=cur->next;
    }
    cur->data=val;
}

template<class T>
void DoublyLinkedList<T>::reset()
{
    curptr = head;
}

//browsing history
template<class T>
BrowsingHistoryList<T>::BrowsingHistoryList(T value)
{
    this->insertAtStart(value);
    curpage=this->curptr;
}

template<class T>
BrowsingHistoryList<T>::~BrowsingHistoryList()
{
    while(!this->isEmpty()){
        this->deleteStart();
    }
}

template<class T>
T BrowsingHistoryList<T>::gotoPrevPage()
{
    curpage = curpage->prev;
    if(curpage==NULL){throw PositionOutOfBound();}
    return curpage->data;
}

template<class T>
T BrowsingHistoryList<T>::gotoNextPage()
{
    curpage = curpage->next;
    if(curpage==NULL){throw PositionOutOfBound();}
    return curpage->data;
}
/*
template<class T>
void BrowsingHistoryList<T>::printCur()
{
    cout<<"current page: "<<curpage->next->data<<endl;
}
*/
template<class T>
void BrowsingHistoryList<T>::printPrevItemsFromCur()
{
    Dnode *tmp = curpage->prev;
    cout<<"Previous browsing history : ";
    while(tmp!=NULL){
        cout<<tmp->data<<" ";
        tmp=tmp->prev;
    }
    cout<<endl;
}

template<class T>
void BrowsingHistoryList<T>::printNextItemsFromCur()
{
    Dnode *tmp = curpage;
    cout<<"Next browsing history : ";
    while(tmp->next!=NULL){
        tmp=tmp->next;
    }
    while(tmp!=curpage){
        cout<<tmp->data<<" ";
        tmp=tmp->prev;
    }
    cout<<endl;

}

template<class T>
void BrowsingHistoryList<T>::click(T value)
{
    while(curpage!=this->tail){
      this->deleteEnd();
    }

    this->insertAtEnd(value);
    curpage=this->tail;
}

template<class T>
SortedDoublyLinkedList<T>::SortedDoublyLinkedList()
{
    this->head=this->tail=this->curptr=NULL;
    this->length=0;
}

template<class T>
SortedDoublyLinkedList<T>::~SortedDoublyLinkedList()
{
    while(!this->isEmpty()){
        this->deleteStart();
    }
}

template<class T>
void SortedDoublyLinkedList<T>::insertItem(T value)
{
    if(this->isEmpty() || value < (this->head)->data)
    {
        this->insertAtStart(value);
    }
    else
    {
        Dnode *temp=new Dnode;
        Dnode *pre=NULL, *cur=(this->head);
        while(cur != NULL && (cur->data) < value){
            pre = cur;
            cur = cur->next;
        }

        temp->data = value;
        temp->next = cur;
        cur->prev = temp;
        temp->prev = pre;
        pre->next = temp;
        (this->length)++;
    }
}

template<class T>
void SortedDoublyLinkedList<T>::deleteItem(T value)
{
    if(this->isEmpty())throw ListEmpty();
    if(this->head->data==value){
        this->deleteStart();
        return;
    }

    Dnode *pre=NULL, *cur=(this->head);
    while(cur->data != value){
        pre = cur;
        cur = cur->next;
    }
    if(cur != NULL){
        pre->next = cur->next;
        cur->next->prev = pre;
        delete cur;
        (this->length)--;
    }
}

template<class T>
void SortedDoublyLinkedList<T>::updateItemAtPos(int pos, T value)
{
    this->setValue(pos,value);

}
