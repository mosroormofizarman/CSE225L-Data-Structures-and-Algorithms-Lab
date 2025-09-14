#include <iostream>

using namespace std;

int main()
{
    int rows, columns;

	cout << "Enter an integer number for rows" << endl;
    cin >> rows;
    cout << "Enter an integer number for columns" << endl;
    cin >> columns;

	int **A = new int*[rows];

	int arr[rows];

    for (int i=0; i<rows; i++)
    {
        cin >> arr[i];
        A[i] = new int[arr[i]];
        for(int j=0; j<arr[i]; j++)
        {
            cin >> A[i][j];
        }
    }

    cout << endl;
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<arr[i]; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    delete [] A;

	return 0;
}
