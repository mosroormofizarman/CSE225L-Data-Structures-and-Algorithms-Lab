#include <bits/stdc++.h>
#include "stacktype.cpp"
using namespace std;

int main()
{
    //create a stack of integers
    StackType<int> intStack;
    int n;
    //check if the stack is empty
    if(intStack.IsEmpty()){cout<<"Stack is empty"<<endl;}
    else{cout<<"Stack is not empty"<<endl;}
    //push 4 items
    cout<<"Push 5 items : "<<endl;
    for(int i =0; i<5; i++){
        cin>>n;
        intStack.Push(n);
    }
    //check if the stack is empty
    if(intStack.IsEmpty()){cout<<"Stack is empty"<<endl;}
    else{cout<<"Stack is not empty"<<endl;}
    //push another item
    try{
        intStack.Push(6);
    }
    catch(FullStack e){
        cout<<"Stack is full"<<endl;
    }
    //print top item
    cout<<"top item of stack : "<<intStack.Top()<<endl;
    //print stack
    intStack.PrintStack();
    //pop another item
    try{
        intStack.Pop();
    }
    catch(EmptyStack e){
        cout<<"Stack is empty"<<endl;
    }
}
