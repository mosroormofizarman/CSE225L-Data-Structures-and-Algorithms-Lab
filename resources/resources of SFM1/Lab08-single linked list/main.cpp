#include "list.cpp"
#include<bits/stdc++.h>
using namespace std;

int main()
{
    SinglyLinkedList<int> sll;
    cout<<"Enter numbers : "<<endl;
    int n;
    while(true){
        cin>>n;
        if(n!=0){
            sll.insertAtStart(n);
        }else{
            break;
        }
    }
    cout<<"Printed the list : "<<endl;
    sll.display();
    cout<<"Insert 46 at position 3"<<endl;
    sll.insertAtPosition(46, 3);
    sll.display();
    cout<<"Starting number is deleted"<<endl;
    sll.deleteStart();
    sll.display();
    cout<<"Number of position 2 is deleted"<<endl;
    sll.deleteAtPosition(2);
    sll.display();
    cout<<"Get the value of position 2 = "<<sll.getValue(2)<<endl;
}
