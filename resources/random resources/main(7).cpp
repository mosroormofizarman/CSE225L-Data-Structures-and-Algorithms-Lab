#include <iostream>
#include"QueType.cpp"

using namespace std;

int main()
{
    int number_of_coin, temp, value;
    cout<<"Number of coins"<<endl;

    cin>>number_of_coin;

    QueType<int> cion, que, cost;

    int cion_arry[number_of_coin];

    cout<<"Enter the input:"<<endl;

    for(int i=0; i<number_of_coin; i++)
    {
        cin>>temp;
        cion_arry[i]=temp;
    }

    cout<<"The amount of money have to make:"<<endl;
    cin>>value;

    que.Enqueue(0);
    cost.Enqueue(0);

    int cur_cion, tem_que=0, tem_cost;

    while(tem_que!=value)
    {
        que.Dequeue(tem_que);

        cost.Dequeue(tem_cost);

        for(int i=0; i<number_of_coin; i++)
        {
            cur_cion=cion_arry[i];

            que.Enqueue(tem_que+cur_cion);

            cost.Enqueue(tem_cost+1);
        }


    }


    cout<<"The output is: "<<endl;

    cout<<tem_cost<<endl;

    cout<<endl;

}


