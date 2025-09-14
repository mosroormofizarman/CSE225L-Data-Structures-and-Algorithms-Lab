#include<bits/stdc++.h>

using namespace std;

int sumOfDigits(int x){
    if(n==0){return 0;}
    return (n%10 + sumOfDigits(n/10));
}

int main(){
  int n;
  cin>>n;
  cout<<sumOfDigits(n);
}
