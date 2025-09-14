#include <iostream>

using namespace std;

int main() {
    int rows, columns;

    cout << "Enter an integer number for rows: ";
    cin >> rows;
    cout << "Enter an integer number for columns: ";
    cin >> columns;

    int **A = new int*[rows];

    int rowSizes[rows];

    for (int i = 0; i < rows; i++)
    {
        cout << "Enter the number of elements for row " << i + 1 << ": ";
        cin >> rowSizes[i];
    }

    for (int i = 0; i < rows; i++)
    {
        A[i] = new int[rowSizes[i]];

        cout << "Enter elements for row " << i + 1 << ":\n";
        for (int j = 0; j < rowSizes[i]; j++)
        {
            cin >> A[i][j];
        }
    }

    cout << "\nThe array is:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rowSizes[i]; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    delete[] A;

    return 0;
}
