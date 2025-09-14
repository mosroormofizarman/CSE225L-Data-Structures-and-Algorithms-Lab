#include <iostream>

using namespace std;

int fibonacci(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n<2&&n>0)
    {
        return 1;
    }
    return fibonacci(n-2) + fibonacci(n-1);
}

int main()
{
    int a;
    cout << "Fibonacci series position: ";
    cin >> a;
    cout << "Fibonacci series position value: " << fibonacci(a) << endl;
    return 0;
}
