#include <iostream>;

using namespace std;
int main() {
    double x,y;
    char op;
    cout << "Enter Expression:";
    cin >> x >> op >> y;
    if (op = '+')
    {
        cout << "Result:" << x + y << endl;
    }
    else if (op = '-') {
        cout << "Result:" << x - y << endl;
    }
    else if (op = '*') {
        cout << "Result:" << x*y << endl;
    }
    else if (op = '/') {
        cout << "Result:" << x / y << endl;
    }


    else {
        return 0;
    }
}
