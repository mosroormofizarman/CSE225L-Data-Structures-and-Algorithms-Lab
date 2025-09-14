#include <iostream>
#include "unsortedtype.h"
#include "unsortedtype.cpp"

using namespace std;

int main()
{
    UnsortedType<int> list;

    int n,m,temp;
    cout<<"Input First Seq Size: ";
    cin>>n;
    cout<<"Enter the elements for sequence 1 : ";
    int arr1[n],seq1;
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    ;
    cout<<"Input Second Seq Size:";
    cin>>m;
    cout<<"Enter the elements for sequence 2 : ";
    int arr2[m];
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }
    int arr3[n+m];
    //merge first list
    for(int i=0;i<n;i++)
    {
        arr3[i]=arr1[i];
    }
    //merge second list
    for(int i=0,j=n;i<m;i++,j++)
    {
        arr3[j]=arr2[i];
    }

   //sort
    for (int j = 0; j < (n+m)-1; j++)
    {
        if (arr3[j] < arr3[j + 1])
        {
            int temp = arr3[j];
            arr3[j] = arr3[j + 1];
            arr3[j + 1] = temp;
            j = -1;
        }

    }
    //value pass
    for(int i=0;i<n+m;i++)
    {
        seq1=arr3[i];

        list.InsertItem(seq1);
    }
   //getting the value
    int x;
    cout<<"Full-List:";
    for(int i=0;i<m+n;i++)
    {
     list.GetNextItem(x);
     cout<<x<<" ";

    }


    return 0;
}
