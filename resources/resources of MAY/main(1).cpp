#include <iostream>

using namespace std;

int main()
{
    cout << "Task 1" << endl;

    int n,n1;

    cout<<"Enter column size: "<<endl;
    cin>>n;

    cout<<"Enter row size: "<<endl;
    cin>>n1;

    int arr[n][n1];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n1;j++)
        {
            cout<<"Enter elements for: "<<i<<j<<" : ";
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n1;j++)
        {
            cout<<"Elements are "<<i<<j<<" : "<<arr[i][j]<<endl;

        }
    }

    int sum=0;
    int avg;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n1;j++)
        {
            sum=sum+arr[i][j];
        }
    }

    cout<<"Sum of the number is: "<<sum<<endl;

    avg= sum/(n*n1);

    cout<<"average of the number is: "<<avg;




    return 0;
}
