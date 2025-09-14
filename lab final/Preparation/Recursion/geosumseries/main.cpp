#include <bits/stdc++.h>
using namespace std;

// function to find the sum of given series
double sum(int n)
{
	// base case
	if (n == 0)
		return 1;

	// calculate the sum each time
	double ans = 1 / (double)pow(3, n) + sum(n - 1);

	// return final answer
	return ans;
}

// Driver code
int main()
{

	// integer initialisation
	int n = 5;

	cout << sum(n) << endl;

	return 0;
}
