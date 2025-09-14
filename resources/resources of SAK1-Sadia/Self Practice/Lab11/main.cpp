#include "quetype.cpp"
#include <iostream>
using namespace std;

int main()
{
    QueType<int> q,cost;

    int n, target, temp, count=0;
    cout << "Insert the number of coin type:    ";
    cin >> n;

    int array[n];

    for(int i=0; i<n; i++)
    {
        cin >> array[i];
    }

    cout << "Target:    ";
    cin >> target;

    for(int i=0; i<n; i++)
    {
        q.Enqueue(array[i]);
        cost.Enqueue(1);
    }

    while(true)
    {
        q.Dequeue(temp);
        cost.Dequeue(count);
        if(temp==target)
            break;
        else
        {
            count++;
            for(int i=0; i<n; i++)
            {
                q.Enqueue(temp+array[i]);
                cost.Enqueue(count);
            }
        }
    }
    cout <<"Expected Output:" << count << endl;
    q.~QueType();
    cost.~QueType();

    cout << endl << "Insert the number of money type:    ";
    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> array[i];
    }

    cout << "Target:    ";
    cin >> target;

    for(int i=0; i<n; i++)
    {
        q.Enqueue(array[i]);
        cost.Enqueue(1);
    }

    while(true)
    {
        q.Dequeue(temp);
        cost.Dequeue(count);
        if(temp==target)
            break;
        else
        {
            count++;
            for(int i=0; i<n; i++)
            {
                q.Enqueue(temp+array[i]);
                cost.Enqueue(count);
            }
        }
    }
    cout <<"Expected Output:" << count << endl;
    q.~QueType();
    cost.~QueType();

    cout << endl << "Insert the number of money type:    ";
    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> array[i];
    }

    cout << "Target:    ";
    cin >> target;

    for(int i=0; i<n; i++)
    {
        q.Enqueue(array[i]);
        cost.Enqueue(1);
    }

    while(true)
    {
        q.Dequeue(temp);
        cost.Dequeue(count);
        if(temp==target)
            break;
        else
        {
            count++;
            for(int i=0; i<n; i++)
            {
                q.Enqueue(temp+array[i]);
                cost.Enqueue(count);
            }
        }
    }
    cout <<"Expected Output:" << count << endl;
    q.~QueType();
    cost.~QueType();

    return 0;
}
