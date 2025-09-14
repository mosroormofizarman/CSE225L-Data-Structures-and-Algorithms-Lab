#include<bits/stdc++.h>
using namespace std;

// Function to find the size of manipulated sequence
int removeConsecutiveSame(vector <string > v)
{
	int n = v.size();

	// Start traversing the sequence
	for (int i=0; i<n-1; )
	{
		// Compare the current string with next one
		// Erase both if equal
		if (v[i].compare(v[i+1]) == 0)
		{
			// Erase function delete the element and
			// also shifts other element that's why
			// i is not updated
			v.erase(v.begin()+i);
			v.erase(v.begin()+i);

			// Update i, as to check from previous
			// element again
			if (i > 0)
				i--;

			// Reduce sequence size
			n = n-2;
		}

		// Increment i, if not equal
		else
			i++;
	}

	// Return modified size
	return v.size();
}

// Driver code
int main()
{
	vector<string> v = { "tom", "jerry", "jerry", "tom"};
	cout << removeConsecutiveSame(v);
	return 0;
}

