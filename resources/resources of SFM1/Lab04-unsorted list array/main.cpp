#include <bits/stdc++.h>
#include "unsortedtype.cpp"
using namespace std;

int main()
{
    //create a list of integers
    UnsortedType<int> intUnsortedList;
    //insert four items
    int n, item;
    cout<<"Insert four items: "<<endl;
    for(int i=0; i<4; i++){
        cin>>n;
        intUnsortedList.insertItem(n);
    }
    //print the list
    intUnsortedList.printList();
    //printList(intUnsortedList);

    //print the length of list
    cout<<"Length of list is "<<intUnsortedList.lengthIs()<<endl;
    //insert one item
    cout<<"Insert one item: "<<endl;
    cin>>n;
    intUnsortedList.insertItem(n);
    //print the list
    cout<<"Length of list is "<<intUnsortedList.lengthIs()<<endl;
    intUnsortedList.printList();
    //delete one item
    item =5;
    intUnsortedList.deleteItem(5);
    //print the list
    intUnsortedList.printList();
    //retrieve 4 and print whether found or not
    item =4;
    bool found =false;
    intUnsortedList.retrieveItem(item, found);
    if(found == true){cout<<"Item is found"<<endl;}
    else{cout<<"Item is not found"<<endl;}
    return 0;
}
