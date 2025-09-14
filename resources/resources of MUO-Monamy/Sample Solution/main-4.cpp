#include "DynArr.h"
#include <iostream>

using namespace std;

int main()
{
    //classname objectname();
    DynArr array1;
    DynArr array2(5);
    int value;
    for(int ind=0; ind<5; ind++)
    {
        cout<<"please enter the element"<<endl;
        cin>>value;
        array2.setValue(ind,value);
    }
    cout<<"the element of the array are:"<<endl;
    for(int ind=0; ind<5; ind++)
    {
        cout<<array2.getValue(ind)<<" ";
    }
    return 0;
}
