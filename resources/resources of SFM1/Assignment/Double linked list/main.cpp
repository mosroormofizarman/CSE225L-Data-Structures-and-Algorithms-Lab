#include <bits/stdc++.h>
#include "dlist.cpp"

using namespace std;

int main()
{
    DoublyLinkedList<int> dll;
    SortedDoublyLinkedList<int> sdl;
    BrowsingHistoryList<int> bh(1);

    //doubly linked list
    dll.insertAtStart(12);
    dll.insertAtStart(10);
    dll.insertAtEnd(13);
    dll.printReverse();
    dll.setValue(1,20);
    dll.print();
    cout<<"position of 20 : "<<dll.searchItem(20)<<endl;
    cout<<"2nd position value : "<<dll.getValue(2)<<endl;

    //sorted linked list
    sdl.insertItem(5);
    sdl.insertItem(1);
    sdl.insertItem(2);
    sdl.deleteItem(1);
    sdl.updateItemAtPos(1,3);
    sdl.print();

    //browsing history
    bh.insertAtEnd(12);
    bh.insertAtEnd(23);
    bh.insertAtEnd(35);
    cout<<"Next page : "<<bh.gotoNextPage()<<endl;
    bh.printNextItemsFromCur();
    bh.click(15);
    bh.printPrevItemsFromCur();
    bh.insertAtEnd(35);
    bh.printNextItemsFromCur();
    cout<<"Prev page : "<<bh.gotoPrevPage()<<endl;

}
