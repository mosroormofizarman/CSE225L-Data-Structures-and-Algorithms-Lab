#include <iostream>
#include "stacktype.cpp"

using namespace std;

void EmptyorNot(StackType <int>);
void FullorNot(StackType <int>);
void Print(StackType <int>,StackType <int>);
bool isBalanced(string);

int main()
{
    StackType<int> s;
    int size, values;
    string str;

    EmptyorNot(s);

    cout << "How many elements you want to enter:   ";
    cin >> size;
    cout << "Enter elements in stack:   ";
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
        cout << "Stack is already full!" << endl;
    }

    EmptyorNot(s);

    FullorNot(s);

    StackType<int> s1 ;
    Print(s,s1);
    cout << endl;

    try
    {
        cout << "Push another element in stack: ";
        cin >> values;
        s.Push(values);
    }
    catch(FullStack f)
    {
        cout << "Stack is already full!" << endl;
    }

    Print(s,s1);
    cout << endl;

    FullorNot(s);

    cout << "How many items you want to Pop:    ";
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
        cout << "Stack is already empty!" << endl;
    }

    cout << endl;
    cout << "The top element:";
    cout << s.Top() << endl;

    cout << "How many parentheses you want to insert:   ";
    cin >> size;
    cout << "Enter a string of Parenthesis: ";
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

void EmptyorNot(StackType <int> s)
{
    if(s.IsEmpty())
        cout << "Stack is Empty" << endl;
    else
        cout << "Stack is not Empty" << endl;
}
void FullorNot(StackType <int> s)
{
    if(s.IsFull())
        cout << "Stack is full" << endl;
    else
        cout << "Stack is not full" << endl;
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
