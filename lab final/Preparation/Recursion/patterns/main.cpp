// C++ code to demonstrate star pattern
#include <iostream>
using namespace std;

// function to print a row
void printn(int num)
{
	// base case
	if (num == 0)
		return;
	cout << "* ";

	// recursively calling printn()
	printn(num - 1);
}

// function to print the pattern
void pattern(int n, int i)
{
	// base case
	if (n == 0)
		return;
	printn(i);
	cout << endl;

	// recursively calling pattern()
	pattern(n - 1, i + 1);
}

// driver function
int main()
{
	int n = 5;
	pattern(n, 1);
	return 0;
}
/*
// C++ code to demonstrate star pattern

#include <iostream>
using namespace std;

// function to print spaces
void print_space(int space)
{
	// base case
	if (space == 0)
		return;
	cout << " "
		<< " ";

	// recursively calling print_space()
	print_space(space - 1);
}

// function to print asterisks
void print_asterisk(int asterisk)
{
	// base case
	if (asterisk == 0)
		return;
	cout << "* ";

	// recursively calling print_asterisk()
	print_asterisk(asterisk - 1);
}

// function to print the pattern
void pattern(int n, int num)
{
	// base case
	if (n == 0)
		return;
	print_space(n - 1);
	print_asterisk(num - n + 1);
	cout << endl;

	// recursively calling pattern()
	pattern(n - 1, num);
}

// driver function
int main()
{
	int n = 5;
	pattern(n, n);
	return 0;
}

*/

/*
// C++ code to demonstrate star pattern

#include <iostream>
using namespace std;

// function to print spaces
void print_space(int space)
{
	// base case
	if (space == 0)
		return;
	cout << " ";

	// recursively calling print_space()
	print_space(space - 1);
}

// function to print asterisks
void print_asterisk(int asterisk)
{
	// base case
	if (asterisk == 0)
		return;
	cout << "* ";

	// recursively calling asterisk()
	print_asterisk(asterisk - 1);
}

// function to print the pattern
void pattern(int n, int num)
{
	// base case
	if (n == 0)
		return;
	print_space(n - 1);
	print_asterisk(num - n + 1);
	cout << endl;

	// recursively calling pattern()
	pattern(n - 1, num);
}

// driver function
int main()
{
	int n = 5;
	pattern(n, n);
	return 0;
}

*/

/*
// C++ code to demonstrate printing pattern of numbers

#include <iostream>
using namespace std;

// function to print a row
void print_row(int no, int val)
{
	// base case
	if (no == 0)
		return;
	cout << val << " ";

	// recursively calling print_row()
	print_row(no - 1, val);
}

// function to print the pattern
void pattern(int n, int num)
{
	// base case
	if (n == 0)
		return;
	print_row(num - n + 1, num - n + 1);
	cout << endl;

	// recursively calling pattern()
	pattern(n - 1, num);
}
int main()
{
	int n = 5;
	pattern(n, n);
}

*/
/*
// C++ code to demonstrate printing pattern of numbers

#include <iostream>
using namespace std;

// function to print a row
int print_row(int ct, int num)
{
	// base case
	if (num == 0)
		return ct;
	cout << ct << "\t";

	// recursively calling print_row()
	print_row(ct + 1, num - 1);
}

// function to print the pattern
void pattern(int n, int count, int num)
{
	// base case
	if (n == 0)
		return;
	count = print_row(count, num);
	cout << endl;

	// recursively calling pattern()
	pattern(n - 1, count, num + 1);
}

// driver function
int main()
{
	int n = 5;
	pattern(n, 1, 1);
}

*/
/*
// C++ code to demonstrate printing pattern of alphabets

#include <iostream>
using namespace std;

// function to print a row
void print_row(int no, int val)
{
	// base case
	if (no == 0)
		return;
	cout << (char)(val + 64) << " ";

	// recursively calling print_row()
	print_row(no - 1, val);
}

// function to print the pattern
void pattern(int n, int num)
{
	// base case
	if (n == 0)
		return;
	print_row(num - n + 1, num - n + 1);
	cout << endl;

	// recursively calling pattern()
	pattern(n - 1, num);
}
int main()
{
	int n = 5;
	pattern(n, n);
}

*/

/*
#include <iostream>
using namespace std;

// function to print a row
int print_row(int ct, int num)
{
	// base case
	if (num == 0)
		return ct;
	cout << (char)(ct + 64) << " ";

	// recursively calling print_row()
	print_row(ct + 1, num - 1);
}

// function to print the pattern
void pattern(int n, int count, int num)
{
	// base case
	if (n == 0)
		return;
	count = print_row(count, num);
	cout << endl;

	// recursively calling pattern()
	pattern(n - 1, count, num + 1);
}

// driver function
int main()
{
	int n = 5;
	pattern(n, 1, 1);
}

*/
