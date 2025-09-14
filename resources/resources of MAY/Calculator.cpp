//name: Rahat Islam Akash
//Id: 1631239042
#include "Calculator.h"
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

template <class item>
Calculator<item>::Calculator(){
    num1=0;
    num2=0;
}
template <class item>
Calculator<item>::Calculator(item a, item b){
    num1=a;
    num2=b;
}
template <class item>
void Calculator<item>::setNum1(item a){
     num1=a;
}
template <class item>
void Calculator<item>::setNum2(item b){
     num2=b;
}
template <class item>
item Calculator<item>::getNum1(item a){
    return num1;
}
template <class item>
item Calculator<item>::getNum2(item b){
    return num2;
}
template <class item>
void Calculator<item>::add(item a, item b){
   item result = a+b;
   cout<<"Result is: "<<result<<endl;
}
template <class item>

void Calculator<item>::sub(item a, item b){
   item result = a-b;
   cout<<"Result is: "<<result<<endl;

 }
template <class item>
void Calculator<item>::mul(item a, item b){
   item result = a*b;
   cout<<"Result is: "<<result<<endl;

 }

template <class item>
void Calculator<item>::div(item a, item b){
   item result = a/b;
   cout<<"Result is: "<<result<<endl;

 }



