#include <iostream>
#include"pqtype.cpp"
using namespace std;

void Print(bool b)
{
    if(b)
    {
        cout<<"Queue is empty.";
    }
    else{
         cout<<"Queue is not empty.";
    }
}

int main()
{
    int s, item, num, time, candi, sum=0;
    bool f;

    cout<<"Enter the size of the PQ: ";
    cin>>s;
    PQType<int> obj1(s);
    f= obj1.IsEmpty();
    Print(f);

    cout<<"\nInsert ten items: ";
    for(int i =0;i<10;i++)
    {
        cin>>item;
        obj1.Enqueue(item);
    }
    f= obj1.IsEmpty();
    Print(f);

    obj1.Dequeue(item);
    cout<<"\nDequeued item is: "<<item;
    obj1.Dequeue(item);
    cout<<"\nDequeued item is: "<<item;

    cout<<"\nEnter the number of bags: ";
    cin>>num;
    PQType<int>magic(15);
    cout<<"Enter the number of minutes: ";
    cin>>time;
    cout<<"Enter the number of candies in the bangs: ";
    for(int i=0;i<num;i++)
    {
        cin>>candi;
        magic.Enqueue(candi);
    }
    for(int i=1;i<=time;i++)
    {
        magic.Dequeue(s);
        sum+=s;
        s=s/2;
        magic.Enqueue(s);
    }
    cout<<"The maximum number of candies is: "<<sum;
    return 0;
}
