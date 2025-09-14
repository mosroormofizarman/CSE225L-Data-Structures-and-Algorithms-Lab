#include <iostream>
#include "dynarr.cpp"

using namespace std;

int main()
{
    int value1, array_int, array_double;
    double value2;

    cout << "Enter Array size for integer type array:  ";
    cin >> array_int;
    dynArr<int> obj1(array_int);


    for(int i=0; i<array_int; i++)
    {
        cout << "Enter "<< i+1 << " no. element of the array: ";
        cin >> value1;
        obj1.setValue(i, value1);
    }

    cout << "Array elements for integer type array:  ";

    for(int i=0; i<array_int; i++)
    {
        cout << obj1.getValue(i) << " ";
    }

    cout << "\nEnter Array size for double type array:  ";
    cin >> array_double;
    dynArr<double> obj12(array_double);


    for(int i=0; i<array_double; i++)
    {
        cout << "Enter "<< i+1 << " no. element of the array: ";
        cin >> value2;
        obj12.setValue(i, value2);
    }

    cout << "Array elements for double type array:  ";

    for(int i=0; i<array_double; i++)
    {
        cout << obj12.getValue(i) << " ";
    }

    return 0;
}
