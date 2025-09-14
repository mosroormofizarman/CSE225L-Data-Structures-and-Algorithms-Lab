#include <iostream>

using namespace std;

void PatternPrint(int number)
{
    for(int i=1; i<=number; i++)
    {
        for(int j=1; j<=number; j++)
        {
            if(i==1 || i==number || j==1 || j==number || i==j ||  j==number-i+ 1)
            {
                cout << "*";
            }

            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int number;
    cout << "Enter an integer number for star pattern:" << endl;
    cin >> number;
    PatternPrint(number);
    return 0;
}
