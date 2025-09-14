#include <iostream>
using namespace std;

// Function Definition of findMean function
float findMean(int A[], int N)
{
	if (N == 1)
		return (float)A[N-1];
	else
		return ((float)(findMean(A, N-1)*(N-1) +
									A[N-1]) / N);
}

// Main Calling Function
int main()
{
	float Mean = 0;
	int A[] = {1, 2, 3, 4, 5};
	int N = sizeof(A)/sizeof(A[0]);
	cout << " "<< findMean(A, N);
	return 0;
}

// this code is contributed by shivanisinghss2110
