#include <iostream>

using namespace std;

int main()
{
    int rows, columns;

	cout << "Enter an integer number for rows" << endl;
    cin >> rows;
    cout << "Enter an integer number for columns" << endl;
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
            cin >> A[i][j];
        }
    }

    cout << endl;
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
