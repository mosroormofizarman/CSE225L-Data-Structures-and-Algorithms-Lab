#include <iostream>
#include "complex.h"

using namespace std;

int main()
{
    double x1, y1, x2, y2;

    cin >> x1 >> y1;
    Complex com1(x1,y1);

    cin >> x2 >> y2;
    Complex com2(x2,y2);

    Complex mul = com1 * com2;
    mul.Print();

    cout << (com1 != com2);
    return 0;
}
