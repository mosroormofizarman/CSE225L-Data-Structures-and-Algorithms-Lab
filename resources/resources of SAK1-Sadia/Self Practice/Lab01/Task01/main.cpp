#include <iostream>

using namespace std;

int main()
{
    int size;
    cout << "Enter an integer number for array size" << endl;
    cin >> size;
    int *A = new int[size];

    cout << "Enter items for the array A: " << endl;
    for (int i=0; i<size; i++)
    {
        cout << "A[" << i+1 << "] = ";
        cin >> A[i];
    }

    cout << endl << "Entered items for the array A: " << endl;
    for (int i=0; i<size; i++)
    {
        cout << A[i] << " ";
    }

    delete [] A;

    return 0;
}
