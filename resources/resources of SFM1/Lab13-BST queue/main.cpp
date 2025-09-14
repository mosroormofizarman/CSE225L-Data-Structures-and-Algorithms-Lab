#include <bits/stdc++.h>
#include "binarysearchtree.cpp"

using namespace std;

int main()
{
    TreeType<int> tr;
    if(tr.IsEmpty()){
        cout<<"Tree is empty"<<endl;
    }
    cout<<"Insert ten items : "<<endl;
    for(int i=0; i<10; i++){
        int a;
        cin>>a;
        tr.InsertItem(a);
    }
    if(!tr.IsEmpty()){
        cout<<"Tree is not empty"<<endl;
    }
    cout<<"Tree length is ="<<tr.LengthIs()<<endl;
    int item =9;
    bool found = true;
    tr.RetrieveItem(item,found);
    if(found==true){
        cout<<"Item is found"<<endl;
    }
    tr.Print();

}
