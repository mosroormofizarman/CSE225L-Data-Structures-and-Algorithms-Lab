#include <iostream>
#include <string>
using namespace std;

void reverseString(string s)
{
    int length = s.size();
    string temp;
    if(length==0)
    {
        return;
    }
    reverseString(s.substr(1));
    for(int i=0; i<length; i++)
    {
        temp[i] = s[0];
    }

    if ((temp==s))
    {
		cout << "Palindrome ";
	}
	else
    {
		cout << "Not a Palindrome ";
	}
}

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;
    reverseString(str);
    return 0;
}
