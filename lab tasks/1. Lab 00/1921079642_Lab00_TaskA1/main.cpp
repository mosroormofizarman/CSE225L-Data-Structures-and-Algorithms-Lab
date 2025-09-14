#include <iostream>

using namespace std;

int main()
{
    int first_num, second_num, sum=0;

    cout << "Enter the first integer number: ";
    cin >> first_num;
    cout << "Enter the second integer number: ";
    cin >> second_num;

    sum = first_num + second_num;
    cout << "Sum of the two integer numbers: " << sum;

    return 0;
}
