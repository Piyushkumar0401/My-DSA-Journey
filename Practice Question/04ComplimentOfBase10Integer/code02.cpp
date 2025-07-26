#include<iostream>
using namespace std;

int Cobint(int n){
  int m = n;
  int mask = 0;
  if(n==0) return 0;//edge case
  while (n!=0)
  {
   mask = (mask << 1)|1;
   n = n >> 1;
  }
  int ans = (~m)&mask;
  return ans;
  
}

int main(){
int n ;
cout<<"enter the number : ";
cin>>n;
cout<<Cobint(n);
  return 0;
}