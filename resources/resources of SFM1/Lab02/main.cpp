#include <iostream>
#include "dynarr.cpp"
#include "dynarr2.cpp"
using namespace std;

int main()
{
    //for dynarr
    /*dynArr d1, d2(5);
    cout<<"enter five values : "<<endl;
    for(int i =0; i<5; i++)
    {
        int a;
        cin>>a;
        d2.setValue(i,a);
    }
    cout<<"The values are: "<<endl;
    for(int i =0; i<5; i++)
    {
        cout<<d2.getValue(i)<<" , ";
    }
    */

    //new size allocate
    dynArr d3(4);
    d3.~dynArr();
    d3.allocate(1);
    d3.setValue(0,12);
    cout<<d3.getValue(0)<<endl;

    //for dynarr2
    int row, col;
    cout<<"\nenter row size : ";
    cin>>row;
    cout<<"enter column size : ";
    cin>>col;
    dynArr2 da(row,col);
    cout<<"enter values :"<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            int value;
            cin>>value;
            da.setValue(i,j,value);
        }

    }
    cout<<"The values are: "<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<da.getValue(i,j)<<" , ";
        }

    }
    return 0;
}
