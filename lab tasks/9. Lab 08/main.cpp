#include <iostream>
#include "stacktype.cpp"

using namespace std;

void EmptyorNot(StackType <int> s)
{
    if(s.IsEmpty())
        cout << "\nStack is Empty";
    else
        cout << "\nStack is not Empty";
}
void FullorNot(StackType <int> s)
{
    if(s.IsFull())
        cout << "\nStack is full" << endl;
    else
        cout << "\nStack is not full" << endl;
}
void Print(StackType <int> s,StackType <int> s1)
{
    while(!s.IsEmpty())
    {
        s1.Push(s.Top());
        s.Pop();
    }
    while(!s1.IsEmpty())
    {
        s.Push(s1.Top());
        cout << s1.Top() << " ";
        s1.Pop();
    }
}
bool isBalanced(string s)
{
    StackType<char> st;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='(')
        {
            st.Push(s[i]);
        }
        if(st.IsEmpty())
        {
            return false;
        }
        if(s[i]==')')
        {
            st.Pop();
        }
    }
    return st.IsEmpty();
}

int main()
{
    StackType<int> s;
    int size, values;
    string str;

    EmptyorNot(s);

    cout << "\nItems: ";
    cin >> size;
    cout << "\nPush " << size <<" items:   ";
    try
    {
        for(int i = 0; i < size; i++)
        {
            cin >> values;
            s.Push(values);

        }
    }
    catch(FullStack f)
    {
        cout << "\nStack is full!" << endl;
    }

    EmptyorNot(s);

    FullorNot(s);

    StackType<int> s1 ;
    Print(s, s1);

    try
    {
        cout << "\nPush another item: ";
        cin >> values;
        s.Push(values);
    }
    catch(FullStack f)
    {
        cout << "\nStack is full!" << endl;
    }

    Print(s, s1);

    FullorNot(s);

    cout << "\nPop items: ";
    cin >> size;
    try
    {
        for(int i=0; i<size; i++)
        {
            cout << s.Top() << " ";
            s.Pop();
        }
    }
    catch(EmptyStack e)
    {
        cout << "\nStack is empty!" << endl;
    }

    cout << "\nTop item: ";
    cout << s.Top() << endl;

    cout << "\n\nNumber of  parentheses:   ";
    cin >> size;
    cout << "Enter a string of  parentheses :";
    for(int i = 0; i < size; i++)
    {
        cin >> str;
        if(isBalanced(str))
            cout << "Balanced" << endl;
        else
            cout << "Not balanced" << endl;
    }
    return 0;
}
