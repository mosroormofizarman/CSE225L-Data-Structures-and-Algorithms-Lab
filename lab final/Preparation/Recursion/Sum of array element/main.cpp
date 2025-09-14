#include <stdio.h>

// Return sum of elements in A[0..N-1]
// using recursion.
int findSum(int A[], int N)
{
	if (N <= 0)
		return 0;
	return (findSum(A, N - 1) + A[N - 1]);
}

// Driver code
int main()
{
	int A[] = { 1, 2, 3, 4, 5 };
	int N = sizeof(A) / sizeof(A[0]);
	printf("%d", findSum(A, N));
	return 0;
}
