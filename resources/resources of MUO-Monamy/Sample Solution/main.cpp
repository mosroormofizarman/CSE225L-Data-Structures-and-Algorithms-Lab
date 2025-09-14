#include <iostream>

using namespace std;

int main()
{
    cout << "Dynamic memory allocation" << endl;
    //for variable
    int *a = new int;
    float *b = new float;

    *a=200;
    *b=100.1;
    cout<< a<<endl;
    cout<<b<<endl;
     cout<< *a<<endl;
    cout<<*b<<endl;
    delete a;
    delete b;
    cout << "Dynamic memory allocation for 1D array" << endl;
    int *s = new int[5];
    cout<<"please enter the size of an array" <<endl;
    int sizer;
    cin>>sizer;
    int *oneDArray = new int[sizer];
    cout<<"please enter the elements of the array" <<endl;
    for(int i=0;i<sizer;i++)
    {
        cin>>oneDArray[i];
    }
    cout<<"the array is: "<<endl;
        for(int i=0;i<sizer;i++)
    {
        cout<<oneDArray[i]<< " ";
    }
    delete []oneDArray;

    return 0;
}
