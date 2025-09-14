#include <iostream>
#include "QueType.cpp"
using namespace std;

int main()
{
    for(int i = 0; i < 2; i++)
    {
        QueType<int> q,cost;
        int size;
        cin >> size;
        int array[size];
        for(int i=0; i<size; i++)
        {
            cin >> array[i];
        }
        int target;
        cin >> target;
        for(int i=0; i<size; i++)
        {
            q.Enqueue(array[i]);
            cost.Enqueue(1);
        }
        int temp,count=0;
        while(true)
        {
            q.Dequeue(temp);
            cost.Dequeue(count);
            if(temp==target)
                break;
            else
            {
                count++;
                for(int i=0; i<size; i++)
                {
                    q.Enqueue(temp+array[i]);
                    cost.Enqueue(count);
                }
            }
        }
        cout <<"Answer: " << count << endl;
    }
    return 0;
}
