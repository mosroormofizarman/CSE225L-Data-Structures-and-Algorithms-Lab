#include <iostream>
#include "dynarr.h"

using namespace std;

int main()
{
    int value, array_size, array_resize, rows, columns;
    dynArr no_cons();

    cout << "Enter Array size:  ";
    cin >> array_size;
    dynArr cons(array_size); //Task01(1)


    for(int i=0; i<array_size; i++)
    {
        cin >> value;
        cons.setValue(i, value);//Task01(2)
    }

    cout << endl;
    cout << "Array elements:  ";

    for(int i=0; i<array_size; i++)
    {
        cout << cons.getValue(i) << " ";//Task01(3)
    }

    cout << endl << endl;
    cons.~dynArr();
    cout << "Change Array size:  ";
    cin >> array_resize;
    cons.allocate(array_resize);

    for(int i=0; i<array_resize; i++)
    {
        cin >> value;
        cons.setValue(i, value);
    }

    cout << endl;
    cout << "Array elements:  ";

    for(int i=0; i<array_resize; i++)
    {
        cout << cons.getValue(i) << " ";//Task02
    }

    cout << endl << endl;
    cons.~dynArr();
    cout << "Rows:  ";
    cin >> rows;
    cout << endl << "Columns:  ";
    cin >> columns;

    cons.twoDarray(rows, columns);

    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<columns; j++)
        {
            cin >> value;
            cons.settwoDarrayValue(i, j, value);;
        }
    }

    cout << endl;
    cout << "Array elements:  " << endl;
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<columns; j++) {
            cout << cons.gettwoDarrayValue(i, j) << " ";//Task03
        }
        cout << endl;
    }

    return 0;
}
