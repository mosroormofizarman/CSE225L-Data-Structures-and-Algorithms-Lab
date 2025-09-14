// factorial using recursion

#include<iostream>
using namespace std;
int factorial(int n);
int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Factorial of " << n << " = " << factorial(n);
     return 0;
}
int factorial(int n)
{
    if(n > 1)
        return n * factorial(n - 1);
    else

        return 1;

}



//function
#include<iostream>
using namespace std;
int main()
 {
	int num,factorial=1;
	cout<<" Enter Number To Find Its Factorial:  ";
	cin>>num;
	for (int a=1;a<=num;a++) {
		factorial=factorial*a;
	}
	cout<<"Factorial of Given Number is ="<<factorial<<endl;
	return 0;
}
