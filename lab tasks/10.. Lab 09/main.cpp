#include <iostream>
#include "quetype.cpp"

using namespace std;

int main()
{
    int num;

    QueType<int> q1(5);
    QueType<int> q2(5);

    if(q1.IsEmpty())
        cout << "Queue is Empty";
    else
        cout << "Queue is not Empty";


    cout<<"\nEnqueue four items: ";
    for(int i=0;i<4;i++)
    {
        cin>>num;
        q1.Enqueue(num);
    }


    if(q1.IsEmpty())
        cout << "Queue is Empty";
    else
        cout << "Queue is not Empty";

    cout << endl;
    if(q1.IsFull())
        cout << "Queue is Full";
    else
        cout << "Queue is not full";

    cout << "\nEnqueue another item : ";
    cin >>num;
    q1.Enqueue(num);

    int temp;
    cout << "Values in the queue:\n";
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
    if(q1.IsFull())
        cout << "Queue is Full";
    else
        cout << "Queue is not full";

    try
    {
        cout << "\nEnter another item: ";
        cin >> num;
        q1.Enqueue(num);
    }
    catch(FullQueue e)
    {
        cout << "Queue Overflow";
    }

    cout << "\nDequeue two items: ";
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

    q1.Dequeue(temp);
    q1.Dequeue(temp);
    q1.Dequeue(temp);
    cout << "\nDequeue three items:\n";
    if(q1.IsEmpty())
        cout << "Queue is Empty";
    else
        cout << "Queue is not Empty";

    try
    {
        cout << "\nDequeue an item:\n";
        q1.Dequeue(temp);
    }
    catch(EmptyQueue e)
    {
        cout << "Queue Underflow";
    }

    string ctemp;
    int n;
    cout << "\nEnter a number: ";
    cin >> n;
    QueType<string> q3;
    q3.Enqueue("1");

    for(int i=0; i<n; i++)
    {
        q3.Dequeue(ctemp);
        cout << ctemp <<endl;
        q3.Enqueue(ctemp+"0");
        q3.Enqueue(ctemp+"1");
    }
}
