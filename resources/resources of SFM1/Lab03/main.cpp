#include <bits/stdc++.h>
#include "dynarr.cpp"
#include "complex.cpp"

using namespace std;

void dynarr1()
{
    dynArr<int> d1(5);
    cout<<"enter five values : "<<endl;
    for(int i =0; i<5; i++)
    {
        int a;
        cin>>a;
        d1.setValue(i,a);
    }
    cout<<"The values are: "<<endl;
    for(int i =0; i<5; i++)
    {
        cout<<d1.getValue(i)<<" , ";
    }
}

void complex1()
{
    Complex com1(2,3), com2(2.5, 4.5);
    Complex com3 = com1 + com2;
    com3.print();
    com3 = com2 - com1;
    com3.print();
}


int main()
{
    complex1();
    //dynarr1();
    return 0;
}
