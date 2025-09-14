#include <iostream>

using namespace std;

int main()
{
    int rows, columns;

	cout << "Enter an integer number for rows: ";
    cin >> rows;
    cout << "Enter an integer number for columns: ";
    cin >> columns;

	char **A = new char*[rows];

    for (int i=0; i<rows; i++)
    {
        A[i] = new char[columns];
    }

    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<columns; j++)
        {
            cout << "Enter the number of elements for A[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> A[i][j];
        }
    }

    cout << "Elements of the array:\n";
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<columns; j++) {
            cout << A[i][j];
        }
        cout << endl;
    }

    delete [] A;

	return 0;
}

