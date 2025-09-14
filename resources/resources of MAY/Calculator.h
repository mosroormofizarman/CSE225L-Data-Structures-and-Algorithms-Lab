//name: Rahat Islam Akash
//Id: 1631239042
#ifndef CALCULATOR_H_INCLUDED
#define CALCULATOR_H_INCLUDED
#include <iostream>
#include <string>
#include <stdio.h>
template <class item>
class Calculator{
private:
    item num1, num2;
public:
    Calculator();
    Calculator(item a,item b);
    void setNum1(item a);
    void setNum2(item b);
    int getNum1(item a);
    int getNum2(item b);
    void add(item a, item b);
    void sub(item a, item b);
    void mul(item a, item b);
    void div(item a, item b);



};




#endif // CALCULATOR_H_INCLUDED
