#include <bits/stdc++.h>

#include"sortedlist.cpp"
#include"sortedlist.h"

using namespace std;

int main()
{
    SortedList<int> s1,s2;
    int n=1;

    cout<<"Enter Number in list 1: "<<endl;
    while(true){
        cin>>n;
        if(n==0){break;}
        s1.insertItem(n);
    }
    cout<<"Enter Number in list 2: "<<endl;
    while(true){
        cin>>n;
        if(n==0){break;}
        s2.insertItem(n);
    }
    s1.printList();
    s2.printList();

    cout<<"Common items : ";
    while(s1.hasNext()){
        int a = s1.nextItem();
        if(s2.searchItem(a)){
            cout<<a<<"\t";
        }
    }
    cout<<endl;



}

