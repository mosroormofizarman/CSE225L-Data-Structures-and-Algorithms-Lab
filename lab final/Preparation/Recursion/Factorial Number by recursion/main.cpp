#include <iostream>

using namespace std;

int factorial(int n)
{
    if(n<=1)
    {
        return 1;
    }
    return n * factorial(n-1);
}

int main()
{
    int a;
    cout << "Integer Number for factorial: ";
    cin >> a;
    cout << "Factorial: " << factorial(a) << endl;
    return 0;
}
