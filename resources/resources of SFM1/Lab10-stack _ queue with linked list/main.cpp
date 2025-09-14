#include <bits/stdc++.h>
#include "stack.cpp"
#include "queue.cpp"

using namespace std;

int main()
{
    StackLL<int> sl;
    QueueLL<int> ql;
    int n;

    cout<<"Enter the integers : "<<endl;
    for(int i=0; i<5; i++){
        cin>>n;
        sl.push(n);
        ql.enqueue(n);
    }
    sl.display();
    ql.display();

}
