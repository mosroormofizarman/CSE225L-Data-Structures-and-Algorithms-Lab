#include <iostream>

using namespace std;

bool PrimeOrNot(int number)
{
    if(number<=1)
    {
        return false;
    }
    for(int i=2; i<=number/2; i++)
    {
        if((number%i)==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int number;
    cout << "Enter an integer number:" << endl;
    cin >> number;
    if(PrimeOrNot(number))
    {
        cout << "The number is prime";
    }
    else
    {
        cout << "The number is not prime";
    }
    return 0;
}
