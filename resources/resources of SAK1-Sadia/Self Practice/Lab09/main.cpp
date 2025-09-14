#include <iostream>
#include "quetype.cpp"

using namespace std;

void EmptyOrNot(QueType<int>);
void FullOrNot(QueType<int>);

int main()
{
    int size, num, temp, n;
    string str;

    cout << "Enter the size number for queue:   ";
    cin >> size;

    QueType<int> q1(size);
    QueType<int> q2(size);

    EmptyOrNot(q1);

    cout<<"How many items you want to enqueue:  ";
    cin >> size;
    for(int i=0; i<size; i++)
    {
        cin >> num;
        q1.Enqueue(num);
    }

    EmptyOrNot(q1);

    FullOrNot(q1);

    cout<<"Enter another item for enqueue :";
    cin>>num;
    try
    {
        q1.Enqueue(num);
    }
    catch(FullQueue e)
    {
        cout<<"Queue Overflow"<<endl;
    }

    while(!q1.IsEmpty())
    {
        q1.Dequeue(temp);
        cout << temp << " ";
        q2.Enqueue(temp);
    }
    while(!q2.IsEmpty())
    {
        q2.Dequeue(temp);
        q1.Enqueue(temp);
    }

    cout << endl;

    FullOrNot(q1);

    cout<<"Enter another item for enqueue :";
    cin>>num;
    try
    {
        q1.Enqueue(num);
    }
    catch(FullQueue e)
    {
        cout<<"Queue Overflow"<<endl;
    }

    cout << "How many items you want to dequeue:    ";
    cin >> size;
    for(int i=0; i<size; i++)
    {
        q1.Dequeue(temp);
    }

    while(!q1.IsEmpty())
    {
        q1.Dequeue(temp);
        cout << temp << " ";
        q2.Enqueue(temp);
    }
    while(!q2.IsEmpty())
    {
        q2.Dequeue(temp);
        q1.Enqueue(temp);
    }

    cout << endl;
    cout << "How many items you want to dequeue:    ";
    cin >> size;
    for(int i=0; i<size; i++)
    {
        q1.Dequeue(temp);
    }

    EmptyOrNot(q1);

    cout<<"Dequeued one more item:  " << endl;
    try
    {
        q1.Dequeue(temp);
    }
    catch(EmptyQueue e)
    {
        cout<<"Queue Underflow"<<endl;
    }

    q1.~QueType();

    cout<<"Enter an integer number: ";
    cin>>n;

    QueType<string> q3;
    q3.Enqueue("1");

    for(int i=0; i<n; i++)
    {
        q3.Dequeue(str);
        cout << str << endl;
        q3.Enqueue(str + "0");
        q3.Enqueue(str + "1");
    }
    return 0;
}
void EmptyOrNot(QueType<int> q)
{
    if(q.IsEmpty())
        cout<<"Queue is Empty"<<endl;
    else
        cout<<"Queue is not Empty"<<endl;
}
void FullOrNot(QueType<int> q)
{
    if(q.IsFull())
        cout<<"Queue is Full"<<endl;
    else
        cout<<"Queue is not full"<<endl;
}
