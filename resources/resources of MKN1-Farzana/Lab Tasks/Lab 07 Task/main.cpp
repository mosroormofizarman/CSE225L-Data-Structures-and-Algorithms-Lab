#include <iostream>
#include <string>
#include "quetype.cpp"
using namespace std;
void EmptyorNot(QueType <int> &q)
{
    if(q.IsEmpty()==true)
        cout << "Queue is Empty" << endl;
    else
        cout << "Queue is not Empty" << endl;

}
void FullorNot(QueType <int> &q)
{
    if(q.IsFull()==true)
        cout << "Queue is Full" << endl;
    else
        cout << "Queue is not Full" << endl;

}
void Print(QueType <int> &q)
{
    QueType <int> aux;
    int item;
    while(!q.IsEmpty())
    {
        q.Dequeue(item);
        cout << item << " ";
        aux.Enqueue(item);
    }
    while(!aux.IsEmpty())
    {
        aux.Dequeue(item);
        q.Enqueue(item);
    }
}
void PrintBionary(int n)
{
    string temp,s1,s2;
    QueType <string> q1;
    q1.Enqueue("1");
    for(int i=0; i<n; i++)
    {
        q1.Dequeue(temp);
        cout << temp << "\n";
        s1=temp + "0";
        q1.Enqueue(s1);
        s2=temp + "1";
        q1.Enqueue(s2);

    }
}
int main()
{
    int q1,val;
    QueType <int> q(5);
    EmptyorNot(q);

    cout << "Enqueue four items: ";
    for(int i = 0; i < 4; i++)
    {
        cin >> q1;
        q.Enqueue(q1);

    }

    EmptyorNot(q);
    FullorNot(q);

    int q2;
    cout << "Enqueue another item: ";
    cin >> q2;
    q.Enqueue(q2);

    Print(q);
    cout << endl;

    FullorNot(q);

    int q3;
    cout << "Enqueue another item: ";
    cin >> q3;
    q.Enqueue(q3);

    q.Dequeue(val);
    q.Dequeue(val);

    Print(q);
    cout << endl;

    q.Dequeue(val);
    q.Dequeue(val);
    q.Dequeue(val);

    EmptyorNot(q);

    int f = val;
    q.Dequeue(val);
    cout << "The item dequeued: " << f << endl;

    int n;
    cout << "Enter a number: ";
    cin >> n;
    PrintBionary(n);


    return 0;
}
