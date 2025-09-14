#include <iostream>

using namespace std;

int main()
{
    int first_num, second_num;
    char operations;

    cout << "Enter the first integer number: ";
    cin >> first_num;
    cout << "Enter the second integer number: ";
    cin >> second_num;
    cout << "Enter the operation you want to perform(You have to insert '+' or '-' or '*'): ";
    cin >> operations;


    switch(operations)
    {
        case '+':
            {
               cout << "Addition of " << first_num << " & " << second_num << " is: " << first_num + second_num;
               break;
            }
        case '-':
            {
               cout << "Subtraction of " << first_num << " & " << second_num << " is: " << first_num - second_num;
               break;
            }
        case '*':
            {
               cout << "Multiplication of " << first_num << " & " << second_num << " is: " << first_num * second_num;
               break;
            }
        default:
            {
                cout << "Please insert the appropriate option.";
            }
    }

    return 0;
}
