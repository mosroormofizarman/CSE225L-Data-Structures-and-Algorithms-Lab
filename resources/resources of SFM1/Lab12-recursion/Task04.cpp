#include<bits/stdc++.h>

using namespace std;

int findMin(int a[], int size){
    if(size==1){return a[0];}
    int b = findMin(a,size-1);
    if(a[size-1]>b){
        return b;
    }else{
        return a[size-1];
    }

}

int main(){
  int n;
  cout<<"Enter array size : ";
  cin>>n;
  int a[n];
  cout<<"Enter array's values :"<<endl;
  for(int i=0; i<n; i++){
    cin>>a[i];
  }
  cout<<findMin(a, n);
}
