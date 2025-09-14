#include <iostream>
#include "complex.h"
using namespace std;

int main()
{
    cout << "Operator overloading" << endl;
    double real, imaginary;
    cout<<"Please enter the real and imaginary part of the first complex number"<<endl;
    cin>>real;
    cin>>imaginary;
    Complex c1(real,imaginary);



    c1.Print();
    cout<<"Please enter the real and imaginary part of the second complex number"<<endl;
    cin>>real;
    cin>>imaginary;
    Complex c2(real,imaginary);
    c2.Print();


//cout<<c1+c2<<endl;
    if(c1!=c2)
    {
        cout<<"the numbers are not equal"<<endl;
    }
    else{
        cout<<"equal"<<endl;
    }

    cout<<22.3+44.2<<endl;
    Complex c3(0,0);
    c3 = c1+c2;

    c3.Print();

    return 0;
}
