#include <iostream>

using namespace std;

void findElement(int a, int arr[])
{
    for(int i=0; i<=len(arr); i++)
    {
        if(a = arr[i])
        {
            cout << "found";
        }
        else
        {
           cout << "not found";
        }
    }
}

int main()
{
    int a = 40;
    int arr[] = {10,20,30,40,50,60};
    cout << sizeof(arr);
    findElement(a, arr);
    return 0;
}

