#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Please enter the length:" << endl;
    cin>>a;

    int *p=new int[a];
    for(int i=0; i<a;i++)
    {

        cout<<"please enter the elements:"<<endl;
        cin>>p[i];
    }
    for(int j=0; j<a; j++)
    {
        cout<<"elements are:"<<p[j]<<endl;
    }
    delete[]p;
    p=NULL;
    return 0;
}
