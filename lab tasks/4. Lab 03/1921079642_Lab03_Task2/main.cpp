#include <iostream>
#include "complex.cpp"

using namespace std;

int main()
{
    double r1, i1, r2, i2;

    cout << "Enter first real number: ";
    cin >> r1;

    cout << "Enter first imaginary number: ";
    cin >> i1;

    Complex obj1(r1,i1);

    cout << "Enter second real number: ";
    cin >> r2;

    cout << "Enter second imaginary number: ";
    cin >> i2;

    Complex obj2(r2,i2);

    Complex mul = obj1 * obj2;
    mul.Print();

    cout << (obj1 != obj2);
    return 0;
}
