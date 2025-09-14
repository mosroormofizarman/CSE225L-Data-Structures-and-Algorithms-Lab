#include <iostream>
#include <algorithm>
#include "unsortedtype.cpp"

using namespace std;

int main() {
    int m, n, num;

    UnsortedType<int> ob1;

    cout << "Enter the first sequence size: ";
    cin >> m;

    for(int i=0; i<m; i++)
    {
        if(!ob1.IsFull())
        {
            cin >> num;
            ob1.InsertItem(num);
        }

    }
    cout << endl;
    UnsortedType<int> ob2;

    cout << "Enter the second sequence size: ";
    cin >> n;

    for(int i=0; i<n; i++)
    {
        if(!ob2.IsFull())
        {
            cin >> num;
            ob2.InsertItem(num);
        }
    }

    cout << endl << endl;
    UnsortedType<int> ob3;

    int *arr1 = new int[m];
    int *arr2 = new int[n];
    int *arr3 = new int[m+n];

    for(int i = 0; i < m; i++)
    {
        ob1.GetNextItem(arr1[i]);
    }

    for(int i = 0; i < n; i++)
    {
        ob2.GetNextItem(arr2[i]);
    }

    int i = 0, j=0, k=0;

    while(i < m && j < n){
        if(arr1[i] < arr2[j]){
            arr3[k] = arr1[i];
            k++;
            i++;
        }else{
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }

    while(i < m){
        arr3[k] = arr1[i];
        k++;
        i++;
    }

    while(j < n){
        arr3[k] = arr2[j];
        k++;
        j++;
    }
    bool b = true;
    while(b) {
        b = false;
        for (int i=0; i<(m+n)-1; i++)
        {
            int temp = 0;
            for (int i=0; i<(m+n)-1; i++)
            {
                if (arr3[i] > arr3[i + 1]) {
                    temp = arr3[i];
                    arr3[i] = arr3[i + 1];
                    arr3[i + 1] = temp;
                    b = true;
                }
            }
        }
    }
    int new_arr[m+n];
    int tem = -1;
    for(int i = (m+n)-1; i>-1; i--)
    {
        num = arr3[i];
        for(int j=0; j<m+n; j++)
        {

            if(num!=NULL && tem<j)
            {
                new_arr[j] = num;
                num = NULL;
                tem++;
            }
        }
    }

    ob3.~UnsortedType();
    for(int i=0; i<m+n; i++)
    {
        if(!ob3.IsFull())
        {
            ob3.InsertItem(new_arr[i]);
        }
    }

    for(int i=0; i<ob3.LengthIs(); i++)
    {
        ob3.GetNextItem(num);
        cout << num << " ";
    }

    return 0;
}
