//Fibonacci Series using Recursion
#include <iostream>
using namespace std;

int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
}

//int main ()
//{
   // int n = 9;
    //cout << fib(n);
     //return 0;
//}



//using function
#include<iostream>
using namespace std;
int genFibonacci(int n) {
   int fibo[n+2];
   fibo[0] = 0;
   fibo[1] = 1;
   for (int i = 2; i <= n; i++) {
      fibo[i] = fibo[i-1] + fibo[i-2];

   }
   return fibo[n];
}
int main () {
   int n=9;
   cout << fib(n);
     return 0;

}
