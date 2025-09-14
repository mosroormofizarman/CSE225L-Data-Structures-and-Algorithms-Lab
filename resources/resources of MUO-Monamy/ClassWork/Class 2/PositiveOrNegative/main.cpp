#include <iostream>

using namespace std;

void EnvNum(int number)
{
    if(number==0)
    {
        cout << "The number is zero";
    }
    else if(number>0)
    {
        cout << "The number is positive";
    }
    else
    {
        cout << "The number is negative";
    }
}

int main()
{
    int number;
    cout << "Enter an integer number:" << endl;
    cin >> number;
    EnvNum(number);
    return 0;
}
