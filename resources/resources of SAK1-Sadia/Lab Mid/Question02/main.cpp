#include<iostream>
using namespace std;

int main()
{
    int arr1[6] = {16, 3, 9, 7, 11, 10};
    int arr2[6] = {9, 15, 17, 3, 8,0};
    int new_arr[6];

    cout << "First list: ";
    for(int i=0; i < 6; i++)
    {
        cout << arr1[i] << " ";
    }

    cout << endl << "Second list: ";
    for(int i=0; i < 6; i++)
    {
        cout << arr2[i] << " ";
    }
    for(int i=0; i < 6; i++)
    {
        new_arr[i] = arr1[i] + arr2[i];
        cout << arr1[i] << " + " << arr2[i] << " = " << new_arr[i] << endl;
    }
    cout<<"Final list: ";
    for(int i=0; i < 6; i++)
    {
        cout << new_arr[i]<< " ";
    }
    return 0;
}
