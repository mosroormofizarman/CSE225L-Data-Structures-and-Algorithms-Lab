#include <iostream>

using namespace std;

int main()
{
    int number, factorial=1;

    cout << "Enter an integer number to find its factorial: ";
    cin >> number;

    for(int i=1; i<=number; i++)
    {
        factorial *= i;
    }
    cout << "Factorial of " << number << " is : " << factorial;

    return 0;
}
