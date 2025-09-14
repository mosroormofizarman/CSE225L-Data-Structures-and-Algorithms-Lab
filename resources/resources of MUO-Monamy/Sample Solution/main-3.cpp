#include <iostream>

using namespace std;
int* declare_array(int length)
{
    int *ptr = new int[length];
    return ptr;
}

void populating_array(int* ptr, int length)
{
    cout<<"please enter the elements of the array" <<endl;
    for(int i=0; i<length; i++)
    {
        //cout<<*ptr<<" "<<ptr<<endl;
        cin>>ptr[i];
    }
}

void printing_array(int* ptr, int length)
{
    cout<<"the array is: "<<endl;
    for(int i=0; i<length; i++)
    {
        cout<<ptr[i]<< " ";
    }
}

int main()
{
    cout << "Dynamic memory allocation for 1D array" << endl;

    cout<<"please enter the size of an array" <<endl;
    int sizer;
    cin>>sizer;

    int *my_array=  declare_array( sizer);
    cout<<*my_array<<" "<<my_array<<endl;
    populating_array(my_array, sizer);
    printing_array(my_array, sizer);


    delete []my_array;
    return 0;
}
