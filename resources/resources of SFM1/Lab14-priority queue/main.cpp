#include <bits/stdc++.h>
#include "pqtype.cpp"

using namespace std;

int main()
{
    PQType<int> pq(15);
    if(pq.IsEmpty()){
        cout<<"Queue is empty"<<endl;
    }
    cout<<"Enter the items :"<<endl;
    int a;
    for(int i=0; i<10; i++){
        cin>>a;
        pq.Enqueue(a);
    }
    a=17;
    pq.Dequeue(a);
    a=11;
    pq.Dequeue(a);
    pq.printQueue();
}
