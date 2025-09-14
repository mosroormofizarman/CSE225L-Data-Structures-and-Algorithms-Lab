#include <iostream>

using namespace std;

bool isPrime(int n)
{
    if(n == 0 || n == 1)
    {
        return false;
    }

    for(int i = 2; i <= n/2; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void isPrime()
{
    int count;
    cout << "Prime Numbers Between 300 to 500 are: ";
    for(int minimum=300; minimum<=500; minimum++)
    {
        count = 0;
        for(int i=2; i<=minimum/2; i++)
        {
            if(minimum % i == 0)
            {
                count++;
                break;
            }
        }
        if(count == 0 && minimum != 1)
        {
            cout << minimum << " ";
        }
    }
}

int main()
{
    int number, count;

    cout << "Enter an integer number to check whether it is prime or not: ";
    cin >> number;

    if(isPrime(number))
    {
        cout << number << " is a Prime Number.";
    }
    else
    {
        cout << number << " is not a Prime Number.";
    }

    cout << endl;
    isPrime();

    return 0;
}
