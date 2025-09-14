#include <iostream>
#include "dynArr.h"

using namespace std;




int main()
{

    dynArr <int> object(5);
    int size,value;
    cout<<"Enter the size of the array: "<<endl;
    cin>>size;
    for(int i=0;i<size;i++)

    {
        cin>>value;
        object.setValue(i,value);
    }


    cout<<"Entered values are: "<<endl;
    for(int i=0;i<size;i++)

    {


        cout<<object.getValue();
    }
    return 0;
}
