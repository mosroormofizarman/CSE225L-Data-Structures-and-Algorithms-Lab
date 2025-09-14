#include "complex.h"
#include<bits/stdc++.h>

using namespace std;

Complex::Complex()
{
    real = imaginary =0;
}

Complex::Complex(double r, double i)
{
    real =r;
    imaginary =i;
}

Complex Complex::operator+(Complex a)
{
    Complex t;
    t.real = real+a.real;
    t.imaginary = imaginary+a.imaginary;
    return t;
}

Complex Complex::operator-(Complex a)
{
    Complex t;
    t.real = real-a.real;
    t.imaginary = imaginary-a.imaginary;
    return t;
}

void Complex::print()
{
    cout<< real<<endl;
    cout<< imaginary<<endl;
}
