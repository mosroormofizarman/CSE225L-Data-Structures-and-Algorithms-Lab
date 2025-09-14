#ifndef DLIST_H_INCLUDED
#define DLIST_H_INCLUDED

#include<iostream>
using namespace std;

class ListEmpty{};
class PositionOutOfBound {};

struct Dnode
{
    int data;
    Dnode *prev,*next;
};

template<class T>
class DoublyLinkedList
{
protected:
    Dnode *head, *tail, *curptr;
    int length;

public:
    DoublyLinkedList();
    ~DoublyLinkedList();

    virtual bool isEmpty();
    virtual int listSize();

    //print all items
    virtual void print();
    virtual void printReverse();

    //return position (starting from 1) of key if found, otherwise return 0
    virtual int searchItem(T key);

    virtual void insertAtStart(T value);
    virtual void insertAtEnd(T value);
    //insert a new node (containing value) where ptr is now pointing to
    //so that after insertion ptr points to the new node
    virtual void insertAtPointer(Dnode *ptr, T value);

    virtual void deleteStart();
    virtual void deleteEnd();
    //delete the node currently pointed to by ptr and adjust
    //its prev and next nodes accordingly; also ensure that
    //ptr now points to the node which was the next node of
    //the node you have just deleted
    virtual void deleteAtPointer(Dnode *ptr);

    virtual int getValue(int pos);
    virtual void setValue(int pos, T val);

    virtual bool hasNext();
    virtual bool hasPrev();
    virtual T nextItem();
    virtual T prevItem();
    virtual void reset();
};

/* A class to maintain & iterate over browsing history */
//can be used to simulate the behavior of the back+forth buttons of any
//browser, audio/video player, etc. as well as the behavior of
//undo/redo buttons of any typical editor
template<class T>
class BrowsingHistoryList : protected DoublyLinkedList<T>
{
    Dnode* curpage;
public:
    //starts history from the initial page
    BrowsingHistoryList(T value);
    ~BrowsingHistoryList();
    //using DoublyLinkedList<T>::print;
    using DoublyLinkedList<T>::insertAtEnd;

    //virtual void printCur();
    //move curpage to the previous node and return the value in that node
    T gotoPrevPage();
    //move curpage to the next node and return the value in that node
    T gotoNextPage();

    //print all items from curpage->prev to head
    virtual void printPrevItemsFromCur();
    //print all items from curpage->next to tail (in reverse order)
    virtual void printNextItemsFromCur();

    //click on a link in the current page
    //param: value - link clicked
    //This function call will delete all items from curpage->next to tail,
    //insert a node (containing value) at the end of the modified list,
    //and then move curpage to that newly created node
    virtual void click(T value);
};

/* Doubly Linked List based implementation of sorted list */
//can be used to schedule jobs in a processor according to their priorities
//which allows add(insert)/remove(delete) any job or update priority
//of any job on the fly as well as search for specific jobs
template<class T>
class SortedDoublyLinkedList : protected DoublyLinkedList<T>
{
public:
    SortedDoublyLinkedList();
    ~SortedDoublyLinkedList();
    //
    using DoublyLinkedList<T>::print;
    //
    virtual void insertItem(T value);
    virtual void deleteItem(T value);
    virtual void updateItemAtPos(int pos, T value);
};

#endif // DLIST_H_INCLUDED
