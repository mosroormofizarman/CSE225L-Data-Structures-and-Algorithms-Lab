#include <iostream>

using namespace std;
int factorial(int n);
int main()
{
    int var;
    cout << "Please enter a number" << endl;
    cin>>var;
    int result = factorial(var);
    cout<<"the factorial of "<<var<<" is: "<<result<<endl;
    retur

int factorial(int n)
{
    if(n==1 || n==0)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}
