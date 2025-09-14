#include <iostream>
#include "dynarr.cpp"

using namespace std;

int main()
{
    int value1, array_size_int, array_size_double;
    double value2;

    cout << "Enter Array size for integer type array:  ";
    cin >> array_size_int;
    dynArr<int> INT(array_size_int);


    for(int i=0; i<array_size_int; i++)
    {
        cin >> value1;
        INT.setValue(i, value1);
    }

    cout << endl;
    cout << "Array elements for integer type array:  ";

    for(int i=0; i<array_size_int; i++)
    {
        cout << INT.getValue(i) << " ";
    }


    cout << endl << endl;
    cout << "Enter Array size for double type array:  ";
    cin >> array_size_double;
    dynArr<double> DOUBLE(array_size_double);


    for(int i=0; i<array_size_double; i++)
    {
        cin >> value2;
        DOUBLE.setValue(i, value2);
    }

    cout << endl;
    cout << "Array elements for double type array:  ";

    for(int i=0; i<array_size_double; i++)
    {
        cout << DOUBLE.getValue(i) << " ";
    }

    return 0;
}
