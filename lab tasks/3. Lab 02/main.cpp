#include <iostream>
#include "dynarr.cpp"

using namespace std;

int main()
{
    int value, array_size, array_resize, rows, columns;
    dynArr no_cons(); //Task01(1)

    cout << "Enter Array size:  ";
    cin >> array_size;
    dynArr cons(array_size); //Task01(1)


    for(int i=0; i<array_size; i++)
    {
        cout << "Enter "<< i+1 << " no. element of the array: ";
        cin >> value;
        cons.setValue(i, value); //Task01(2)
    }

    cout << "Array elements:  ";

    for(int i=0; i<array_size; i++)
    {
        cout << cons.getValue(i) << " "; //Task01(3)
    }

    cons.~dynArr();
    cout << "\nChange Array size:  ";
    cin >> array_resize;
    cons.allocate(array_resize); //Task02

    for(int i=0; i<array_resize; i++)
    {
        cout << "Enter "<< i+1 << " no. element of the array: ";
        cin >> value;
        cons.setValue(i, value);
    }

    cout << "Array elements:  ";

    for(int i=0; i<array_resize; i++)
    {
        cout << cons.getValue(i) << " ";
    }

    cons.~dynArr();
    cout << "\nRows:  ";
    cin >> rows;
    cout << "Columns:  ";
    cin >> columns;

    cons.twoDarray(rows, columns); //Task03

    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<columns; j++)
        {
            cout << "Enter ["<< i+1 << "][" << j+1 << "] no. element of the array: ";
            cin >> value;
            cons.settwoDarrayValue(i, j, value);;
        }
    }

    cout << "Array elements:\n";
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<columns; j++) {
            cout << cons.gettwoDarrayValue(i, j) << " ";
        }
        cout << endl;
    }

    return 0;
}
