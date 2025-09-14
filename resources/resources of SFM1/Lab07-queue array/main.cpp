#include <bits/stdc++.h>
#include "quetype.cpp"

using namespace std;

int main()
{
    //create a queue of size 5
    QueueType<int> intQueue(5);
    //print if the queue is empty or not
    if(intQueue.isEmpty()){
        cout<<"Queue is empty"<<endl;
    }else{
        cout<<"Queue is not empty"<<endl;
    }
    //enqueue four items
    cout<<"Enqueue 4 items : "<<endl;
    int n;
    for(int i=0; i<4; i++){
        cin>>n;
        intQueue.enqueue(n);
    }
    //enqueue another item
    intQueue.enqueue(5);
    //enqueue another item
    try{
        intQueue.enqueue(6);
    }
    catch(FullQueue fq){
        cout<<"Queue is full"<<endl;
    }
    //print the queue
    intQueue.printQueue();
}
