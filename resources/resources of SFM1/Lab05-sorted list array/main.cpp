#include <bits/stdc++.h>
#include "sortedtype.cpp"

using namespace std;

int main()
{
    int n;
    //create a list of size 5
    SortedType<int> intSL;
    //print the length of list
    //cout<<intSL.lengthIs()<<endl;
    //insert five items
    cout<<"Insert four items : "<<endl;
    for(int i =0; i<4; i++){
        cin>>n;
        intSL.insertItem(n);
    }
    //print list
    intSL.printList();
    //print the length of list
    cout<<"Length of list is "<<intSL.lengthIs()<<endl;
    //insert one item
    cout<<"Insert one item: "<<endl;
    cin>>n;
    intSL.insertItem(n);
    //print the list
    cout<<"Length of list is "<<intSL.lengthIs()<<endl;
    intSL.printList();
    //delete one item
    n =5;
    intSL.deleteItem(5);
    //print the list
    intSL.printList();
    //retrieve 4 and print whether found or not
    n =4;
    bool found =false;
    intSL.retrieveItem(n, found);
    if(found == true){cout<<"Item is found"<<endl;}
    else{cout<<"Item is not found"<<endl;}
}
