#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

class Complex
{
    public:
        Complex();
        Complex(double, double);
        Complex operator+(Complex);
        void print();
        Complex operator-(Complex);
    private:
        double real,  imaginary;
};

#endif // COMPLEX_H_INCLUDED
