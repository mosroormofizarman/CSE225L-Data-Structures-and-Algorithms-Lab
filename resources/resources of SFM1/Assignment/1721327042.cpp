#include<bits/stdc++.h>

using namespace std;

int fib(int n);
void invPrint(int n);
int BinToDec(int bin);
int DecToBin(int dec);
string DecToHex(int dec, string s);
int multiply(int x, int y);
int countArr(int a[], int s);
string reverseString(string s);
void isPalindrome(string s, int i);
double sum(int n);

int main()
{
    cout<<fib(6)<<endl;
    invPrint(123);
    cout<<endl;
    cout<<BinToDec(110)<<endl;
    cout<<DecToBin(7)<<endl;
    cout<<DecToHex(13,"")<<endl;
    cout<<multiply(3,5)<<endl;
    int a[5] = {1,2,3,4,5};
    cout<<countArr(a,0)<<endl;
    cout<<reverseString("hello")<<endl;
    isPalindrome("racecar", 0);
    cout<<sum(3)<<endl;
}

//nth fibonacci
int fib(int n)
{
    if(n<=1){return n;}
    return fib(n-1) + fib(n-2);
}

//print in inverse order
void invPrint(int n)
{
    if(n==0){return;}
    cout<<n%10;
    invPrint(n/10);
}

//binary to decimal
int BinToDec(int bin)
{
    if(bin==0){return 0;}
    return (bin%10+2*BinToDec(bin/10));
}

//decimal to binary
int DecToBin(int dec)
{
    if(dec==0){return 0;}
    return (dec%2+10*DecToBin(dec/2));
}

//decimal to hexa decimal
string DecToHex(int dec, string s)
{
    int x = dec % 16;
    char xC = x + '0';
    if (dec==0){return s;}
    switch(x){
        case 10: s = 'A' + s; break;
        case 11: s = 'B' + s; break;
        case 12: s = 'C' + s; break;
        case 13: s = 'D' + s; break;
        case 14: s = 'E' + s; break;
        case 15: s = 'F' + s; break;
        default: s = xC + s;
    }
    return DecToHex(dec/16, s);
}
//multiplication
int multiply(int x, int y)
{
    if(x<y){return multiply(y,x);}
    else if(y != 0){return (x + multiply(x,y-1));}
    else{return 0;}
}

//count array size
int countArr(int a[], int s)
{
    if(a[s]=='\0'){return 0;}
    else{return 1+countArr(a,++s);}
}

//inverse string
string reverseString(string s)
{
    if(s.size()==1) {return s;}
    else{return reverseString(s.substr(1,s.size())) + s.at(0);}
}

//palindrome string
void isPalindrome(string s, int i)
{
    int l=s.size()-(i+1);
    if(s[i]==s[l]){
        if(i+1==l || i==l){
            cout<<"Palindrome"<<endl;
            return;
        }
        isPalindrome(s, i+1);
    }else{
        cout<<"Not Palindrome"<<endl;
    }
}

//sum series
double sum(int n)
{
    if(n==0){return 0;}
    else{return 1.0/n+sum(n-1);}
}
