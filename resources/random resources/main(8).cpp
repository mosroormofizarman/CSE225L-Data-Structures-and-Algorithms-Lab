//find the minimum element in an array of integers using recursion

#include<iostream>
using namespace std;
int main ()
{
    int arr[10], n, i, max, min;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "Enter the elements of the array : ";
    for (i = 0; i < n; i++)
        cin >> arr[i];

    min = arr[0];
    for (i = 0; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }

    cout << "Minimum element : " << min;
    return 0;
}




//function
#include <iostream>
using namespace std;
int findminimumElement(int arr[], int n){

   int temp = arr[0];
   for(int i=0; i<n; i++) {
      if(temp>arr[i]) {
         temp=arr[i];
      }
   }
   return temp;
}
int main() {
   int n;
   cout<<"Enter the size of array: ";
   cin>>n; int arr[n-1];
   cout<<"Enter array elements: ";
   for(int i=0; i<n; i++){
      cin>>arr[i];
   }
   int minimum = findminimumElement(arr, n);
   cout<<"Minimum Element is: "<<minimums;
   return 0;
}
