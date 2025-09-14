#include<iostream>
#include <stack>

using namespace std;


bool isPalindrome(string s)
{
	int length = s.size();

	stack <char> str;

	int i, mid = length / 2;

	for (i = 0; i < mid; i++)
    {
		str.push(s[i]);
	}

	if (length % 2 != 0)
    {
		i++;
	}

	char pal1;

	while (s[i] != '\0')
	{
		pal1 = str.top();
		str.pop();

        if (pal1 != s[i])
        {
            return false;
        }
		i++;
	}
    return true;
}

int main()
{
	string s;

	cout << "Insert a string: ";
	cin >> s;

	if (isPalindrome(s)) {
		cout << "string is a Palindrome ";
	}
	else {
		cout << "string is not a Palindrome ";
	}

	return 0;
}


