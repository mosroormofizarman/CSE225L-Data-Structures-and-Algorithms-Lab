#include <iostream>
#include"pqtype.h"
#include"pqtype.cpp"
using namespace std;

int main()
{
    int s;
    cout<<"Enter the size of the PQ : ";
    cin>>s;
    PQType<int> obj1(s);
    bool f;
    f= obj1.IsEmpty();
    if(f)
    {
        cout<<"Queue is empty."<<endl;
    }
    else{
         cout<<"Queue is not empty."<<endl;
    }
    int item;
    cout<<"Insert ten items : ";
    for(int i =0;i<10;i++)
    {
        cin>>item;
        obj1.Enqueue(item);
    }
    f= obj1.IsEmpty();
    if(f)
    {
        cout<<"Queue is empty."<<endl;
    }
    else{
         cout<<"Queue is not empty."<<endl;
    }
    obj1.Dequeue(item);
    cout<<"Dequeued item is : "<<item<<endl;
    obj1.Dequeue(item);
    cout<<"Dequeued item is : "<<item<<endl;

    int num;
    cout<<"Enter the number of bags : ";
    cin>>num;
    PQType<int>magic(15);
    int time;
    cout<<"Enter the min : ";
    cin>>time;
    int candi;
    cout<<"Enter the number of candies in the bangs : ";
    for(int i=0;i<num;i++)
    {
        cin>>candi;
        magic.Enqueue(candi);
    }
    int sum=0;
    for(int i=1;i<=time;i++)
    {
        magic.Dequeue(s);
        sum+=s;
        s=s/2;
        magic.Enqueue(s);
    }
    cout<<"The maximum number of candies is : "<<sum;
    return 0;
}
