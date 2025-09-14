#include <iostream>

using namespace std;

int main()
{
    int i, m,n,sum=0,avg;

     cout << "Please enter the number of n" <<endl ;
     cin>>n;

 cout << "Please enter the numbers" <<endl ;
        cin>>m;
     for(i=0;i<n;i++)


        sum=sum+m;
        avg=sum/n;
         cout << "sum is" << sum<< endl;
        cout << "average is" << avg<< endl;


        if(sum%2==0)
        {
            cout<<" sum is Even"<<endl;
        }
        else cout<<"sum is Odd"<<endl;





    return 0;
}
