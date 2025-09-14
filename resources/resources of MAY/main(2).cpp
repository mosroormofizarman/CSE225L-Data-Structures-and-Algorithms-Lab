//name: Rahat Islam Akash
//Id: 1631239042
#include "Calculator.h"
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
int main()
{
    int m,n;
    char operation;
    cout<<"Enter 2 numbers: "<<endl;
    cin>>m;
    cin>>n;
    Calculator c1();
    Calculator c2(m,n);
    cout<<"select operation: "<<endl;
    cin>>operation;
    switch(operation){
     case '+': c2.add(m,n);break;
     case '-': c2.sub(m,n);break;
     case '*': c2.mul(m,n);break;
     case '/': c2.div(m,n);break;
    }


    return 0;
}
