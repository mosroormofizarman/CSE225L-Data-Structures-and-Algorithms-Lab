#include <iostream>

using namespace std;

int SumOfDigit(int n)
{
    if(n==0)
    {
        return 0;
    }
    return (n%10 + SumOfDigit(n/10));
}

int main()
{
    int a;
    cin >> a;
    cout << SumOfDigit(a) << endl;
    return 0;
}
