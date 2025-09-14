#include <iostream>
#include <stack>
#include <string>

using namespace std;

int operators(char c)
{
	if (c == '^')
    {
        return 3;
    }
	else if (c == '/' || c == '*')
    {
        return 2;
    }
	else if (c == '+' || c == '-')
    {
        return 1;
    }
	else
    {
        return -1;
    }
}

void infixToPostfix(string s)
{
	stack<char> st;
	string output;

	for (int i = 0; i < s.length(); i++)
    {
		char c = s[i];

		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
        {
            output += c;
        }
		else if (c == '(')
        {
            st.push('(');
        }
		else if (c == ')')
        {
			while (st.top() != '(')
            {
				output += st.top();
				st.pop();
			}
			st.pop();
		}

		else
        {
			while (!st.empty() && operators(s[i]) < operators(st.top()) || !st.empty() && operators(s[i]) == operators(st.top()))
            {
				output += st.top();
				st.pop();
			}
			st.push(c);
		}
	}

	while (!st.empty())
    {
		output += st.top();
		st.pop();
	}

	cout << "Output: " << output << endl;
}

int main()
{
    string str;

    cout << "Input: ";
    cin >> str;

	infixToPostfix(str);

	return 0;
}

