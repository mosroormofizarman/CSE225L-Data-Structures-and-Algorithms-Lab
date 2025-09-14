#include <iostream>
using namespace std;

int main()
{
            int a,b;

            cout<<"\n Enter a Number : ";
            cin>>a;

switch(a)
    {
        case 0:
                cout<<"\n Number is Even";
                        break;
        case 1:
                cout<<"\n Number is Odd";
                        break;
        default:
                b=a%2;


switch(b)
   {
        case 0:
                cout<<"\n Number is Even";
                        break;
        default:
                cout<<"\n Number is Odd";
    }
}


        return 0;

}
