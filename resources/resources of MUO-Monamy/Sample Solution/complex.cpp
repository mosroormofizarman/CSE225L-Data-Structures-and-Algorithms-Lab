#include "complex.h"
#include <iostream>
using namespace std;
Complex::Complex()
{
Real = 0;
Imaginary = 0;
}
Complex::Complex(double r, double i)
{
Real = r;
Imaginary = i;
}
Complex Complex::operator+(Complex a)
{
Complex t;
t.Real = Real + a.Real;
t.Imaginary = Imaginary + a.Imaginary;
return t;
}

bool Complex::operator!=(Complex cn)
{
    if(this->Real==cn.Real)
    {
        if(this->Imaginary==cn.Imaginary)
        {
            return false;
        }
        else{
            return true;
        }
    }
    else{

            return true;
        }
}

void Complex::Print(){
cout << Real <<" + "<< Imaginary <<"i"<< endl;
}
