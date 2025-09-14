#include <iostream>
#include "dynarr.h"
#include "dynarr.cpp"
using namespace std;

int main()
{/*
    cout << "Please enter the size of the array: " << endl;
    int sizer;
    cin>>sizer;
    dynArr arr(sizer);

    int val;
    for(int iterate=0; iterate<sizer; iterate++)
    {
        cout<<"please enter an element for array["<<iterate<<"]"<<endl;
        cin>>val;
        arr.setValue(iterate,val);
    }
    for(int iterate=0; iterate<sizer; iterate++)
    {
        cout<<"element of array["<<iterate<<"] = "<<arr.getValue(iterate)<<endl;
    }

    arr.~dynArr();*/

    cout << "template class starts here:" << endl;
    cout << "Please enter the size of the array: " << endl;
    int siz;
    cin>>siz;
    dynArr<int> arr2(siz);
    int val;
    for(int iterate=0; iterate<siz; iterate++)
    {
        cout<<"please enter an element for array["<<iterate<<"]"<<endl;
        cin>>val;
        arr2.setValue(iterate,val);
    }
    for(int iterate=0; iterate<siz; iterate++)
    {
        cout<<"element of array["<<iterate<<"] = "<<arr2.getValue(iterate)<<endl;
    }

    arr2.~dynArr();
    return 0;
}
