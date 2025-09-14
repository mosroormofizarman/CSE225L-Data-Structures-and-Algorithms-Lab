#include<bits/stdc++.h>

using namespace std;

double sum(int n){
    if(n==0){return 1;}
    return 1.0/pow(2,n) + pow(2,n-1);
}

int main(){
  int n;
  cin>>n;
  cout<<sum(n);
}
