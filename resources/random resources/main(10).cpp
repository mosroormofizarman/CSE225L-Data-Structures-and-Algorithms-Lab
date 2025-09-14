//converts a decimal number to binary number using recursion

#include<iostream>
using namespace std;
int main ()
{
    int num, bin;
    cout << "Enter the number : ";
    cin >> num;
    cout << "The binary equivalent of " << num << " is ";
    while (num > 0)
    {
        bin = num % 2;
        cout << bin;
        num /= 2;
    }
    return 0;
}


//function
#include <iostream>
using namespace std;
int main()
{
int a[10], n, i;
cout<<"Enter the decimal number ";
cin>>n;
for(i=0; n>0; i++)
{
a[i]=n%2;
n= n/2;
}
cout<<"Binary number= ";
for(i=i-1 ;i>=0 ;i--)
{
cout<<a[i];
}
}
