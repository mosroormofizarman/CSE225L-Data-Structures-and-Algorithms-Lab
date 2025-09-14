#include <iostream>
#include "box.cpp"

using namespace std;

int main()
{
    double height, weigth, depth;

    cout << "Enter the height of the box: ";
    cin >> height;
    cout << "Enter the weight of the box: ";
    cin >> weigth;
    cout << "Enter the depth of the box: ";
    cin >> depth;

    Box obj(height, weigth, depth);
    cout << "The volume of the box is: " << obj.volume() << " unit^3";

    return 0;
}
