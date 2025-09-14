#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double sum = 0,a;
    int n, i;
    cout << "\n\n Find the sum of the series 1 + 1/2 + 1/4 + 1/8 +.....+ 1/2^n:\n";

    cout << " Enter the serial positive element  ";
    cin >> n;
    for (i = 0; i <= n; ++i)
	{
        a = 1 / pow(2,i);
        cout << "1/" << 2<< "^" << i << " = " << a << endl;
        sum += a;
    }
    cout << " The sum of the above series is: " << sum << endl;
}
