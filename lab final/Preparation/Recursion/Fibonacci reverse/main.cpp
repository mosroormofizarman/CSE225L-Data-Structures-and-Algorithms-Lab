#include <bits/stdc++.h>
using namespace std;

// Function to print the fibonacci
// series in reverse order.
void fibo(int n, int a, int b)
{
	if (n > 0) {

		// Function call
		fibo(n - 1, b, a + b);

		// Print the result
		cout << a << " ";
	}
}

// Driver Code
int main()
{
	int N = 10;
	fibo(N, 0, 1);
	return 0;
}
