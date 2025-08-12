// LCM -> EUCLID'S ALGORITHM

#include<iostream>
using namespace std;
int gcd(int a , int b){
  if(a==0) return b;
  if(b==0) return a;

  while (a!=b)
  {
    if(a>b){
      a = a - b;
    }
    else{
      b = b -a;
    }
  }
  return a;
}

int lcm(int a,int b){
return (a * b) / gcd(a,b);
}

int main(){
int a,b;
cout<<"enter a : ";
cin>>a;
cout<<"enter b : ";
cin>>b;

int ans = lcm(a,b);
cout<<"lcm of a and b is : "<<ans;
  return 0;
}