#include <iostream>
#include <math.h>

using namespace std;

int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if(n == 1)
    {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int sumOfDigits(int x)
{
    if (x == 0)
    {
        return 0;
    }
    return (x % 10 + sumOfDigits(x / 10));
}

int findMin(int a[], int size)
{
    if (size == 1)
    {
        return a[0];
    }
    return min(a[size - 1], findMin(a, size - 1));
}

int DecToBin(int dec)
{
    if (dec == 0)
    {
        return 0;
    }
    else
    {
        return (dec % 2 + 10 * DecToBin(dec / 2));
    }
}

double sumOfSeries(int n)
{
    if(n == 0)
    {
        return 1.0;
    }
    return (1.0 / (double) (pow(2, n))) + sumOfSeries(n - 1);
}

int main()
{
    cout << "9th Fibonacci term is " << fib(9) << endl;

    cout << "7 factorial is " << factorial(7) << endl;

    cout << "Sum of digits of 420420 is " << sumOfDigits(420420) << endl;

    int arr[5] = {20, 40, 60, 80, 100};
    cout << "Minimum number in the Array {20, 40, 60, 80, 100} is " << findMin(arr, 5) << endl;

    cout << "Binary Conversion of 10 is " << DecToBin(10) << endl;

    cout << "Sum of Series 1 + 1 / 2 + 1 / 4 + 1 / 8 + .... + 1 / 2 ^ n for n = 4 is " << sumOfSeries(4) << endl;

    return 0;
}
