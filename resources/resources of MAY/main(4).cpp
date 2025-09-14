#include <iostream>

using namespace std;

int main()
{

    int num;
    cout<<"Enter your number: ";
    cin>>num;
    if(num=100&&num>=80)
    {
        cout<<"Your grade is A";
    }
    else if(num<80&&num>=70)
    {
        cout<<"Your grade is B";
    }
    else if(num<70&&num>=60)
    {
        cout<<"Your grade is C";
    }
    else if(num<60&&num>=50)
    {
        cout<<"Your grade is D";
    }
    else if(num<50&&num>=40)
    {
        cout<<"Your grade is D-";
    }
    else
        {
            cout<<"Your grade is hehehehe";
        }
}
