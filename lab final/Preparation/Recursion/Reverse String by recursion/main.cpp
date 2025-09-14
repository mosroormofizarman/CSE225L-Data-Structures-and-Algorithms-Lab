#include <iostream>

using namespace std;

void reverse_string(string s)
{
    if(s.size()==0)
    {
        return;
    }
    reverse_string(s.substr(1));
    cout << s[0];
}

int main()
{
    string str;
    cout << "String for reversing: ";
    cin >> str;
    reverse_string(str);
    return 0;
}
