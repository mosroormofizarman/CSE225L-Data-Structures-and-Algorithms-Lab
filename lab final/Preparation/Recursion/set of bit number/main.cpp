#include <bits/stdc++.h>
using namespace std;

// Recursive function to find
// number of set bist in a number
int CountSetBits(int n)
{
	// Base condition
	if (n == 0)
		return 0;

	// If Least significant bit is set
	if((n & 1) == 1)
		return 1 + CountSetBits(n >> 1);

	// If Least significant bit is not set
	else
		return CountSetBits(n >> 1);
}

// Driver code
int main()
{
	int n = 21;

	// Function call
	cout << CountSetBits(n) << endl;

	return 0;
}
