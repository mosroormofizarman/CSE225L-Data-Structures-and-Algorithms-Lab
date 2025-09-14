//sum of the digits of an integer using recursion

#include<iostream>
using namespace std;
int add(int n);
int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Sum =  " << add(n);
    return 0;
}
int add(int n)
{
    if(n != 0)
        return n + add(n - 1);
    return 0;
}


//function
#include <iostream>
using namespace std;

    int sumDigits(int num1,int n)
	{
        int sum = 0;
        while (num1 != 0)
		{
            sum += num1 % 10;
            num1 /= 10;
        }
        return sum;
    }

int main()
{
	int num1,sum,n;
	sum=0;
    cout << "\n\n Compute the sum of the digits of an integer:\n";
	cout << "-------------------------------------------------\n";
	cout << " Input any number: ";
	cin>> num1;
	n=num1;
	cout<<" The sum of the digits of the number "<<n<<" is: " << sumDigits(num1,n) <<endl;
	}#include <iostream>
using namespace std;

    int sumDigits(int num1,int n)
	{
        int sum = 0;
        while (num1 != 0)
		{
            sum += num1 % 10;
            num1 /= 10;
        }
        return sum;
    }

int main()
{
	int num1,sum,n;
	sum=0;
    cout << "\n\n Compute the sum of the digits of an integer:\n";
	cout << "-------------------------------------------------\n";
	cout << " Input any number: ";
	cin>> num1;
	n=num1;
	cout<<" The sum of the digits of the number "<<n<<" is: " << sumDigits(num1,n) <<endl;
	}
