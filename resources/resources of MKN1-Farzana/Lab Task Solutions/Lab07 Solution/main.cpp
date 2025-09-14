#include "QueType.h"
#include "QueType.cpp"
#include <iostream>

using namespace std;

int main()
{
    QueType<int> q1(5);
    QueType<int> q2(5);

    if(q1.IsEmpty())
        cout<<"Queue is Empty"<<endl;
    else
        cout<<"Queue is not Empty"<<endl;

        int num;
    cout<<"Enter 4 items : ";
    for(int i=0;i<4;i++)
    {
        cin>>num;
        q1.Enqueue(num);
    }


    if(q1.IsEmpty())
        cout<<"Queue is Empty"<<endl;
    else
        cout<<"Queue is not Empty"<<endl;

    if(q1.IsFull())
        cout<<"Queue is Full"<<endl;
    else
        cout<<"Queue is not full"<<endl;

        cout<<"Enter another item : ";
        cin>>num;
    q1.Enqueue(num);

    int temp;
    cout<<"Dequed items : \n";
    while(!q1.IsEmpty())
    {
        q1.Dequeue(temp);
        cout<<temp<<" ";
        q2.Enqueue(temp);
    }
    while(!q2.IsEmpty())
    {
        q2.Dequeue(temp);
        q1.Enqueue(temp);
    }
    cout<<endl;

    if(q1.IsFull())
        cout<<"Queue is Full"<<endl;
    else
        cout<<"Queue is not full"<<endl;

    try
    {
        cout<<"Enter another item :";
        cin>>num;
        q1.Enqueue(num);
    }
    catch(FullQueue e)
    {
        cout<<"Overflow"<<endl;
    }

    cout<<"After dequed items : ";
    q1.Dequeue(temp);
    q1.Dequeue(temp);

    while(!q1.IsEmpty())
    {
        q1.Dequeue(temp);
        cout<<temp<<" ";
        q2.Enqueue(temp);
    }
    while(!q2.IsEmpty())
    {
        q2.Dequeue(temp);
        q1.Enqueue(temp);
    }
    cout<<endl;

    q1.Dequeue(temp);
    q1.Dequeue(temp);
    q1.Dequeue(temp);
    cout<<"After dequed three items.  \n";
    if(q1.IsEmpty())
        cout<<"Queue is Empty"<<endl;
    else
        cout<<"Queue is not Empty"<<endl;

    try
    {
        cout<<"After dequed one more item.  \n";
        q1.Dequeue(temp);
    }
    catch(EmptyQueue e)
    {
        cout<<"Queue Underflow"<<endl;
    }
    string ctemp;
    int n;
    cout<<"Enter a number :\n";
    cin>>n;
    QueType<string> q3;
    q3.Enqueue("1");

    for(int i=0; i<n; i++)
    {
        q3.Dequeue(ctemp);
        cout<<ctemp<<endl;
        q3.Enqueue(ctemp+"0");
        q3.Enqueue(ctemp+"1");
    }
}
