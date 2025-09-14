#include "dynarr.h"
#include <iostream>

using namespace std;

int main()
{
    int v;
    DynArr myobj;
    DynArr myobj2(5);

    myobj2.setValue(0,2);
    cout << myobj2.getValue(0) << endl;


    cout << "Please enter a number: " << endl;
    for(int counter=0; counter<5; counter++)
    {

        cin >> v;
        myobj2.setValue(counter,v);
    }

    cout << "The elements are: " << endl;
    for(int counter=0; counter<5; counter++)
    {
        cout << myobj2.getValue(counter);
        cout << " ";
    }
    return 0;
}
